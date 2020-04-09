#include<iostream>

using namespace std;

int main()
{   
    int size_of_array;
    cout<<"Enter the size of array: ";
    cin>> size_of_array;

    int arr[size_of_array];
    
    cout<<"Enter the numbers of array: "<<endl;

    for(int i=0; i<size_of_array; i++)
    {
        cin>> arr[i];
    }
    
    int temp;

  
    for(int i=0; i<size_of_array; i++)
    {
        for(int j=0; j<size_of_array; j++)
        {
            if (arr[i] > arr[j])
            {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            }
        }
    }
    
    cout<<"Array in ascending order is: ";

    for(int i=0; i<size_of_array; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}
