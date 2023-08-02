#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int i, sum, lim=15;
	
	vector<int>fib{1,1};
	
	for(i=1; i<lim; i++){
    		fib.push_back(*(fib.end() - 1) + *(fib.end() - 2));
	}
	
	for(i=0; i<lim; i++){
        	cout<<" "<<fib[i];
	}	
}