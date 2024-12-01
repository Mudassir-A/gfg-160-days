#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size();
        int pivot = -1;
        
        for(int i=n-2; i>=0; i--){
            if(arr[i] < arr[i+1]){
                pivot = i;
                break;
            }
        }
        
        if(pivot == -1){
            reverse(arr.begin(), arr.end());
            return;
        }
        
        for(int i=n-1; i>pivot; i--){
            if(arr[i] > arr[pivot]){
                swap(arr[i], arr[pivot]);
                break;
            }
        }
        
        int left = pivot + 1;
        int right = n - 1;
        while(left < right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
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
        Solution ob;
        int n = arr.size();
        ob.nextPermutation(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
