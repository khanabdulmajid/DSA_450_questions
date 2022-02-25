// Cyclically rotate an array by one
// ABDUL MAJID KHAN
//github.com/khanabdulmajid

#include <iostream>

using namespace std;

void cyclicRotate(int A[],int n)
{

    int j=0;
    int key =A[n-1];
    for(j=n-1;j>0;j--)
    {
        A[j]=A[j-1];
    }
    A[0]=key;
}

int main()
{
    int A[8] ={9,8,7,6,4,2,1,3};
    int n=8;
    int i=0;
    cyclicRotate(A,n);
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<"\t";
    }
    return 0;
}
