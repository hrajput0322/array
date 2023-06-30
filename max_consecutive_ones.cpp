#include<bits/stdc++.h>
using namespace std;

int max_consecutive_ones(int arr[], int n){
    int count=0;
    int max_count=0;
    for (int i=0;i<n;i++){
        if (arr[i]==1){
            count++;
        }
        else {
            max_count=max(max_count, count);
            count=0;
        }
    }
    max_count=max(max_count, count);
    return max_count;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<max_consecutive_ones(arr,n);
}