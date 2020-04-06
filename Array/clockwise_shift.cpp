#include<iostream>

using namespace std;

int main()
{
   int size_of_array;
   cout<<"Enter the size of array: ";
   cin>>size_of_array;

   int arr[size_of_array];
   cout<<"Enter the elements: "<<endl;
   
   for(int i=0; i<size_of_array; i++)
   {
       cin>>arr[i];
   }

   int temp = arr[0];

   for(int i=0; i<size_of_array; i++)
   {
       arr[i] = arr[ i+1 ];
   }

    arr[size_of_array - 1] = temp;

    cout<<"\nClockwise shift array is: ";

    for ( int i=0; i<size_of_array; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
