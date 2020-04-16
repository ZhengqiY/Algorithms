#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

class CombinationSum {
public:
	int limit = INT_MAX;
	vector<vector<int>> combinationSum(vector<int>& candidates, int target)
	{
		vector<vector<int>> res;
		vector<int> option;
		for (int i = 0; i < candidates.size(); i++) {
			limit = min(limit, candidates[i]);
		}
		backtrack(res, option, candidates, target, 0);
		return res;
	}

	void backtrack(vector<vector<int>> &res, vector<int> &option, vector<int> &candidates, int residual,int id)
	{
		if (residual == 0) {
			res.push_back(option);
			return;
		}
		if (residual > limit) {
			for (int i = id; i < candidates.size(); i++) {
				option.push_back(candidates[i]);
				backtrack(res, option, candidates, residual - candidates[i], i);
				option.pop_back();
			}
		}
	}
};

//INT_MAX