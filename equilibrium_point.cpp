#include<bits/stdc++.h>
using namespace std;

bool check_equilibrium(int arr[], int n){
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    int l_sum=0;
    for (int i=0;i<n;i++){
        if (l_sum==sum-arr[i]){
            return true;
        }
        l_sum+=arr[i];
        sum-=arr[i];
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<check_equilibrium(arr, n);
}