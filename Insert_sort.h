#ifndef INSERT_SORT_H_
#define INSERT_SORT_H_
#include<iostream>
#include<vector>
using namespace std;
class Insert_sort {
public:
	void insert_sort(vector<int>& nums) {
		int n = nums.size();
		for (int i = 1; i < n; i++) {
			if(nums[i] < nums[i-1]) {
				int temp = nums[i];
				int j = i;
				while (j > 0 && temp < nums[j-1]) {
					j--;
				}
				for (int k = i;k > j; k--) {
					nums[k] = nums[k - 1];
				}
				nums[j] = temp;
			}
		}
	}
};
#endif
