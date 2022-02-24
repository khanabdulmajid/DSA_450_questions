//author: ABDUL MAJId KHAN
//github: github.com/khanabdulmajid

#include <iostream>

using namespace std;

int findMax(int arr[],int n){
    int i=0,k=arr[0];
    while(i<n){
        if(k<arr[i]){    //{12,24,15,6,8,4};
            k=arr[i];
        }
        i++;
    }
    return k;
}

void countSort(int A[], int n)
{
    int max_count=findMax(A ,n);
    int *B= new int(max_count+1);
    int i,j,k,index;
    for(i=0;i<max_count+1;i++)
    {
        B[i]=0;
    }
//0 visuals
//    for(i=0;i<max_count+1;i++)
//    {
//        cout<<B[i]<<"\t";
//    }


    for(i=0;i<n;i++)
    {
        index=A[i];
        B[index]=B[index]+1;
    }

    //visual for bins
//    cout<<"\n";
//    for(i=0;i<max_count;i++)
//    {
//        cout<<B[i]<<"\t";
//    }

    k=0,j=0;
    while(k<max_count+1)
    {
        i=0;
        while(i<B[k])
        {

            A[j++]=k;
            i++;
        }
        k++;
    }
    //visualizing sorted array
//    for(int i=0;i<n;i++){
//        cout<<A[i]<<"\t";
//    }
}

int kSmallest(int A[],int k){
    return A[k];
}

int main()
{   int kth=0;
    int Arr[9]={6,7,6,3,4,2,0,1,5};
    int n=9;
    countSort(Arr,n);
    kth=kSmallest(Arr,3);//3rd smallest element
    cout<<kth;
    return 0;
}
