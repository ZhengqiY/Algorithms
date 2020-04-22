#include<iostream>
#include<string>
#include<vector>

using namespace std;

class CountSubstrings {
public:
	int countSubstrings(string s)
	{
		int N = s.size();
		int res = 0;
		vector<vector<bool>> dp(N, vector<bool>(N,0));
		for (int i = N - 1; i >= 0; i--) {
			for (int j = i; j < N; j++) {
				if (s[i] == s[j] && (j-i<3 || dp[i+1][j-1])) {
					dp[i][j] = true;
					res++;
				}
			}
		}
		return res;
	}
};

// vector<vector<bool>> dp(N, vector<bool>(N,0));

// string ->  s[i]
