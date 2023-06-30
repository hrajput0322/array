#include<bits/stdc++.h>
using namespace std;

int max_circular_sum(int arr[], int n){
    int res1=INT16_MIN;
    int max_sum=INT16_MIN;
    int sum1=INT16_MIN;
    int total_sum=0;
    int min_sum=INT16_MAX;
    int sum2=INT16_MAX;
    for (int i=0;i<n;i++){
        total_sum+=arr[i];
        if (sum1+arr[i]>arr[i]){
            sum1=sum1+arr[i];
        }
        else {
            sum1=arr[i];
        }
        if (sum2+arr[i]<arr[i]){
            sum2=sum2+arr[i];
        }
        else {
            sum2=arr[i];
        }
        max_sum=max(sum1,max_sum);
        min_sum=min(sum2,min_sum);
    }
    if (max_sum<0){
        return max_sum;
    }
    return max(max_sum, total_sum-min_sum);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<max_circular_sum(arr, n);
}
