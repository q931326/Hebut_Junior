#ifndef BUCKET_H_
#define BUCKET_H_
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Bucket_sort {
public:
	void bucket_sort(vector<int>& nums) {
		int n = nums.size();
		int min_num = nums[0], max_num = nums[0];
		for (auto x : nums) {
			min_num = min(min_num, x);
			max_num = max(max_num, x);
		}
		int count = (max_num - min_num) / n + 1;	//the count of divide; (vector)
		int cnt = (max_num - min_num) / count + 1;	//the size	of count;
		vector<vector<int>>buckets(cnt);
		for (int i = 0; i < n; i++) {
			int idx = (nums[i] - min_num) / count;
			buckets[idx].push_back(nums[i]);
		}
		for (int i = 0; i < cnt; i++) {
			sort(buckets[i].begin(), buckets[i].end());
		}
		int index = 0;
		for (int i = 0; i < count; i++) {
			for (int j = 0; j < buckets[i].size(); j++) {
				nums[index++] = buckets[i][j];
			}
		}
	}
};
#endif
