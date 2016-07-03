//希尔排序法 时间复杂度O(nlogn)~O(n^2)
#ifndef SHELLSORT_H
#define SHELLSORT_H

#include <vector>
#include <algorithm>
using namespace std;

class ShellSort
{
public:
	void shellSort(vector<int> &data);
};

#endif