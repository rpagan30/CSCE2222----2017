//Code Blocks: Project Build Options Linker settings Other linker options: add -lgdi32
#define _WIN32_WINNT 0x0500
//#include "windows.h"

#include <QImage>
//#include "Wingdi.h"
#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;
#define PI 3.14
#define NMAX 1000
int main(){
    
    //////////////////////////////////////////////////
    double G=9.81,ang=53,v0=10,v0x,v0y; //Inicializar el angulo y la velocidad inicial
    v0x = v0*cos(ang*PI/180); //Velocidad inicial horizontal
    v0y = v0*sin(ang*PI/180); //Velocidad inicial vertical
    //printf ("Initial speed v0: %.2f. Angle : %.2f\n",v0,ang);
    //printf ("v0x: %.2f\n",v0x);
    //printf ("v0y: %.2f\n",v0y);
    double tFinal = 2*v0y/G; //tiempo de la bala en el aire
    //double yMax = v0y*tFinal/2-0.5*G*tFinal/2*tFinal/2;
    //printf ("tFinal: %.2f\n",tFinal);
    double Ts=0.1;
    int N = (int)(tFinal/Ts);
    //printf ("Number of measures: %d\n",(N+1));
    double x[NMAX+2],y[NMAX+2],t[NMAX+2];
    printf ("t: secs. xpos. ypos. vx. vy\n");
    for (int n = 0; n <= N; n++) {
        t[n]=n*Ts;
        x[n]=v0x*t[n];
        y[n]=v0y*t[n]-0.5*G*t[n]*t[n];
        //printf ("t%d: %.2f  %.2f  %.2f  %.2f %.2f\n",
        //                    n,t[n],x[n],y[n],v0x,v0y-G*t[n]);
    }
    t[N+1]=tFinal;
    x[N+1]=v0x*tFinal;
    y[N+1]=v0y*t[N+1]-0.5*G*t[N+1]*t[N+1];
    //printf ("t%d: %.2f  %.2f  %.2f  %.2f %.2f\n",
    //                     N+1,t[N+1],x[N+1],y[N+1],v0x,v0y-G*tFinal);
    
    //////////////////////////////////////////////////////
    
    //////////////////////////////////////////////////////
    HWND myconsole = GetConsoleWindow();
    HDC mydc = GetDC(myconsole);//hWnd
    //SetWindowPos( myconsole, 0, 0, 500, 800, 600, SWP_NOMOVE |  SWP_NOZORDER );
    RECT rect;
    COLORREF RED= RGB(255,0,0),BLUE= RGB(0,0,255), WHITE= RGB(255,255,255);
    GetWindowRect(myconsole, &rect);//get console coordinates
    //cout << "Console top coords: " << rect.left << " " <<rect.top << endl;
    //cout << "Console bot coords: " << rect.right << " " <<rect.bottom << endl;
    //MoveWindow(myconsole, 0, 0, 800, 600, TRUE); // 800 width, 600 height
    //GetClientRect(myconsole, &rect);//get console coordinates
    //cout << "Console top coords: " << rect.left << " " <<rect.top << endl;
    //cout << "Console bot coords: " << rect.right << " " <<rect.bottom << endl;
    int xmiddle= -200+(rect.right - rect.left) / 2;
    int ymiddle= (rect.bottom - rect.top) / 2;
    
    for(int i = 0; i < ymiddle; ++i) //Positive y axis (starts at top)
        SetPixel(mydc, xmiddle, i, RED);//Plot y axis
    for(int i = xmiddle; i < 2*xmiddle; ++i)//Positive x axis
        SetPixel(mydc, i,ymiddle , RED); //Plot x axis
    
    //Plot the (0,0) coordinate with 5 pixels to paint a bold point
    SetPixel(mydc, xmiddle, ymiddle, WHITE);//Plot 0,0
    SetPixel(mydc, xmiddle-1, ymiddle, WHITE);//Plot 0,0
    SetPixel(mydc, xmiddle+1, ymiddle, WHITE);//Plot 0,0
    SetPixel(mydc, xmiddle, ymiddle-1, WHITE);//Plot 0,0
    SetPixel(mydc, xmiddle, ymiddle+1, WHITE);//Plot 0,0
    
    int pixel =0,multip=50;
    double xcur,ycur;
    for(int n = 0; n < N+1; n++){
        xcur=(double)xmiddle+multip*x[n];//Current x coordinate
        ycur= ymiddle-multip*y[n];//Current y coordinate
        
        //Plot 5 pixels per coordinate so it is bold on the screen
        SetPixel(mydc,(int)xcur,(int)ycur,WHITE);
        SetPixel(mydc,(int)xcur-1,(int)ycur,WHITE);
        SetPixel(mydc,(int)xcur+1,(int)ycur,WHITE);
        SetPixel(mydc,(int)xcur,(int)ycur-1,WHITE);
        SetPixel(mydc,(int)xcur,(int)ycur+1,WHITE);
        
        //Plot each x unit in blue
        SetPixel(mydc,xmiddle+multip*n,ymiddle,BLUE);
        SetPixel(mydc,xmiddle+multip*n-1,ymiddle,BLUE);
        SetPixel(mydc,xmiddle+multip*n+1,ymiddle,BLUE);
        SetPixel(mydc,xmiddle+multip*n,ymiddle-1,BLUE);
        SetPixel(mydc,xmiddle+multip*n,ymiddle+1,BLUE);
        
        //Plot each y unit in blue if less than ymiddle
        if(rect.top+multip*n<ymiddle){
            SetPixel(mydc,xmiddle,rect.top+multip*n,BLUE);
            SetPixel(mydc,xmiddle-1,rect.top+multip*n,BLUE);
            SetPixel(mydc,xmiddle+1,rect.top+multip*n,BLUE);
            SetPixel(mydc,xmiddle,rect.top+multip*n-1,BLUE);
            SetPixel(mydc,xmiddle,rect.top+multip*n+1,BLUE);
        }
        
        //SetPixel(mydc,xmiddle,(int)ycur,BLUE);
        pixel+=10;
    }
    
    ReleaseDC(myconsole, mydc);
    cin.ignore();
    return 0;
}

/* Codigo original
 int main(){
 HWND myconsole = GetConsoleWindow();
 HDC mydc = GetDC(myconsole);
 int pixel =0;
 COLORREF COLOR= RGB(255,255,255);
 
 //Draw pixels
 for(double i = 0; i < PI * 4; i += 0.05)
 {
 SetPixel(mydc,pixel,(int)(50+25*cos(i)),COLOR);
 pixel+=1;
 }
 
 ReleaseDC(myconsole, mydc);
 cin.ignore();
 return 0;
 }
 */
