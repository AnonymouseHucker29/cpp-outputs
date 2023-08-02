#include<iostream>
using namespace std;
int main()
{
    int total, arr[50], i, j, temp, small, chk, index;
    cout<<"Enter the Size of Array: ";
    cin>>total;
    cout<<"Enter "<<total<<" Array Elements: ";
    for(i=0; i<total; i++)
        cin>>arr[i];
    for(i=0; i<(total-1); i++)
    {
        chk=0;
        small = arr[i];
        for(j=(i+1); j<total; j++)
        {
            if(small>arr[j])
            {
                small = arr[j];
                chk++;
                index = j;
            }
        }
        if(chk!=0)
        {
            temp = arr[i];
            arr[i] = small;
            arr[index] = temp;
        }
    }
    cout<<"\nSorted Array is:\n";
    for(i=0; i<total; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}