#include <iostream>

using namespace std;

int main (){

    int day;
    int month;
    int year;

    int days[]={0,31,28, 31,30, 31, 30, 31, 31, 30,31, 30 , 31};

    cout<<"Enter Date: "<<endl;
    cout<< "Month : "; cin>>month;
    cout<< "Day : ";cin>> day;
    cout<< "year : ";cin>>year;
    if (day>31 || month>12 || year<1000 && year>9999){
        cout<<"invalid";
    }

    else if( year%4==0 && year%100!=0 || year%400==0) {

        for ( int i=1; i<month; i++){
            days[2]=29;
            day+=days[i];
        }
    }

    else   {
            for (int i=1; i<month; i++){
            day+=days[i];
            }
    }

    cout<<day;

return 0;

}