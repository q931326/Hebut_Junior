#ifndef COUNT_SORT_H_
#define COUNT_SORT_H_
#include<iostream>
#include<vector>
using namespace std;
class Count_sort {
public:
	void count_sort(vector<int>& nums) {
		int max_num = INT_MIN, min_num = INT_MAX;
		for (auto x : nums) {
			if (x > max_num) {
				max_num = x;
			}if (x < min_num) {
				min_num = x;
			}
		}
		vector<int>store(max_num - min_num + 1);
		for (int i = 0; i < nums.size(); i++) {
			store[nums[i] - min_num]++;
		}
		int start = 0;
		for (int j = 0; j < store.size(); j++) {
			if (store[j] != 0) {
				for (int k = 0; k < store[j]; k++) {
					nums[start++] = min_num + j;
				}
			}
		}
	}
};
#endif
