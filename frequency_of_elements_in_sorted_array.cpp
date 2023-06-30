#include<bits/stdc++.h>
using namespace std;

void frequencies(int arr[],int n){
    int count=1;
    for (int i=1;i<=n;i++){
        if (arr[i]==arr[i-1]){
            count++;
        }
        else {
            cout<<arr[i-1]<<" "<<count<<"\n";
            count=1;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    frequencies(arr,n);
}