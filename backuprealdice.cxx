#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
	
	srand(clock());
int rdom, num;
int roll1=5, roll2=10, roll3=15;
int cguess1=0, cguess2=0, cguess3=0;
char choice;

//intro

cout<<"Select how many rolls you want."<<endl;
cout<<"1. 5 rolls (3 guesses to win)"<<endl<<"2. 10 rolls (5 guesses to win)"<<endl<<"3. 15 rolls (7 guesses to win)."<<endl;
cout<<"Input either (1) (2) (3): ";
cin>>choice;

system("cls");

//diri mupili
switch (choice){
	
case '1':
goto first;
break;

case '2':
goto second;
break;

case '3':
goto third;
break;

default:
cout<<"Unknown command"<<endl;
return main();
break;
}


//una
first: {
int roll1=5;
rdom= rand()%6+1;

	cout<<"--------You've chosen 5 rolls (3 guesses to win)-----------"<<endl<<"You have "<<cguess1<<" correct guesses."<<endl<<"You have "<<roll1<<" rolls remaining."<<endl;
	cout<<"Input your number (1-6): ";
	cin>>num;
	cout<<endl<<endl;
	
	if (num==rdom) {
		++cguess1;
		cout<<"Correct! You have "<<cguess1<<" guesses remaining."<<endl;
		cout<<"You still have "<<roll1<<" rolls remaining."<<endl;

	}
	
	else if (num>6){
		 cout<<"Number exceeded from the limit."<<endl<<"You still have "<<--roll1<<" rolls remaining."<<"The correct answer is "<<rdom<<"."<<endl;
		 
	}
	
	else {
		cout<<"Wrong Guess. "<<"The correct answer is "<<rdom<<"."<<endl<<"You still have "<<--roll1<<" rolls remaining."<<endl<<endl;
		
	}
	
	if (roll1==0){
		cout<<"Game Over! You ran out of rolls. Better luck next time."<<endl;
		return 0;
	}
	
	if (cguess1==3){
		cout<<"Congratulations! You've successfully predicted "<<cguess1<<" guesses. You win!"<<endl;
		return 0;
	}	
	
}

goto first;


//ikaduha
second: {
int roll2=10;
rdom= rand()%6+1;


	cout<<"--------You've chosen 10 rolls (5 guesses to win)-----------"<<endl<<"You have "<<cguess2<<" correct guesses."<<endl<<"You have "<<roll2<<" rolls remaining."<<endl;
	cout<<"Input your number (1-6): ";
	cin>>num;
	cout<<endl<<endl;
	
	
	if (num==rdom) {
		cout<<"Correct! You have "<<roll2<<" guess remaining."<<endl;
		++cguess2;
		cout<<"You still have "<<roll2<<" rolls remaining."<<endl;
		
	}	
		
	else if (num>6){
		 cout<<"Number exceeded from the limit."<<endl<<"You still have "<<--roll2<<" rolls remaining."<<endl;
	
	}
	
	else {
		cout<<"Wrong Guess. "<<"The correct answer is "<<rdom<<"."<<endl<<"You still have "<<--roll2<<" rolls remaining."<<endl<<endl;
		
	}
	
	if (roll2==0){
		cout<<"Game Over! You ran out of rolls. Better luck next time."<<endl;
		return 0;
	}
	
	if (cguess2==5){
		cout<<"Congratulations! You've successfully predicted "<<cguess2<<" guesses. You win!"<<endl;
		return 0;
	}

}


//ikatulo

third: {
	int roll3=15;
rdom= rand()%6+1;

cout<<"--------You've chosen 15 rolls (7 guesses to win)-----------"<<endl<<"You have "<<cguess3<<" correct guesses."<<endl<<"You have "<<roll3<<" rolls remaining."<<endl;
	cout<<"Input your number (1-6): ";
	cin>>num;
	cout<<endl<<endl;
	

}


dice1: {
if(num==1)
{
	cout<<"Your Guess:"<<endl;
    cout<<" -------"<<endl;
    cout<<"|       |"<<endl;
    cout<<"|   o   |"<<endl;
    cout<<"|       |"<<endl;
    cout<<" -------"<<endl;
} 
if(num==2)
{
	cout<<"Your Guess:"<<endl;
    cout<<" -------"<<endl;
    cout<<"|     o |"<<endl;
    cout<<"|       |"<<endl;
    cout<<"| o     |"<<endl;
    cout<<" -------"<<endl;
} 
if(num==3)
{
	cout<<"Your Guess:"<<endl;
    cout<<" -------"<<endl;
    cout<<"|     o |"<<endl;
    cout<<"|   o   |"<<endl;
    cout<<"| o     |"<<endl;
    cout<<" -------"<<endl;
} 
if(num==4)
{
	cout<<"Your Guess:"<<endl;
    cout<<" -------"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<"|       |"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<" -------"<<endl;
} 
if(num==5)
{
	cout<<"Your Guess:"<<endl;
    cout<<" -------"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<"|   o   |"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<" -------"<<endl;
} 
if(num==6)
{
	cout<<"Your Guess:"<<endl;
    cout<<" -------"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<" -------"<<endl;
}
 if(rdom==1)
{
	cout<<"Random Number:"<<endl;
    cout<<" -------"<<endl;
    cout<<"|       |"<<endl;
    cout<<"|   o   |"<<endl;
    cout<<"|       |"<<endl;
    cout<<" -------"<<endl;
} 
if(rdom==2)
{
	cout<<"Random Number:"<<endl;
    cout<<" -------"<<endl;
    cout<<"|     o |"<<endl;
    cout<<"|       |"<<endl;
    cout<<"| o     |"<<endl;
    cout<<" -------"<<endl;
} 
if(rdom==3)
{
	cout<<"Random Number:"<<endl;
    cout<<" -------"<<endl;
    cout<<"|     o |"<<endl;
    cout<<"|   o   |"<<endl;
    cout<<"| o     |"<<endl;
    cout<<" -------"<<endl;
} 
if(rdom==4)
{
	cout<<"Random Number:"<<endl;
    cout<<" -------"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<"|       |"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<" -------"<<endl;
} 
if(rdom==5)
{
	cout<<"Random Number:"<<endl;
    cout<<" -------"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<"|   o   |"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<" -------"<<endl;
}
if(rdom==6)
{
	cout<<"Random Number:"<<endl;
    cout<<" -------"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<" -------"<<endl;
}
cout<<endl<<endl;

}
}

