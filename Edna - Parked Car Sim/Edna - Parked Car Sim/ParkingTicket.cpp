#include"ParkingTicket.h"
#include"PoliceOfficer.h"
#include <cmath>

ParkingTicket::ParkingTicket()
{
    fine = 0;
}
ParkingTicket::ParkingTicket(string aname, string abadge, string amake, string amodel, string acolor, string alicensenumber, int aparkedminutes, int aminutespurchased)
{
    PC.set(amake, amodel, acolor, alicensenumber, aparkedminutes);
    PM.setparkingmeter(aminutespurchased);
    //PO.setOfficer(aname, abadge);
}

ParkingTicket::ParkingTicket(PoliceOfficer PO)
{
    PC.set(PO.getCar().getmake(),PO.getCar().getmodel(),PO.getCar().getcolor(),PO.getCar().getlicensenumber(),PO.getCar().getparkedminutes());
    PM.setparkingmeter(PO.getMeter().getparkingmeter());
    //PO.setOfficer(PO.getname(),PO.getbadge());
}
ParkingTicket::~ParkingTicket()
{
}
void ParkingTicket::reportCarInfo()
{
    PC.parkedcardisplay();
}
void ParkingTicket::reportfine()
{
    
    int difference = abs(PC.getparkedminutes() - PM.getparkingmeter());
    int hour = 60; //60 mins = 1 hour
    
    if (PC.getparkedminutes() > PM.getparkingmeter()) {
        
        double extra_hours = (double) difference / (double) hour;
        
        if(extra_hours <= 1) {
            fine = 25;
        } else if(extra_hours > 1 ) {
            int h = (int) round(extra_hours);
            
            fine = 25 + (h-1) * 10;
        }
    }
    
    cout << "Fine: $" << getfine() << endl;
}
void ParkingTicket::reportOfficer()
{
    PO.displayofficer();
}
int ParkingTicket::getfine() const
{
    return fine;
}

void ParkingTicket::generateticket()
{
    cout << endl;
    cout << "-----------------------------" << endl;
    cout << " ~ILLEGAL PARKING TICKET~" << endl;
    cout << "-----------------------------" << endl;
    reportCarInfo();
    reportfine();
    //reportOfficer();
    cout << endl;
}
