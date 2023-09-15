#ifndef MERGE_SORT_H_
#define MERGE_SORT_H_
#include<iostream>
#include<vector>
using namespace std;
	class Merge_sort {
private:
	void merge(vector<int>& nums,vector<int>&arr,int start,int mid,int end) {
		int i = start, j = mid+1, k = start;
		while (i != mid + 1 && j != end + 1) {
			if (nums[i] > nums[j]) {
				arr[k++] = nums[j++];
			}
			else {
				arr[k++] = nums[i++];
			}
		}
		while (i != mid + 1) {
			arr[k++] = nums[i++];
		}
		while (j != end + 1) {
			arr[k++] = nums[j++];
		}
		for (int i = start; i <= end; i++) {
			nums[i] = arr[i];
		}
	}
public:	
	void merge_sort(vector<int>& nums,vector<int>&arr, int start, int end) {
		int mid;
		if (start < end) {
			mid = (end - start) / 2 + start;
			merge_sort(nums,arr, start, mid);
			merge_sort(nums,arr, mid+1, end);
			merge(nums, arr, start, mid, end);
			}
		}
	};
#endif
