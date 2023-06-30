#include<bits/stdc++.h>
using namespace std;

int max_difference(int arr[], int n){
    int max_num=INT_MIN;
    int max_diff=INT_MIN;
    for (int i=n-1;i>=0;i--){
        if (arr[i]>max_num){
            max_num=arr[i];
        }
        if (max_num-arr[i]>max_diff){
            max_diff=max_num-arr[i];
        }
    }
    return max_diff;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<max_difference(arr,n);
}