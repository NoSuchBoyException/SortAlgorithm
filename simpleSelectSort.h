//简单选择排序 复杂度O(n^2) 性能略优于冒泡排序

#ifndef SIMPLESELECTSORT_H
#define SIMPLESELECTSORT_H

#include <vector>
#include <algorithm>
using namespace std;

class SimpleSelectSort
{
public:
	void simpleSelectSort(vector<int> &data);
};

#endif