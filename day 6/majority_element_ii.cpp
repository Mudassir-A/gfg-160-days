#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        int n = arr.size();
        vector<int> ans;
        sort(arr.begin(), arr.end());
        
        map<int, int> hash;
        
        for(int i=0; i<n; i++){
            hash[arr[i]]++;
        }
        
        for(int i=0; i<hash.size; i++){
            if(hash[i] == n/3){
                ans.pushback(hash[i]    )
            }
        }
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto &i : ans)
                cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
