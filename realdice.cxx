#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
int dice1,dice2;
srand(time(0));
dice1=1+rand()%6;
dice2=1+rand()%6;
if(dice1==1)
{
    cout<<" -------"<<endl;
    cout<<"|       |"<<endl;
    cout<<"|   o   |"<<endl;
    cout<<"|       |"<<endl;
    cout<<" -------"<<endl;
} 
if(dice1==2)
{
    cout<<" -------"<<endl;
    cout<<"|     o |"<<endl;
    cout<<"|       |"<<endl;
    cout<<"| o     |"<<endl;
    cout<<" -------"<<endl;
} 

if(dice1==3)
{
    cout<<" -------"<<endl;
    cout<<"|     o |"<<endl;
    cout<<"|   o   |"<<endl;
    cout<<"| o     |"<<endl;
    cout<<" -------"<<endl;
} 
if(dice1==4)
{
    cout<<" -------"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<"|       |"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<" -------"<<endl;
} 
if(dice1==5)
{
    cout<<" -------"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<"|   o   |"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<" -------"<<endl;
} 
if(dice1==6)
{
    cout<<" -------"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<" -------"<<endl;
}
 if(dice2==1)
{
    cout<<" -------"<<endl;
    cout<<"|       |"<<endl;
    cout<<"|   o   |"<<endl;
    cout<<"|       |"<<endl;
    cout<<" -------"<<endl;
} 
if(dice2==2)
{
    cout<<" -------"<<endl;
    cout<<"|     o |"<<endl;
    cout<<"|       |"<<endl;
    cout<<"| o     |"<<endl;
    cout<<" -------"<<endl;
} 

if(dice2==3)
{
    cout<<" -------"<<endl;
    cout<<"|     o |"<<endl;
    cout<<"|   o   |"<<endl;
    cout<<"| o     |"<<endl;
    cout<<" -------"<<endl;
} 
if(dice2==4)
{
    cout<<" -------"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<"|       |"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<" -------"<<endl;
} 
if(dice2==5)
{
    cout<<" -------"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<"|   o   |"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<" -------"<<endl;
} 
if(dice2==6)
{
    cout<<" -------"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<" -------"<<endl;
}
    return 0;
}