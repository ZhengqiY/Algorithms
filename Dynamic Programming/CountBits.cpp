#include<iostream>
#include<vector>

using namespace std;

class CountBits {
public:
	vector<int> countBits(int num)
	{
		vector<int> dp(num + 1);
		for (int i = 1; i <= num; i++) {
			dp[i] = dp[i / 2];
			if (i % 2 == 1) {
				dp[i]++;
			}
		}
		return dp;
	}
};