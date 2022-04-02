// { Driver Code Starts
//Initial Template for C

#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <vector>

 // } Driver Code Ends
//User function Template for C

using namespace std;
// arr[]: Input Array
// N : Size of the Array arr[]
// Function to count inversions in the array.
int invCount=0;
vector <int> merge2sort(vector <int> left,vector <int> right)
{
    int i=0,j=0;
    vector <int> merged;
    while(i<left.size()&& j<right.size()){
        if(left[i]<=right[j]){
            merged.push_back(left[i++]);
        }
        else{
            merged.push_back(right[j++]);
            invCount+=left.size()-i;


        }
    }

    while(i<left.size()){
        merged.push_back(left[i++]);
    }
    while(j<right.size()){
        merged.push_back(right[j++]);
    }

    return merged;
}

vector <int> divide( int arr[],int si,int ei){
    if(si>=ei){
        vector <int> arr1;
        arr1.push_back(arr[si]);
        return arr1;
    }
    int mid = si + (ei-si)/2;
    vector <int> left = divide(arr,si,mid);
    vector <int> right = divide(arr,mid+1,ei);
    vector <int> merged = merge2sort(left,right);
    return merged;


}

// { Driver Code Starts.

int main() {

    int N = 5, arr[] = {2, 4, 1, 3, 5};
    vector<int> newArray;
    int si=0;
    newArray=divide(arr,si,N-1);

    cout<< invCount;
    return 0;
}
  // } Driver Code Ends
