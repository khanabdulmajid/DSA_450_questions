//Move all negative numbers to beginning and positive to end with constant extra space
//github.com/khanabdulmajid

#include <iostream>

using namespace std;

void swapping(int *a,int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}

void negativeOneSide(int A[],int n)
{
    int i=0,j=n-1;
    while(i<j){
        while(A[i]<0){
            i++;
        }
        while(A[j]>0){
            j--;
        }
        if(i<j){
            swapping(&A[i],&A[j]);
        }
    }

}

int main()
{
    int A[9]={-12,11,-13,-5,6,-7,5,-3,-6};
    int n=9;
    negativeOneSide(A,n);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<"\t";
    }
    return 0;
}
