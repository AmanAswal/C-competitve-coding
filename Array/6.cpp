Question: Initialize and print all elements of a 2D array.

#include<iostream>

using namespace std;

int main()
{
    int arr[3][3];

    cout<<"Enter elements: ";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>arr[i][j];
        }
    }

      for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"arr["<<i<< "][" <<j<< "] = "<<arr[i][j]<<endl;
        }
    }
    return 0;
}
