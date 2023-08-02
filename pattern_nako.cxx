#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int i, sum, lim;
	
	cout<<"How many numbers? ";
	cin>>lim;
	
	vector<int>fib;
	fib.push_back(1);
	fib.push_back(1);
	
	for(i=1; i<lim; i++){
    		fib.push_back(i+fib.back());	
	}
	
	for(i=0; i<lim; i++){
        	cout<<" "<<fib[i];
	}	
}