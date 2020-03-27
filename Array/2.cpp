QUESTION : 
Take integer inputs from user and store them in an array. Again ask user to give a number. 
Now, tell user whether that number is present in array or not.

#include<iostream>

using namespace std;

int main()
{
    int size_of_array, num;
    cout<<"Enter the size of the array: ";
    cin>> size_of_array;

    int arr[size_of_array];
    cout<<"Enter the numbers: "<<endl;

    for(int i=0; i<size_of_array; i++)
    {
        cin>> arr[i];
    }

    cout<<"Enter a number to check: ";
    cin>>num;

    for (int i=0; i<size_of_array;i++)
    {
        if (arr[i]==num){
            cout<<"Present";
            break;
        }       
        else if( i==(size_of_array - 1) && arr[i] != num){
            cout<<"Not present";
        }
    }
    return 0;
}
    
