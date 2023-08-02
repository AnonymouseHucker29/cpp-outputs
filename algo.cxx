#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

void linear_search()
{
int size, array[size], key, a;
cout<<"--------------------- LINEAR SEARCH ------------------------"<<endl<<endl;
cout<<"Enter the size of array: ";
cin>>size;

// Mangayo sa user
 for(int i=0; i<size; i++){
 cout<<"Enter "<<i<<" Element: ";
 cin>>array[i];
 }
 
 system("cls");
// I display
 for(int j=0; j<size; j++){
    cout<<"array[ "<<j<<" ]  =  ";
    cout<<array[j]<<endl;
 }

 cout<<endl<<"Enter key to search in array: ";
 cin>>key;
 cout<<endl;
// Bulong2x part
   for(int k=0; k<size; k++){
      if(key==array[k]){
  cout<<"Key found at array [ "<<k<<" ]."<<endl;
  break;
    }
  else if(key!=array[k]){
    	cout<<"Key not found in array [ "<<k<<" ]."<<endl;
    }
}
     system("pause");
     system("cls");
}
//
void selection_sort()
{
	cout<<"--------------------- SELECTION SORT -----------------------"<<endl<<endl;
	int total, arr[50], i, j, temp, small, chk, index;
    cout<<"Enter the Size of Array: ";
    cin>>total;
    cout<<"Enter "<<total<<" Numbers: \n";
    for(i=0; i<total; i++){       
        cout<<i+1<<" number: ";
        cin>>arr[i];
    }
    system("cls");
    cout<<"Given Numbers (Unsorted): "<<endl;
    for(i=0; i<total;i++)
        cout<<arr[i]<<" ";
    cout<<endl<<endl;
    
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
        // step-by-step
        cout<<"Step "<<i+1<<": ";
for(j=0; j<total; j++)
    cout<<arr[j]<<" ";
cout<<endl;
        //
    }
    cout<<"\nSorted Array (Using SELECTION SORT):\n";
    for(i=0; i<total; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    system("pause");
    system("cls");
}
//
 void insertion_sort(){
    cout<<"--------------------- INSERTION SORT -----------------------"<<endl<<endl;
    int arr[50], tot, i, j, k, elem, index;
    cout<<"Enter the Size of Array: ";
    cin>>tot;
    cout<<"Enter "<<tot<<" Numbers: \n";
     for(i=0; i<tot; i++){
        cout<<i+1<<" number: ";
        cin>>arr[i];
     }
     system("cls");
     cout<<"Given Numbers (Unsorted): "<<endl;
    for(i=0; i<tot; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
    for(i=1; i<tot; i++)
    {
        elem = arr[i];
        if(elem<arr[i-1])
        {
            for(j=0; j<=i; j++)
            {
                if(elem<arr[j])
                {
                    index = j;
                    for(k=i; k>j; k--)
                        arr[k] = arr[k-1];
                    break;
                }
            }
        }
        else
            continue;
        arr[index] = elem;
        //step-by-step
        cout<<"\nStep "<<i<<": ";
for(j=0; j<tot; j++)
    cout<<arr[j]<<" ";
    //
    }
    
cout<<endl;
    
    cout<<"\nSorted Array (Using INSERTION SORT):\n";
    for(i=0; i<tot; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    system("pause");
    system("cls");
 }
//
void bubble_sort(){
	cout<<"----------------------- BUBBLE SORT ------------------------"<<endl<<endl;
    int n, i, arr[50], j, temp;
    cout<<"Enter the Size of Array: ";
    cin>>n;
    cout<<"Enter "<<n<<" Numbers: \n";
    for(i=0; i<n; i++){
        cout<<i+1<<" number: ";
        cin>>arr[i];
    }
    system("cls");
    cout<<"Given Numbers (Unsorted): "<<endl;
    for(i=0; i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
    for(i=0; i<(n-1); i++)
    {
        for(j=0; j<(n-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
         //step-by-step
        cout<<"\nStep "<<i+1<<": ";
for(j=0; j<n; j++)
    cout<<arr[j]<<" ";
    //
    }
    cout<<endl;
    cout<<"\nSorted Array (Using BUBBLE SORT): \n";
    for(i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
   
   system("pause");
   system("cls");
}
//
void shell_sort(){
    int arr_sort[50], i, j, k, a, t, n, x;

    cout<<"----------------------- SHELL SORT ------------------------"<<endl<<endl;
    cout<<"Enter the Size of Array: ";
    cin>>n;
    cout <<"Enter "<<n<< " Numbers: \n";
    for (i = 0; i < n; i++){
        cout<<i+1<<" number: ";
        cin >> arr_sort[i];
    }
    system("cls");
    cout << "Given Numbers (Unsorted): "<<endl;
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
    cout<<"\n\nSorted Array (Using SHELL SORT) :";
    for (i = 0; i < n; i++) {
        cout<<" "<<arr_sort[i];
    }
    cout<<endl;
    system("pause");
    system("cls");
}
//
int main()
{
	int choice;
	
	cout<<"----------------- Five Sample Algorithms -------------------"<<endl;
	getch();
	system("cls");

	do{
		system("cls");
	cout<<" What algorithm would you like to test?"<<endl;
	cout<<
	      "1. Linear Search\n"
	      "2. Selection Sort\n"
	      "3. Insertion Sort\n"
	      "4. Bubble Sort\n"
	      "5. Shell Sort\n"<<endl;
	cout<<"Inputting outside 1-5 will terminate the program.\nInput only INT values.\n";
	cout<<"Your choice (1-5): ";
    cin>>choice;
	system("cls");

switch (choice){
		case 1:
		linear_search();
		break;
		
		case 2:
		selection_sort();
		break;
		
		case 3:
		insertion_sort();
		break;
		
		case 4:
		bubble_sort();
		break;
		
		case 5:
		shell_sort();
		break;
		
		default:
		cout<<"Thanks for testing!"<<endl;
	}
}
	while(choice<=5 && choice>=1);
	return 0;
}