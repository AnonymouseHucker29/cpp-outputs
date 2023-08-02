#include <iostream>
using namespace std;

int main()
{
	int year;
	
	cout<<"Input a year (4 digit): ";
	cin>>year;
	
	if (year<1752){
		cout<<"Year invalid or not a leap year"<<endl;
	}
	else if ((year%400==0 || year%100!=0)&&(year%4==0)){
		cout<<year<<" is a leap year."<<endl;
	}
	else {
		cout<<year<<" is not a leap year."<<endl;
	}
	return main();
}