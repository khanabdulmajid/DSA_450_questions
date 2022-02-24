// Maximum and minimum of an array using minimum number of comparisons
#include <iostream>

using namespace std;

int max_element(int arr[],int n){
    int i=0,k=arr[0];
    while(i<n){
        if(k<arr[i]){    //{12,24,15,6,8,4};
            k=arr[i];
        }
        i++;
    }
    return k;
}

int min_element(int arr[],int n){
    int i=0,k=arr[0];
    while(i<n){
        if(k>arr[i]){
            k=arr[i];
        }
        i++;
    }
    return k;
}

int main()
{
    int arr[]={12,24,15,6,8,4};
    int n=6;
    int maximum,minimum;
    maximum = max_element(arr,n);
    minimum = min_element(arr,n);
    cout<<"max element = "<<maximum;
    cout<<"\nmin element = "<<minimum;
    return 0;
}
