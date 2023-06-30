#include<bits/stdc++.h>
using namespace std;

int trap_rain_water(int arr[], int n){
    int water=0;
    int left_max[n];
    int right_max[n];
    left_max[0]=arr[0];
    right_max[n-1]=arr[n-1];
    for (int i=1;i<n;i++){
        left_max[i]=max(left_max[i-1],arr[i]);
    }
    for (int i=n-2;i>=0;i--){
        right_max[i]=max(right_max[i+1], arr[i]);
    }
    for (int i=0;i<n;i++){
        water+=min(left_max[i],right_max[i])-arr[i];
    }
    return water;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<trap_rain_water(arr,n);
}
