#include <iostream>
using namespace std;

int factorial(int num) {
  if (num==1) {
    return 1;
  }
  else {
    return num*factorial(num-1);
  }
}

int main() {
  cout<<"enter a number"<<endl;
  int n;
  cin>>n;
  cout<<"The factorial of "<<n<<" is "<<factorial(n)<<endl;
  
}
