#include<bits/stdc++.h>
using namespace std;

bool exists(int arr[], int n, int k){
    int start=0;
    int sum=arr[0];
    for (int e=1;e<=n;e++){
        while (sum>k && start<e){
            sum-=arr[start];
            start++;
        }
        if (sum==k){
            return true;
        }
        if (e<n) {
            sum+=arr[e];
        }
    }
    if (sum==k){
        return true;
    }
    return false;
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<exists(arr, n, k);
}