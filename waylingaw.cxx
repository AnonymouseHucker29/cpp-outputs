#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

//way lingaw

int main()
{
 string magic;
 char a[6]="Brent";
 char b[6]="brent";
  
  do{
    system("cls");
    cout<<"Say the magic word!"<<endl;
    cin>>magic;
    if(magic!=a && magic!=b){
    	cout<<"Na-ah!"<<endl;
    	system("pause");
    }
   } 
    while(magic!=a && magic!=b);
    cout<<"Congrats!"<<endl;
}