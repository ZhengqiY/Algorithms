#include<iostream>
#include<vector>

using namespace std;

class Subsets {
public:
	vector<vector<int>> subsets(vector<int>& nums)
	{
		vector<vector<int>> res;
		vector<int> temp;
		res.push_back(temp);
		if (nums.size() == 0) return res;
		backtrack(res, nums, 0, temp);
		return res;
	}

	void backtrack(vector<vector<int>>& res, vector<int>& nums, int id, vector<int> temp)
	{
		for (int i = id; i < nums.size(); i++) {
			temp.push_back(nums[i]);
			backtrack(res, nums, i + 1, temp);
			res.push_back(temp);
			temp.pop_back();
		}
	}
};