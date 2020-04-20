// Ques: Print sum of : 1st and last element, 2nd and 2nd last element and so on.

#include <iostream>

using namespace std;

int main() 
{
    int a[10] ={1,2,3,4,5,5,4,3,2,1};
    int sum=0;
    int j=0;
    for(int i=0; i<5; i++)
    {
        sum = a[i] + a[9-j];
        cout<<sum<<endl;
        j++;
    }

    return 0;
}
