//Sort an array of 0s, 1s and 2s

// ABDUL MAJID KHAN
// github.com/khanabdulmajid

#include <iostream>

using namespace std;

void notASortingAlgo(int A[],int n)
{
    int i,j,count_0=0,count_1=0,count_2=0;
    for(i=0;i<n;i++)
    {
        if(A[i]==0){
            count_0+=1;
        }
        if(A[i]==1){
            count_1+=1;
        }
        if(A[i]==2){
            count_2+=1;
        }
    }
     int B[3]={count_0,count_1,count_2};
     j=0;int k=0;
     for(i=0;i<B[j];i++)
    {
        A[k++]=0;

    }
    j=1;
    for(i=0;i<B[j];i++)
    {
        A[k++]=1;

    }
    j=2;
    for(i=0;i<B[j];i++)
    {
        A[k++]=2;

    }

}

int main()
{
    int A[20]={2,2,2,2,0,1,1,1,1,0,2,2,0,0,1,0,2,0,0,0};
    int n=20,i=0;;
    notASortingAlgo(A,n);
    for(i=0;i<n;i++)
    {
        cout<<A[i];

    }

    return 0;
}
