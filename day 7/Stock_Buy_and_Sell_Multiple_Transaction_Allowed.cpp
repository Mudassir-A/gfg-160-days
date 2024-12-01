#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int profit = 0;
        int n = prices.size();
        
        for(int i=1; i<n; i++){
            if(prices[i] > prices[i-1]){
                profit += prices[i] - prices[i-1];
            }
        }
        
        return profit;
    }
};


int main() {
    int t;

    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        int res = ob.maximumProfit(arr);
        cout << res;

        cout << "\n";
    }
    return 0;
}