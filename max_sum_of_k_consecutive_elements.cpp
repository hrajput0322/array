#include<bits/stdc++.h>
using namespace std;

int max_sum_k(int arr[], int n, int k){
    int sum=0;
    for (int i=0;i<k;i++){
        sum+=arr[i];
    }
    int max_sum=sum;
    for (int i=k;i<n;i++){
        sum+=(arr[i]-arr[i-k]);
        max_sum=max(max_sum,sum);
    }
    return max_sum;
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<max_sum_k(arr, n, k);
}