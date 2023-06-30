#include<bits/stdc++.h>
using namespace std;

int max_freq(int L[], int R[], int n){
    int arr[1000]={0};
    for (int i=0;i<n;i++){
        arr[L[i]]++;
        arr[R[i]+1]--;
    }
    int max_f=arr[0];
    int index=0;
    for (int i=1;i<1000;i++){
        arr[i]+=arr[i-1];
        if (arr[i]>max_f){
            max_f=arr[i];
            index=i;
        }
    }
    return index;
}

int main(){
    int n;
    cin>>n;
    int L[n];
    int R[n];
    for(int i=0;i<n;i++){
        cin>>L[i];
    }
    for(int i=0;i<n;i++){
        cin>>R[i];
    }
    cout<<max_freq(L, R, n);
}