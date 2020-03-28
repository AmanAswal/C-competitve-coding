Question: Take integer inputs from user and print the following:
number of positive numbers
number of negative numbers
number of odd numbers
number of even numbers
number of 0.

#include<iostream>

using namespace std;

int main()
{
    int size_of_array;
    int zero_count=0, positive_num_count=0, negative_num_count=0, odd_num_count=0, even_num_count=0;
    cout<<"Enter the size of the array: ";
    cin>> size_of_array;

    int arr[size_of_array];
    cout<<"Enter the numbers: "<<endl;

    for(int i=0; i<size_of_array; i++)
    {
        cin>> arr[i];
    }

    for(int i=0; i<size_of_array;i++)
    {
        if(arr[i] == 0){
            zero_count = zero_count + 1;
        }
        else if(arr[i] > 0){
            positive_num_count = positive_num_count + 1;
        }
        else if(arr[i] < 0){
            negative_num_count = negative_num_count + 1;
        }
        if(arr[i] % 2 != 0  && arr[i] > 0){
            odd_num_count = odd_num_count + 1;
        }
        if(arr[i] % 2 == 0 && arr[i] >= 0){
            even_num_count = even_num_count + 1;
        }
    }
    cout<<"No. of Zeros: "<<zero_count<<endl;
    cout<<"No. of positive numbers: "<<positive_num_count<<endl;
    cout<<"No. of negative numbers: "<<negative_num_count<<endl;
    cout<<"No. of odd numbers: "<<odd_num_count<<endl;
    cout<<"No. of even numbers: "<<even_num_count<<endl;

    return 0;
}
    
