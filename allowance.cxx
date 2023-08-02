#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

int main()
{
	getch();
	int bal=100;
	
	for (int i=7; i<=14; i++){
	
	while (i!=14){
		cout<<"Day "<<i-6<<endl;
		break;
	}
	
	int exp;
	cout<<"Allowance: "<<bal<<endl;
	cout<<"Enter cost of expenses: ";
	cin>>exp;
	
	cout<<"Money left: "<<bal-exp<<endl;
	bal=100+(bal-exp);
	
	if (i==11){
		break;
	     }
	
	if (exp>bal){
		bal=100;
		cout<<"Pangutang Sa!"<<endl;
	     }
	
	system("pause");
	system("cls");
	}
return 0;
}