#include<iostream>
#include<cmath>
using namespace std;

int main()

{

//variable declaration

  float meter, cmeter, kmeter;

    //user input

cout <<"Enter length in centimeters :"<<endl;

    cin >> cmeter;

    // Convert centimeter into meter and kilometer

    meter = cmeter / 100.0;

    kmeter = cmeter / 100000.0;

    //display converted values

    cout<< "Length in Meter :"<<endl;

    cout<< meter<<endl;

    cout << "Length in Kilometer : "<<endl;

    cout << kmeter<<endl;

    return 0;

}