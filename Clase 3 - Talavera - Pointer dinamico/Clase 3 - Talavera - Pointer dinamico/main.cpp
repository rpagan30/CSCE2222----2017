

// This program totals and averages the sales figures for any
// number of days. The figures are stored in a dynamically
// allocated array.
#include <iostream>
#include <iomanip>
using namespace std;

//fns
double *setptr(int numday);
//ventas
double getTotal(double total, double *sales, int numdays);

//promedio
double getAverage(int numdays, double total);
//display
void display(double total, double average);

int main() {
    
    double *sales = nullptr, total = 0.0, average;

    int numdays;

    cout << "How many days of sales figures do you wish to process? " << endl;
    cin >> numdays;

    sales = setptr(numdays);
    total = getTotal(total, sales, numdays);
    average = getAverage(numdays, total);
    display(total, average);
    delete [] sales;
    sales = nullptr;
    
     return 0;
}

double getTotal(double total, double *sales, int numdays) {

    for( int count = 0; count < numdays; count++)
    {	
        total += *(sales + count);
    }
    
    return total;
}

double getAverage(int numdays, double total) {
    double average;

    average = total / numdays;
    
    return average;
    
}

void display(double total, double average) {
    cout << fixed << showpoint << setprecision(2);
    cout <<"\nTotal Sales: $" << total << endl;
    cout << "Average Sales: $" << average << endl;
    
}

double *setptr(int numdays) {
    
    double *arr = nullptr;
    
    arr = new double[numdays];
    
    cout << "Enter the sales figure below." << endl;
    
    for(int count = 0; count < numdays; count++)
    {
        cout << "Day " << (count + 1) << ": " << endl;
        cin >> *(arr + count);
        
    }
    
    return arr;
    
}
