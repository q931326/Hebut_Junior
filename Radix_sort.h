#ifndef RADIX_SORT_H_
#define RADIX_SORT_H_
#include<iostream>
#include<vector>
using namespace std;
class Radix_sort {
public:
	void radix_sort(vector<int>& nums) {
		int max_num = *max_element(nums.begin(), nums.end());
		int Len = 0,div = 1;
		while (max_num) {
			Len++;
			max_num /= 10;
		}
		for (int i = 0; i < Len; i++) {
			vector<int>countArr(10, 0);
			vector<int>result(nums.size());
			for (auto& it : nums)
				countArr[it / div % 10]++;
			for (int i = 1; i < countArr.size(); i++)
				countArr[i] += countArr[i - 1];
			for (int i = nums.size() - 1; i >= 0; --i) {
				result[countArr[nums[i] / div % 10] - 1] = nums[i];
				countArr[nums[i] / div % 10]--;
			}
			nums = result;
			div *= 10;
		}
	}
};
#endif
