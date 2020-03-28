#include<iostream>

using namespace std;

int main()
{
    int size_of_array;
    cout<<"Enter the size of the array: ";
    cin>> size_of_array;

    int arr[size_of_array];
    int arr1[size_of_array];
    cout<<"Enter the numbers: "<<endl;

    for ( int i=0; i<size_of_array; i++)
    {
        cin>>arr[i];
    }

    for( int i=0; i<size_of_array; i++)         
    {
        arr1[i] = arr[i];
    }

    for( int i=0; i<size_of_array; i++)
    {
        cout<<arr1[(size_of_array -1) - i]<<" "; 
    }

    return 0;
}
    