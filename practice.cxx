#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

class acc_info {
	public:
	string user;
	int accode, edit;
	float bal;
	
void reg_acc(){
	cout<<"Username: ";
	getline(cin, user);
	cout<<"Account Code: "; cin>>accode;
	cout<<"Initial Balance (₱): "; cin>>bal;
}
void view(){
		cout<<"Username: "<<user<<endl;
		cout<<"Account Code: "<<accode<<endl;
		cout<<"Current Balance (₱): "<<bal<<endl<<endl;
		system("pause");
		system("cls");
}
void deposit(){
	float damount;
	cout<<"Enter the amount of money you want to deposit: ";	cin>>damount;
	bal+=damount;
	system("pause");
	system("cls");
}
void withdraw(){
	float wamount;
	cout<<"Enter the amount of money you want to withdraw: ";	cin>>wamount;
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
};

int main()
{
	int choice;
	
	cout<<"click to continue"<<endl;
	getch();
	system("cls");
	
	acc_info user1;
	user1.reg_acc();
	system("cls");

	do{
	cout<<"(1) View Account\n(2)Deposit\n(3)Withdraw\n(4) Exit"<<endl<<endl;
	cout<<"Your choice: ";
	cin>>choice;
	system("cls");

switch (choice){
		case 1:
		user1.view();
		break;
		
		case 2:
		user1.deposit();
		break;
		
		case 3:
		user1.withdraw();
		break;
		
		case 4:
		return 0;
		break;
		
		default:
		cout<<"You have chosen the wrong option."<<endl;
	}
}
	while(choice<=4 && choice>=1);
	return 0;
}