#ifndef QUICK_H_
#define QUICK_H_
#include<iostream>
#include<vector>
using namespace std;
class Quick_sort {
public:
	void quick_sort(vector<int>& nums, int begin, int end) {
		if (begin > end) return;
		int i = begin, j = end;
		int temp = nums[begin];
		while(i!=j){
			while (nums[j] >= temp && i < j) {
				j--;
			}			
			while (nums[i] <= temp && i < j) {
				i++;
			}
			if (j > i) {
				swap(nums[i], nums[j]);
			}
		}
		nums[begin] = nums[i];
		nums[i] = temp;
		quick_sort(nums, begin, i-1);
		quick_sort(nums, i+1, end);
	}
};
#endif
