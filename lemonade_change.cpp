//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int n, vector<int> &bills) {
        // code here
        int count_5=0;
        int count_10=0;
        if (bills[0]==10 || bills[0]==20){
            return false;
        }
        for (int i=0;i<n;i++){
            if (bills[i]==5){
                count_5++;
            }
            if (bills[i]==10){
                count_10++;
                if (count_5<1){
                    return false;
                }
                count_5--;
            }
            if (bills[i]==20){
                if (count_10>=1 && count_5>=1){
                    count_10--;
                    count_5--;
                }
                else if (count_5>=3){
                    count_5=count_5-3;
                }
                else {
                    return false;
                }
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends