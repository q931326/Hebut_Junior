#ifndef HEAP_SORT_H_
#define HEAP_SORT_H_
#include<iostream>
#include<vector>
using namespace std;
class Heap_sort {
public:
	void heapify(vector<int>& nums, int n, int i) {
		int largest = i;		
		int son_node = 2 * largest + 1;
		if (son_node < n && nums[largest] < nums[son_node]) {
			largest = son_node;
		}
		if (son_node + 1 < n && nums[largest] < nums[son_node + 1]) {
			largest = son_node + 1;
		}
		if (largest != i){
			swap(nums[i], nums[largest]);
			heapify(nums, n, largest);
		}
	}
	void heap_sort(vector<int>& nums, int n) {
		int lastnode = n - 1;
		int parent = (lastnode - 1) / 2;
		for (int i = parent; i >= 0; i--) {
			heapify(nums, n, i);
		}
		for (int j = n - 1; j >= 0; j--) {
			swap(nums[0], nums[j]);
			heapify(nums, j, 0);
		}
	}
};
#endif
