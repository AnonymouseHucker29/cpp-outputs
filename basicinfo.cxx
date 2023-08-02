#include <iostream>  
#include <cstdlib>
#include <cmath>
using namespace std;  

int main( ) {  
   string s1 , s2 , s3;
   
   char gend;
   int age;
   
    cout<<"Enter First Name: ";
    cin>>s1;
    
    cout<<"Enter Middle Name: ";
    cin>>s2;
    
    cout<<"Enter Last Name: ";
    cin>>s3;
    
    cout<<"Age: ";
    cin>>age;
    
    cout<<"Gender: ";
    cin>>gend;
   
    cout<<"Name: "<<s1+s2+s3<<endl;
    cout<<"Age: "<<age<<endl;
     
     if (gend == 'Male' || 'M' || 'male' || 'm'){
         cout<<"Male";
    }
    else if (gend == 'Female' || 'F' || 'female' || 'f'){
    	cout<<"Female";
    }
    else if (gend != 'Male' && 'Female'){
    	cout<<"Unknown Gender";
    }
 return 0;  
}