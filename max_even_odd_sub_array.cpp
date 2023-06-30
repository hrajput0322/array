#include<bits/stdc++.h>
using namespace std;

int max_length_even_odd_sub_array(int arr[], int n){
    int cur_length=1;
    int max_length=1;
    for (int i=1;i<n;i++){
        if ((arr[i]&1)!=(arr[i-1]&1)){
            cur_length++;
            max_length=max(cur_length, max_length);
        }
        else {
            max_length=max(cur_length, max_length);
            cur_length=1;
        }
    }
    return max_length;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<max_length_even_odd_sub_array(arr, n);
}
