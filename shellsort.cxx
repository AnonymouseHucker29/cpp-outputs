#include <iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main() {
    int arr_sort[50], i, j, k, a, t, n, x;

    cout<<"Size";
    cin>>n;
    cout << "\nEnter " <<n<< " Elements for Sorting : " << endl;
    for (i = 0; i < n; i++)
        cin >> arr_sort[i];

    cout << "\nYour Data: ";
    for (i = 0; i < n; i++) {
        cout << " " << arr_sort[i];
    }
    
cout<<endl<<endl<<" gap| numswp";
    for (i = n / 2; i > 0; i = i / 2) {
        for (j = i; j < n; j++) {
            for (k = j - i; k >= 0; k = k - i) {
                if (arr_sort[k + i] >= arr_sort[k])
                    break;
                else {
                    //Swapping Values 
                    t = arr_sort[k];
                    arr_sort[k] = arr_sort[k + i];
                    arr_sort[k + i] = t;
                }
            }
     x=(j+1)-i;
            
            cout<<"\n"<<"[ "<<i<< " : " <<x<<" & "<<j+1<<" ]";
            for (a = 0; a < n; a++) {
                cout << " " << arr_sort[a];
            }
        }

    }

    cout << "\n\nSorted Data :";
    for (i = 0; i < n; i++) {
        cout << " " << arr_sort[i];
    }

}