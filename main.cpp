#include<iostream>
#include<vector>
#include"bubble_sort.h"
#include"Quick_sort.h"
#include"Insert_sort.h"
#include"Merge_sort.h"
#include"Shell_sort.h"
#include"Choose_sort.h"
#include"Count_sort.h"
#include"Heap_sort.h"
#include"Bucket_sort.h"
#include"Radix_sort.h"
using namespace std;
void display(vector<int>& nums) {
	for (auto x : nums) {
		cout << x << "  ";
	}
}
int main() {
	vector<int>array(10);
	array = { 26,56,1,25,84,54,61,92,72,3 };
/*	Bubble_sort b_sort;
	b_sort.bubble_sort(array);*/
/*	Quick_sort q_sort;
	q_sort.quick_sort(array,0,9);*/
/*	Choose_sort c_sort;
	c_sort.choose_sort(array,10);*/
/*	vector<int>store(10);
	Merge_sort m_sort;
	m_sort.merge_sort(array,store,0,9);*/
/*	Shell_sort s_sort;
	s_sort.shell_sort(array);*/
/*	Insert_sort i_sort;
	i_sort.insert_sort(array);*/
/*	Count_sort cou_sort;
	cou_sort.count_sort(array);*/
/*	Heap_sort h_sort;
	h_sort.heap_sort(array,10);*/
/*	Bucket_sort bu_sort;
	bu_sort.bucket_sort(array);*/
/*	Radix_sort r_sort;
	r_sort.radix_sort(array);*/
	display(array);
	return 0;
}
