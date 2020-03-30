// Print transpose of a 2D matrix.

#include<iostream>

using namespace std;

int main()
{
    int num_of_rows, num_of_cols;
    cout<<"Enter the number of rows and columns: "<<endl;  // Asking for the size of rows and columns from user.
    cin>>num_of_rows>>num_of_cols;
    cout<<endl;
    
    int a[num_of_rows][num_of_cols];    // Declaration of the matrix

    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0; i<num_of_rows;i++)
    {
        for(int j=0; j<num_of_cols;j++)
        {
             cin>>a[i][j];              // Taking elements for the matrix from user.
        }
        cout<<endl;
    }
    cout<<endl;
    
    cout<<"The matrix is: "<<endl;
    for(int i=0; i<num_of_rows;i++)
    {
        for(int j=0; j<num_of_cols;j++)
        {
            cout<<a[i][j]<<" ";     // Printing the matrix
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"The transposed matrix is: "<<endl;

    for(int i=0;i<num_of_rows;i++)
    {
        for(int j=0;j<num_of_cols;j++)
        {
            cout<<a[j][i]<<" ";     // Printing the transposed matrix.
        }
        cout<<endl;
    }

    return 0;
}
