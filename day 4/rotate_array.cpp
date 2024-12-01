#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    // TC: O(n^2)
    void bruteforce(vector<int>& arr, int d){
        int n = arr.size();
        int backs = d - n;
        
        for(int i=0; i<d; i++){
            int j = 0;
            while(j+1 < n){
                swap(arr[j], arr[j+1]);
                j++;
            }
        }
    }
    // n = len(arr)
    // d %= n

    // cycles = math.gcd(n, d)

    // for i in range(cycles):
    //     startEle = arr[i]
    //     currIdx = i

    //     while True:
    //         nextIdx = (currIdx + d) % n

    //         if nextIdx == i:
    //             break

    //         arr[currIdx] = arr[nextIdx]
    //         currIdx = nextIdx

    //     arr[currIdx] = startEle
    
    void juggling(vector<int>& arr, int d){
        int n = arr.size();
        d %= n;
        
        int cycles = __gcd(n, d);
        
        for(int i=0; i<n; i++){
            int startEle = arr[i];
            int currIdx = i;
            
            while (true){
                int nextIdx = (currIdx + d) % n;
    
                if (nextIdx == i)
                    break;
    
                arr[currIdx] = arr[nextIdx];
                currIdx = nextIdx;
            }

            arr[currIdx] = startEle;
        }
    }

    
    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // bruteforce(arr, d);
        juggling(arr, d);
    }
};


int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        // calling rotateArr() function
        ob.rotateArr(arr, d);

        // printing the elements of the array
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
