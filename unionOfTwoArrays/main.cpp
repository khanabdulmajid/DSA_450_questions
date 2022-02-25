// Union of two arrays
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

int unionArray(int A[],int B[],int n,int m){
    int i,index=0,unionCount=0;
    int max1=findMax(A,n);
    int max2=findMax(B,m);
    int maximum=max1>max2?max1:max2;
    int *Bin=new int(maximum+1);
     for(i=0;i<maximum+1;i++){
        Bin[i]=0;
     }

    for(i=0;i<n;i++){
        index=A[i];
        Bin[index]=1;
    }

    for(i=0;i<m;i++){
        index=B[i];
        Bin[index]=1;
    }

    for(i=0;i<maximum+1;i++){
       if(Bin[i]==1)
        {
           unionCount+=1;
        }
    }
    return unionCount;
}
int main()
{
    int n=6,m=2;
    int A[n]={85,25,1,32,54,6};
    int B[m]={85,2};
    int num =unionArray(A,B,n,m);
    cout<<num;
    return 0;
}
