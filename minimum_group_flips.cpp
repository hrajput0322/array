#include<bits/stdc++.h>
using namespace std;

void min_group_flips(string s){
    int n=s.length();
    for (int i=1;i<n;i++){
        if (s[i]!=s[i-1]){
            if (s[i]!=s[0]){
                cout<<"from "<<i<<" to ";
            }
            else {
                cout<<i-1<<"\n";
            }
        }
    }
    if (s[n-1]!=s[0]){
        cout<<n-1<<"\n";
    }
}

int main(){
    string s;
    cin>>s;
    min_group_flips(s);
}