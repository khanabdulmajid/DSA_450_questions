//find Largest sum contiguous Subarray [V. IMP]
//ABDUL MAJID KHAN
//github.com/khanabdulmajid

#include <iostream>

int largestSubArraySum(int A[],int n){
    int i,maxSum=0,currSum=0;
    for(i=0;i<n;i++){
        currSum=currSum+A[i];
        if(currSum>maxSum){
            maxSum=currSum;
        }
        if(currSum<0){
            currSum=0;
        }
    }
    return maxSum;
}


using namespace std;

int main()
{
    int n=5;
    int A[n]={1,2,3,-2,5};
    int maximum=largestSubArraySum(A,n);
    cout<<maximum;
    return 0;
}
