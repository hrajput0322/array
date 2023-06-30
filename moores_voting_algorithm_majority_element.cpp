#include<bits/stdc++.h>
using namespace std;

int majority_element(int arr[], int n){
    int count=1;
    int res=0;
    for (int i=1;i<n;i++){
        if (arr[i]==arr[res]){
            count++;
        }
        else {
            count--;
        }
        if (count==0){
            res=i;
            count=1;
        }
    }
    int c=0;
    for (int i=0;i<n;i++){
        if (arr[i]==arr[res]){
            c++;
        }
    }
    if (c>(n/2)){
        return res;
    }
    else {
        return -1;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<majority_element(arr, n);
}