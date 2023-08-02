#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
int rdom, num,
roll1=5, roll2=10, roll3=15,
cguess1=0, cguess2=0, cguess3=0;
char choice;
bool retry;

//intro
cout<<"		WELCOME TO THE DICE GAME"<<endl<<"	    CREATED FOR EDUCATIONAL PURPOSES"<<endl<<"		          :)"<<endl;
system("pause");
system("cls");

choose: {
cout<<"______________Select how many rolls you want._______________"<<endl;
cout<<"(1) 5 rolls (3 guesses to win)"<<endl<<"(2) 10 rolls (5 guesses to win)"<<endl<<"(3) 15 rolls (7 guesses to win)"<<endl<<endl;
cout<<"Input either (1) (2) (3): ";
cin>>choice;
}
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
 		cout<<"Invalid Choice. Please try again."<<endl;
 		goto choose;
}

//una
first: {
srand(clock());
rdom=rand()%6+1;
	cout<<"--------You've chosen 5 rolls (3 guesses to win)-----------"<<endl<<"You have "<<cguess1<<" correct guesses."<<endl<<"You have "<<roll1<<" rolls remaining."<<endl;
	cout<<"Input your number (1-6): ";
	cin>>num;
	
if(num==1)
{
	cout<<"Your Number:"<<endl;
    cout<<" -------"<<endl;
    cout<<"|       |"<<endl;
    cout<<"|   o   |"<<endl;
    cout<<"|       |"<<endl;
    cout<<" -------"<<endl;
} 
if(num==2)
{
	cout<<"Your Number:"<<endl;
    cout<<" -------"<<endl;
    cout<<"|     o |"<<endl;
    cout<<"|       |"<<endl;
    cout<<"| o     |"<<endl;
    cout<<" -------"<<endl;
} 
if(num==3)
{
	cout<<"Your Number:"<<endl;
    cout<<" -------"<<endl;
    cout<<"|     o |"<<endl;
    cout<<"|   o   |"<<endl;
    cout<<"| o     |"<<endl;
    cout<<" -------"<<endl;
} 
if(num==4)
{
	cout<<"Your Number:"<<endl;
    cout<<" -------"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<"|       |"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<" -------"<<endl;
} 
if(num==5)
{
	cout<<"Your Number:"<<endl;
    cout<<" -------"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<"|   o   |"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<" -------"<<endl;
} 
if(num==6)
{
	cout<<"Your Number:"<<endl;
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
	
	if (num==rdom){
		++cguess1;
		cout<<"Correct! You have "<<cguess1<<" correct guesses already."<<endl;
		cout<<"You still have "<<roll1<<" rolls remaining."<<endl;
		system("pause");
		system("cls");
		goto first;
	}
	else if (num>6 || num<1){
		 cout<<"Number exceeded from the limit."<<endl<<"You still have "<<--roll1<<" rolls remaining."<<"The correct answer is "<<rdom<<"."<<endl;
		 system("pause");
		system("cls");
		 goto first;
	}
	else if (roll1==0){
		cout<<"Wrong Guess. "<<"The correct answer is "<<rdom<<"."<<endl<<"You have "<<roll1<<" rolls remaining."<<endl;
		cout<<"Game Over! You ran out of rolls. Better luck next time."<<endl;
		cout<<endl<<endl;
		cout<<"Do you want to play again? (0=No, 1=Yes): ";
		cin>>retry;
		system("cls");	
		if (retry){
			return main ();
		}
		else {
		return 0;
		}
	}
	else if (cguess1==3){
		cout<<"Correct! You have "<<cguess1<<" correct guesses already."<<endl;
		cout<<"Congratulations! You've successfully predicted "<<cguess1<<" guesses."<<endl<<"You win!"<<endl;
		cout<<endl<<endl;
		cout<<"Do you want to play again? (0=No, 1=Yes): ";
		cin>>retry;
		system("cls");	
		if (retry){
			return main ();
		}
		else {
		return 0;
		}
	}	
else {
		cout<<"Wrong Guess. "<<"The correct answer is "<<rdom<<"."<<endl<<"You still have "<<--roll1<<" rolls remaining."<<endl<<endl;
		system("pause");
		system("cls");
		goto first;
	}
}
//ikaduha
second: {
srand(clock());
rdom=rand()%6+1;
	cout<<"--------You've chosen 10 rolls (5 guesses to win)-----------"<<endl<<"You have "<<cguess2<<" correct guesses."<<endl<<"You have "<<roll2<<" rolls remaining."<<endl;
	cout<<"Input your number (1-6): ";
	cin>>num;
	
if(num==1)
{
	cout<<"Your Number:"<<endl;
    cout<<" -------"<<endl;
    cout<<"|       |"<<endl;
    cout<<"|   o   |"<<endl;
    cout<<"|       |"<<endl;
    cout<<" -------"<<endl;
} 
if(num==2)
{
	cout<<"Your Number:"<<endl;
    cout<<" -------"<<endl;
    cout<<"|     o |"<<endl;
    cout<<"|       |"<<endl;
    cout<<"| o     |"<<endl;
    cout<<" -------"<<endl;
} 
if(num==3)
{
	cout<<"Your Number:"<<endl;
    cout<<" -------"<<endl;
    cout<<"|     o |"<<endl;
    cout<<"|   o   |"<<endl;
    cout<<"| o     |"<<endl;
    cout<<" -------"<<endl;
} 
if(num==4)
{
	cout<<"Your Number:"<<endl;
    cout<<" -------"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<"|       |"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<" -------"<<endl;
} 
if(num==5)
{
	cout<<"Your Number:"<<endl;
    cout<<" -------"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<"|   o   |"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<" -------"<<endl;
} 
if(num==6)
{
	cout<<"Your Number:"<<endl;
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
	
	if (num==rdom){
		++cguess2;
		cout<<"Correct! You have "<<cguess2<<" correct guesses already."<<endl;
		cout<<"You still have "<<roll2<<" rolls remaining."<<endl;
		system("pause");
		system("cls");
		goto second;
	}	
	else if (num>6 || num<1){
		 cout<<"Number exceeded from the limit."<<endl<<"You still have "<<--roll2<<" rolls remaining."<<endl;
		 system("pause");
		system("cls");
		 goto second;
	}
	else if (roll2==0){
		cout<<"Wrong Guess. "<<"The correct answer is "<<rdom<<"."<<endl<<"You have "<<roll2<<" rolls remaining."<<endl;
		cout<<"Game Over! You ran out of rolls. Better luck next time."<<endl;
		cout<<endl<<endl;
		cout<<"Do you want to play again? (0=No, 1=Yes): ";
		cin>>retry;
		system("cls");	
		if (retry){
			return main ();
		}
		else {
		return 0;
		}
	}
	else if (cguess2==5){
		cout<<"Correct! You have "<<cguess2<<"correct guesses already."<<endl;
		cout<<"Congratulations! You've successfully predicted "<<cguess2<<" guesses."<<endl<<"You win!"<<endl;
		cout<<endl<<endl;
		cout<<"Do you want to play again? (0=No, 1=Yes): ";
		cin>>retry;
		system("cls");	
		if (retry){
			return main ();
		}
		else {
		return 0;
		}
	}
     else {
		cout<<"Wrong Guess. "<<"The correct answer is "<<rdom<<"."<<endl<<"You still have "<<--roll2<<" rolls remaining."<<endl<<endl;
		system("pause");
		system("cls");
		goto second;
	}
}
//ikatulo
third: {
srand(clock());
rdom=rand()%6+1;
cout<<"--------You've chosen 15 rolls (7 guesses to win)-----------"<<endl<<"You have "<<cguess3<<" correct guesses."<<endl<<"You have "<<roll3<<" rolls remaining."<<endl;
	cout<<"Input your number (1-6): ";
	cin>>num;
	
if(num==1)
{
	cout<<"Your Number:"<<endl;
    cout<<" -------"<<endl;
    cout<<"|       |"<<endl;
    cout<<"|   o   |"<<endl;
    cout<<"|       |"<<endl;
    cout<<" -------"<<endl;
} 
if(num==2)
{
	cout<<"Your Number:"<<endl;
    cout<<" -------"<<endl;
    cout<<"|     o |"<<endl;
    cout<<"|       |"<<endl;
    cout<<"| o     |"<<endl;
    cout<<" -------"<<endl;
} 
if(num==3)
{
	cout<<"Your Number:"<<endl;
    cout<<" -------"<<endl;
    cout<<"|     o |"<<endl;
    cout<<"|   o   |"<<endl;
    cout<<"| o     |"<<endl;
    cout<<" -------"<<endl;
} 
if(num==4)
{
	cout<<"Your Number:"<<endl;
    cout<<" -------"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<"|       |"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<" -------"<<endl;
} 
if(num==5)
{
	cout<<"Your Number:"<<endl;
    cout<<" -------"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<"|   o   |"<<endl;
    cout<<"| o   o |"<<endl;
    cout<<" -------"<<endl;
} 
if(num==6)
{
	cout<<"Your Number:"<<endl;
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
	
	if (num==rdom){
		++cguess3;
		cout<<"Correct! You have "<<cguess3<<" correct guesses already."<<endl;
		cout<<"You still have "<<roll3<<" rolls remaining."<<endl;
		system("pause");
		system("cls");
		goto third;
	}	
	else if (num>6 || num<1){
		 cout<<"Number exceeded from the limit."<<endl<<"You still have "<<--roll3<<" rolls remaining."<<endl;
		 system("pause");
		system("cls");
		 goto third;
	}
	else if (roll3==0){
		cout<<"Wrong Guess. "<<"The correct answer is "<<rdom<<"."<<endl<<"You have "<<roll3<<" rolls remaining."<<endl;
		cout<<"Game Over! You ran out of rolls. Better luck next time."<<endl;
		cout<<endl<<endl;
		cout<<"Do you want to play again? (0=No, 1=Yes): ";
		cin>>retry;
		system("cls");	
		if (retry){
			return main ();
		}
		else {
		return 0;
		}
	}
	else if (cguess3==7){
		cout<<"Correct! You have "<<cguess3<<"correct guesses already."<<endl;
		cout<<"Congratulations! You've successfully predicted "<<cguess3<<" guesses."<<endl<<"You win!"<<endl;
		cout<<endl<<endl;
		cout<<"Do you want to play again? (0=No, 1=Yes): ";
		cin>>retry;
		system("cls");	
		if (retry){
			return main ();
		}
		else {
		return 0;
		}
	}
     else {
		cout<<"Wrong Guess. "<<"The correct answer is "<<rdom<<"."<<endl<<"You still have "<<--roll3<<" rolls remaining."<<endl<<endl;
		system("pause");
		system("cls");
		goto third;
	}
}
}