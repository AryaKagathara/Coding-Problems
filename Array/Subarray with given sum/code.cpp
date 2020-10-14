#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define N 100

int sumarray(int arr[N], int sum, int m) {
    int start=0,curSum = arr[0];
    
    for(int i=1;i<m;i++) {
        while(curSum > sum && start < i-1) {
            curSum -= arr[start];
            start++;
        }

        if(curSum == sum) {
            cout<<"Find at:"<<start<<" "<<i-1;
            return 1;
        }
        if(curSum < sum) {
            curSum += arr[i];
        }
    }
    cout<<"Cannot Find";
    return 0;
}

int main() {
    int n,sum,arr[N];
    cout<<"No of elements in array and SUM:";
    cin>>n>>sum;
    cout<<"Elements:";
    for(int i=0;i<n;i++) {
        cin>>arr[i];        
    }
    int m = sizeof(arr)/sizeof(arr[0]);
    sumarray(arr,sum,m);
    return 0;
}