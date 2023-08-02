#include <iostream>
using namespace std;

int main()
{
    int month, day, year, febdays= 28, num;

    cout<<"Enter month (MM): ";
    cin>>month;
    cout<<"Enter day (DD): ";
    cin>>day;
    cout<<"Enter year (YYYY): ";
    cin>>year;
    
    if (month>12 || day>31){
    	cout<<"Invalid date."<<endl;
    	return 0;
    }
    
    num=day;
    
    if ((year%400==0 || year%100!=0)&&(year%4==0))
    {
        febdays = 29;
    }

    switch(month)
    {
        case 2:
            num+= 31;
            break;
        case 3:
            num+= 31+febdays;
            break;
        case 4:
            num+= 31+febdays+31;
            break;
        case 5:
            num+= 31+febdays+31+30;
            break;
        case 6:
            num+= 31+febdays+31+30+31;
            break;
        case 7:
            num+= 31+febdays+31+30+31+30;
            break;            
        case 8:
            num+= 31+febdays+31+30+31+30+31;
            break;
        case 9:
            num+= 31+febdays+31+30+31+30+31+31;
            break;
        case 10:
            num+= 31+febdays+31+30+31+30+31+31+30;            
            break;            
        case 11:
            num+= 31+febdays+31+30+31+30+31+31+30+31;            
            break;                        
        case 12:
            num+= 31+febdays+31+30+31+30+31+31+30+31+30;            
            break;                                    
    }

    cout<<"Day of year: "<<num<<endl;

    return 0;
}