#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    string user, nuser;
	int accode, inbal;
	int choice;
	char redo;
	
	cout<<"--------------Welcome to my banking system!----------------"<<endl;
	getch();
	system("cls");
	
	cout<<"Please enter the required information to continue: "<<endl<<endl;
	cout<<"Username: ";
	cin>>user;
	cout<<"Account Code: ";
	cin>>accode;
	cout<<"Initial Balance: ";
	cin>>inbal;
	cout<<endl;
	
	system("pause");
	system("cls");

choose:{
	cout<<"**************** What do you want to do? ******************"<<endl;
	cout<<"(1) View Account\n(2) Edit Account Info\n(3) Deposit\n(4) Withdraw"<<endl<<endl;
	cout<<"Your choice: ";
	cin>>choice;
	system("cls");
}
	switch (choice){
		case 1:
		cout<<"----------------------Account Details-----------------------"<<endl<<endl;
		cout<<"Username: "<<user<<endl;
		cout<<"Account Code: "<<accode<<endl;
		cout<<"Current Balance: "<<inbal<<endl<<endl;
		cout<<"Do you want to do another transaction?\n(Press Y or y for Yes and N or n to end process)"<<endl;
		cin>>redo;
		    if (redo=='Y'||redo=='y'){
			system("cls");
			    goto choose;
		}
	    	else if (redo=='N'||redo=='n'){
			cout<<"Process Ended!"<<endl;
		    	return 0;
		}
	    	else{
		    	return 0;
		}
		break;
		
		case 2:
		cout<<"---------------------Edit Account Info---------------------"<<endl<<endl;
		cout<<"Current Username: "<<user<<endl;
		cout<<"New Username: ";
		cin>>nuser;
		cout<<"Success!"<<endl;
		system("pause");
		system("cls");
		break;
		
		case 3:
		break;
		
		case 4:
		break;
		
		default:
		cout<<"You've chosen the wrong option."<<endl;
		
	}

}