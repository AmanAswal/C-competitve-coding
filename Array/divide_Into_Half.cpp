#include<iostream>

using namespace std;

int main()
{   
    int size_of_array;
    cout<<"Enter the size of array: ";
    cin>> size_of_array;

    int arr[size_of_array], a[size_of_array/2], b[size_of_array/2];
    
    cout<<"Enter the numbers of array: "<<endl;

    for(int i=0; i<size_of_array; i++)
    {
        cin>> arr[i];
    }
    
    cout<<"Original array is: ";
    for(int i=0; i<size_of_array; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"After Spliting: "<<endl;
    cout<<"First Array: ";
    for( int i=0; i< (size_of_array/2); i++)
    {
        a[i]= arr[i];
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"Second Array: ";
    for( int i=(size_of_array/2); i< size_of_array; i++)
    {
        b[i]= arr[i];
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}