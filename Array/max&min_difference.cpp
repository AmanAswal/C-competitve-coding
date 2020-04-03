#include<iostream>

using namespace std;

int main()
{   
    int size_of_array;
    cout<<"Enter the size of array: ";
    cin>> size_of_array;

    int arr[size_of_array], max_differnce, min_difference;
    
    cout<<"Enter the elements of array: "<<endl;

    for(int i=0; i<size_of_array; i++)
    {
        cin>> arr[i];
    }
    
    int temp;

  
    for(int i=0; i<size_of_array; i++)
    {
        for(int j=0; j<size_of_array; j++)
        {
            if (arr[i] < arr[j])
            {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            }
        }
    }
    
    cout<<endl;

    for(int i=0; i<size_of_array;i++)
    {
        if (size_of_array == 1){
            cout<<"Max and Min difference is 0."<<endl;
            break;
        }
        else{
        max_differnce = arr[size_of_array-1] -arr[0];
        min_difference= arr[1] - arr[0];
        }
    }

    if ( size_of_array != 1)
    {
    cout<<"Max Difference is: "<<max_differnce<<", between the numbers "<<arr[0]<<" and "<< arr[size_of_array-1]<<endl;
    cout<<"Min Difference is: "<<min_difference<<", between the numbers "<<arr[0]<<" and "<< arr[1];
    }
    return 0;
}