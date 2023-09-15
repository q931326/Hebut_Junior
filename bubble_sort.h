#ifndef BUBBLE_H_
#define BUBBLE_H_
#include<iostream>
#include<vector>
using namespace std;
	class Bubble_sort {
	public:		
		template<class T>
		void bubble_sort(vector<T>& nums) {
			int n = nums.size();
			for (int i = 0; i < n; i++) {
				for (int j = i; j < n; j++) {
					if (nums[i] > nums[j]) {
						swap(nums[i], nums[j]);
					}
				}
			}
		}
	};
#endif
