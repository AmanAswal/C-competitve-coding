//QUESTION: Take integer inputs from user and store them in an array and print them on screen.

#include<iostream>

using namespace std;

int main()
{
    int size_of_array;
    cout<<"Enter the size of the array: ";
    cin>> size_of_array;

    int arr[size_of_array];
    cout<<"Enter the numbers: "<<endl;

    for(int i=0; i<size_of_array; i++)
    {
        cin>> arr[i];
    }

    cout<<"[ ";
    for (int i=0; i<size_of_array;i++)
    {   
      
        cout<<arr[i]<<" ";
        
    }
    cout<<"]";
    return 0;
}
    
