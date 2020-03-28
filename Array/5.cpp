#include<iostream>

using namespace std;

int main()
{
    int size_of_array,sum = 0, prod=1;
    cout<<"Enter the size of the array: ";
    cin>> size_of_array;

    int arr[size_of_array];
    cout<<"Enter the numbers: "<<endl;

    for(int i=0; i<size_of_array; i++)
    {
        cin>> arr[i];
        sum = sum + arr[i];
        prod = prod * arr[i];
    }

    cout<<"Sum: "<<sum<<endl;
    cout<<"Product: "<<prod<<endl;


    return 0;
}
    