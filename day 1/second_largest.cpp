#include <bits/stdc++.h>

using namespace std;

// User function template for C++
class Solution
{
public:
	// Function returns the second
	// largest elements
	int getSecondLargest(vector<int> &arr)
	{
		int n = arr.size();
		int max = arr[0], smax = -1;

		for (int i = 1; i < n; i++)
		{
			if (arr[i] > max)
			{
				smax = max;
				max = arr[i];
			}
			else if (arr[i] > smax and arr[i] < max)
			{
				smax = arr[i];
			}
		}

		return smax;
	}
};

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		vector<int> arr;
		string input;
		getline(cin, input);
		stringstream ss(input);
		int number;
		while (ss >> number)
		{
			arr.push_back(number);
		}
		Solution ob;
		int ans = ob.getSecondLargest(arr);
		cout << ans << endl;
		cout << "~" << endl;
	}
	return 0;
}
