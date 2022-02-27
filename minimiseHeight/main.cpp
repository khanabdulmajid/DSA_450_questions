//Minimize the Heights II
//ABDUL MAJID KHAN
//github.com/khanabdulmajid


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
}

int getMinDifference(int A[],int n,int k){
    countSort(A,n);
    int min_=A[0];
    int max_=A[n-1];
    int res = max_-min_;
    int i=0;
    for(i=0;i<n;i++){
        min_=min(A[0]+k,A[n-1]+k);

        max_=max(A[i]-k,A[n-1]-k);
        res= min(res,max_-min_);
    }
    return res;
}

int main()
{
//    int n=4,k=2;
//    int A[n]={1,5,8,10};

    int k = 3, n = 5;
    int A[n] = {3, 9, 12, 16, 20};

    int res = getMinDifference(A,n,k);
    cout<<res;
    return 0;
}
