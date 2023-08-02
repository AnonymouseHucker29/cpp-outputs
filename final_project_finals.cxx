#include <iostream>
#include <cstdlib>
#include <conio.h>

#define name 50

using namespace std;

//global variable ni sila
	char user[name];
	int accode, edit;
	float bal;
//^^^^^^^^^^^^^^^
	
void reg_account(){
	cout<<"Please enter the required information to continue: "<<endl<<endl;
	cout<<"Username: ";
	cin.getline(user, name);
	cout<<"Account Code (only numbers allowed): ";
	cin>>accode;
	cout<<"Initial Balance (Php): ";
	cin>>bal;
	cout<<endl;
}
void menu(){
	system("cls");
	cout<<"**************** What do you want to do? ******************"<<endl;
	cout<<"(1) View Account\n(2) Edit Account Info\n(3) Deposit\n(4) Withdraw\n(5) Exit"<<endl<<endl;
}
void view_account(){
	cout<<"----------------------Account Details-----------------------"<<endl<<endl;
		cout<<"Username: "<<user<<endl;
		cout<<"Account Code: "<<accode<<endl;
		cout<<"Current Balance (Php): "<<bal<<endl<<endl;
		system("pause");
		system("cls");
}
/* para ni sa pag edit sa account sa username ug account code.
Gi declare ni nako sa ubos */
     void op1(){
		cout<<"New Username: ";
		cin.ignore();
		cin.getline(user, name);
		cout<<"Success! Information has been updated."<<endl;
		system("pause");
    	system("cls");
	}
	void op2 (){
		cout<<"New Account Code (only numbers allowed): ";
		cin>>accode;
		cout<<"Success! Information has been updated."<<endl;
		system("pause");
    	system("cls");
	}
	void op3 (){
		cout<<"New Username: ";
		cin.ignore();
		cin.getline(user, name);
		cout<<"New Account Code (only numbers allowed): ";
		cin>>accode;
		cout<<"Success! Informations have been updated."<<endl;
		system("pause");
	    system("cls");
	}
/*--------------------diri ta taman----------------------*/
void edit_account(){
	cout<<"---------------------Edit Account Info---------------------"<<endl<<endl;
		cout<<"Current Username: "<<user<<endl;
		cout<<"Current Account Code: "<<accode<<endl<<endl;
		cout<<"What info do you want to edit?"<<endl<<"Type (1) for username, (2) for account code ,(3) for both or (4) to go back."<<endl;
		cin>>edit;
		if (edit==1){
		op1();
		}
		else if (edit==2){
		op2();
		}
		else if (edit==3){
		op3();
		}
		else if (edit==4){
			return menu();
			system("cls");
		}
		else {
		cout<<"Error Input. Try Again!"<<endl;
		system("pause");
		system("cls");
		return edit_account();
		}
}
void deposit(){
	float damount;
	cout<<"------------------------Deposit----------------------------"<<endl<<endl;
	cout<<"Enter the amount of money you want to deposit: ";
	cin>>damount;
	bal+=damount;
	cout<<"Success! Money has been updated."<<endl;
	system("pause");
	system("cls");
}
void withdraw(){
	float wamount;
	cout<<"------------------------Withdraw----------------------------"<<endl<<endl;
	cout<<"Enter the amount of money you want to withdraw: ";
	cin>>wamount;
	if (wamount>bal){
	cout<<"Sorry. Not enough balance."<<endl;
	system("pause");
	system("cls");
	return withdraw();
	}
	else if (wamount==bal){
		bal-=wamount;
		cout<<"Success. Warning! You don't have money left in your account!"<<endl;
	}
	else{
	bal-=wamount;
	cout<<"Success! Money has been updated."<<endl;
	}
system("pause");
system("cls");
}

int main()
{
	int choice;
	
	cout<<"----------Welcome to Brent's Banking System (BBS)!----------"<<endl;
	getch();
	system("cls");
	
	reg_account();
	system("cls");

	do{
	menu();
	cout<<"Your choice: ";
    cin>>choice;
	system("cls");

switch (choice){
		case 1:
		view_account();
		break;
		
		case 2:
		edit_account();
		break;
		
		case 3:
		deposit();
		break;
		
		case 4:
		withdraw();
		break;
		
		case 5:
		cout<<"Thanks for using the BBS! :D"<<endl;
		return 0;
		break;
		
		default:
		cout<<"You have chosen the wrong option."<<endl;
	}
}
	while(choice<=5 && choice>=1);
	return 0;
}