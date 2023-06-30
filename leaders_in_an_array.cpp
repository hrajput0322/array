#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int curr_max=0;
    for (int i=n-1;i>=0;i--){
        if (arr[i]>curr_max){
            cout<<arr[i]<<" ";
            curr_max=arr[i];
        }
    }
}