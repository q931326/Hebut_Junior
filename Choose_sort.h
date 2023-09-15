#ifndef CHOOSE_SORT_H_
#define CHOOSE_SORT_H_
#include<iostream>
#include<vector>
using namespace std;
class Choose_sort {
private:
	vector<int>ans;
public:
	void choose_sort(vector<int>& nums, int n) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n - i; j++) {
				if (nums[j] > nums[n - i - 1]) swap(nums[j], nums[n - i - 1]);
			}
		}
	}
};
#endif
