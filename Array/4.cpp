QUESTION: Take integer inputs from user and store them in an array. 
          Now, copy all the elements in another array.
          Print the new array in reverse order.
-----------------------------------------------------------------------    
    
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

    for( int i=0; i<size_of_array; i++)  // copying the array
    {
        arr1[i] = arr[i];
    }

    for( int i=0; i<size_of_array; i++)  // printing the new array in reverse order
    {
        cout<<arr1[(size_of_array -1) - i]<<" "; 
    }

    return 0;
}
    
