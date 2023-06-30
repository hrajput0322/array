#include<bits/stdc++.h>
using namespace std;

const int N = 100000;

void reverse(int arr[], int low, int high){
    while (low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

int main(){
    int n,d;
    cin>>n>>d;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}