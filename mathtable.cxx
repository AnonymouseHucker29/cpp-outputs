#include <iostream>
using namespace std;

int num, row;
void add()
{
	cout<<"Addition Table: "<<endl;
	for (int i=1; i<=num; i++){
		for (int j=1; j<=row; j++){
			cout<<i<<" + "<<j<<" = "<<i+j<<endl;
		}
	    cout<<endl;
	}
}
void sub()
{
	cout<<"Subtraction Table: "<<endl;
	for (int i=1; i<=num; i++){
		for (int j=1; j<=row; j++){
			cout<<i<<" - "<<j<<" = "<<i-j<<endl;
		}
	    cout<<endl;
	}
}
void mul()
{
	for (int i=1; i<=num; i++){
		for (int j=1; j<=row; j++){
			cout<<i<<" * "<<j<<" = "<<i*j<<endl;
		}
	    cout<<endl;
	}
}
void div()
{
	float i,j;
	for (i=1; i<=num; i++){
		for (j=1; j<=row; j++){
			float quo=i/j;
			cout<<i<<" ÷ "<<j<<" = "<<quo<<endl;
		}
	    cout<<endl;
	}
}

int main(){
	
	char choice;
	
	cout<<"Please choose: \n"
	      "(a) Addition\n"
	      "(b) Subtraction\n"
	      "(c) Multiplication\n"
	      "(d) Division\n "<<endl;
	      cin>>choice;
	
	cout<<"Up to what number? ";
	cin>>num;
	cout<<endl<<"How many row(s)? ";
	cin>>row;
	
	switch (choice){
	case 'a':
	system("cls");
	add();
	break;
	
	case 'b':
	system("cls");
	sub();
	break;
	
	case 'c':
	system("cls");
	mul();
	break;
	
	case 'd':
	system("cls");
	div();
	break;
	
	default:
	cout<<"Wrong Option.";
	system("cls");
	return main();
	}
}