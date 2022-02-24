#include <iostream>

using namespace std;

void reverse_array(int A[],int n){
    int i=0,j=n-1,k=0;

    for(i=0;i<n/2;i++){
        k=A[i];
        A[i]=A[j];
        A[j--]=k;
    }
}

int main()
{
    int arr[]={12,24,2,7,4,1};
    int n=6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";

    reverse_array(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}
