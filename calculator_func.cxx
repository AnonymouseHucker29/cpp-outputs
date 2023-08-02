#include <iostream>

using namespace std;

float add(float a, float b){
	float sum=a+b;
	return sum;
}

float subtract(float a, float b){
	float diff=a-b;
	return diff;
}

float multiply(float a, float b){
	int prod=a*b;
	return prod;
}

float divide(float a, float b){
	float quot=a/b;
	return quot;
}

int main()
{
	float num1, num2;
	char oper;
	
	system("cls");
	do{
	cin>>num1;
	cin>>oper;
	cin>>num2;
	
	switch (oper){
		case '+': 
		cout<<" = "<<add(num1,num2)<<endl;
		break;
		
		case '-':
		cout<<" = "<<subtract(num1,num2)<<endl;
		break;
		
		case '*':
		cout<<" = "<<multiply(num1,num2)<<endl;
		break;
		
		case '/':
		cout<<" = "<<divide(num1,num2)<<endl;
		break;
		
	}
	}
	while(oper=='+' || oper=='-' || oper=='*' || oper=='/');
	cout<<"Taronga ug type!"<<endl;
	return 0;
}