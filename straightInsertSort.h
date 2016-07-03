//直接插入排序 时间复杂度O(n^2) 性能略优于冒泡排序和简单选择排序

#ifndef STRAIGHTINSERTSORT_H
#define STRAIGHTINSERTSORT_H

#include <vector>
using namespace std;

class StraightInsertSort
{
public:
	void straightInsertSort(vector<int> &data);
};

#endif