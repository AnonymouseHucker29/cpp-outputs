#include<iostream>

using namespace std;

int main(){
    int HOURS_PER_DAY, powerUsed, day;
    double kwh;
    const double PRICE_PER_KWH = 11.14;     // maong gi const nako ni nga variable kay Php11.14 per kWh ang rate sa Philippines as of May 2022
    string device;
    char choice;

    do{
        system("cls");
        cout << "---------------------------" << endl;
        cout << "POWER CONSUMPTION CALCULATOR" << endl;
        cout << "The rate of power consumption per kWh in PH is Php11.14" << endl;
        cout << "---------------------------" << endl;

        cout << "What device are you using? ";
        cin >> device;

        cout << "---------------------------" << endl;

        cout << "Enter how many hours your " << device << " is being used in a day: ";
        cin >> HOURS_PER_DAY;

        cout << "---------------------------" << endl;

        cout << "Enter the power consumption of the "<< device <<" in Watts (W): ";
        cin >> powerUsed;

        cout << "---------------------------" << endl;

        double perDay = powerUsed * HOURS_PER_DAY;
        kwh = perDay / 1000;

        cout << endl << "Your " << device << " is using "<< perDay << " W per day" << " or " << kwh << " kWh per day." << endl << endl;

        cout << "---------------------------" << endl;

        cout << "Enter how many days you want to calculate the cost of power consumption of " << device << " for: ";
        cin >> day;

        cout << endl << "---------------------------" << endl;

        double totalCost = kwh * PRICE_PER_KWH * day;
        cout << "The total cost of power consumption of " << device << " for " << day << " days in PH is Php " << totalCost << "." << endl;
        cout << "---------------------------" << endl;

        cout << "Press 'Y' or 'y' to continue using the program. ";
        cin >> choice;
        }
    while(choice == 'y' || choice == 'Y');
    
}}}