// Question: Write a program to print sum, average of all numbers, smallest and largest element of an array.

#include<iostream>
using namespace std;

int main()
{
    int size_of_array;
    cout<<"Enter the size of the array: ";
    cin>>size_of_array;

    int arr[size_of_array]; 

    cout<<"Enter the elements: ";
    for(int i=0; i<size_of_array; i++)
    {
        cin>>arr[i];
    }
    int largest=arr[0], smallest=arr[0], sum=0, average;
    for( int i=0; i<size_of_array; i++)
    {
        if ( arr[i] > largest)
        {
            largest = arr[i];
        }
        if( arr[i] < smallest)
        {
            smallest = arr[i];
        }  
        sum = sum + arr[i];
    }
    average = sum / size_of_array;

    cout<<"Largest: "<<largest<<endl;
    cout<<"Smallest: "<<smallest<<endl;
    cout<<"Sum: "<<sum<<endl;
    cout<<"Average: "<<average<<endl;
    return 0;
}
