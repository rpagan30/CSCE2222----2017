#include<string>
#include"ParkedCar.h"
#include"ParkingMeter.h"
#include"PoliceOfficer.h"
#include<iostream>
using namespace std;

int main()
{
    int option;
    ParkedCar car;
    ParkingMeter meter;
    
    
    do {
        string aname, abadge, amake, amodel, alicensenumber, acolor;
        int aminutespurchased, aparkedminutes;
        
        cout << "--------------------------------" << endl;
        cout << " ~Parking Ticket Simulator~" << endl;
        cout << "--------------------------------" << endl;
        cout << endl;
        cout << "Vehicle Information:" << endl;
        cout << "Make: ";
        cin>>amake;
        
        cout << "Model: ";
        cin>>amodel;
        
        cout << "Color: ";
        
        cin>>acolor;
        cout << "License Number: ";
        
        cin>>alicensenumber;
        cout << "Parked Minutes: ";
        cin>> aparkedminutes;
        car.set(amake, amodel, acolor, alicensenumber, aparkedminutes);
        cout << "Minutes Purchased: ";
        cin >> aminutespurchased;
        meter.setparkingmeter(aminutespurchased);
        
        cout << endl;
        cout << "Officer Information:" << endl;
        cout << "Name: ";
        cin>>aname;
        cout << "Badge ID: ";
        cin>>abadge;
        PoliceOfficer officer(aname, abadge,amake,amodel,acolor,alicensenumber,aparkedminutes,aminutespurchased);
        system("cls");
        officer.patrol();
        cout << endl;
        cout << "Enter 0 to exit or any number to restart: ";
        cin >> option;
    } while (option != 0);
    system("pause");
    return 0;
}






