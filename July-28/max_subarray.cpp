#include<iostream>
#include<climits>
using namespace std;

void bruteForce(int *arr, int n){
    int maxSum = INT_MIN;
    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){

            int currSum = 0;
            for(int i=start; i<=end; i++){
                currSum+=arr[i];
            }
            maxSum = max(currSum,maxSum);
        }
    }
    cout<<maxSum;
}


void optimized(int *arr, int n){
    int maxSum = INT_MIN;
    for(int start=0; start<n; start++){
        int currSum = 0;
        for(int end=start; end<n; end++){
            currSum += arr[end];
            maxSum = max(currSum,maxSum);
        }
    }
    cout<<maxSum;
}

void kadanes(int *arr, int n){
    
}

int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr)/sizeof(int);

    // bruteForce(arr,n);
    optimized(arr,n);
    return 0;
}