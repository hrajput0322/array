#include<bits/stdc++.h>
using namespace std;

int max_sum_subarray(int arr[],int n){
    int i=0;
    int j=0;
    int max_sum=INT16_MIN;
    int res=INT16_MIN;
    for (int k=0;k<n;k++){
        if (max_sum+arr[k]>arr[k]){
            max_sum=arr[k]+max_sum;
            if (max_sum>res){
                res=max_sum;
                j=k;
            } 
        }
        else {
            max_sum=arr[k];
            if (max_sum>res){
                res=max_sum;
                i=k;
                j=k;
            }
        }
    }
    for (int k=i;k<=j;k++){
        cout<<arr[k]<<" ";
    }
    cout<<"\n";
    return res;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<max_sum_subarray(arr, n);
}