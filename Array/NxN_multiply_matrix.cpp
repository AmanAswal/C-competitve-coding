// WAP to take and print Nxn matrix. ( same no. of rows and columns)

#include<iostream>

using namespace std;

int main()
{
    int a[10][10], b[10][10],c[10][10], r, co;

    cout<<"Enter the number of rows: ";
    cin>> r;

    cout<<"Enter the number of columns: ";
    cin>> co;

    cout<<"Enter elements of 1st matrix: "<<endl;    
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<co; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<endl;

    cout<<"Enter elements of 2nd matrix: "<<endl;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<co; j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<endl;
    
    for( int i=0; i<r; i++)
    {
        for(int j=0; j<co; j++)
        {   
            c[i][j] = 0;
            for( int k=0; k<co; k++)
            {   
                
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }   
        }
    }
    cout<<endl;
    cout<<"Multiplication of the metrices: "<<endl;
    for(int i=0; i<r; i++)
    {
        for( int j=0; j<co; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
    
