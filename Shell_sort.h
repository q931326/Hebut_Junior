#ifndef SHELL_SORT_H_
#define SHELL_SORT_H_
#include<iostream>
#include<vector>
using namespace std;
class Shell_sort {
public:
	void shell_sort(vector<int>& nums) {
		int n = nums.size();
		int val = n / 2;
		while (val){
			for (int i = 0; i + val < n; i++) {
				if (nums[i] > nums[i + val])swap(nums[i], nums[i + val]);
			}
			val /= 2;
		}
	}
};
#endif
