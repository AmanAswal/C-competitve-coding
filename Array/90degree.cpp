// Flip the matrix by 90 degree.

#include<iostream>

using namespace std;

int main()
{
    int num_of_rows, num_of_cols;
    cout<<"Enter the number of rows and columns: "<<endl;
    cin>>num_of_rows>>num_of_cols;
    cout<<endl;
    
    int a[num_of_rows][num_of_cols];

    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0; i<num_of_rows;i++)
    {
        for(int j=0; j<num_of_cols;j++)
        {
             cin>>a[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    
    cout<<"The matrix is: "<<endl;
    for(int i=0; i<num_of_rows;i++)
    {
        for(int j=0; j<num_of_cols;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"The transposed matrix is: "<<endl;

    for(int i=0;i<num_of_rows;i++)
    {
        for(int j=0;j<num_of_cols;j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"The 90 degree fipped matrix is: "<<endl;

    for(int j=0; j<num_of_cols;j++)
    {
        for(int i=num_of_rows-1; i>= 0;i--)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}
