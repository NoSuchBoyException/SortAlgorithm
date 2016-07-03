//简单选择排序思想：从容器第一个数循环到容器倒数第二个数，每次循环比
//较相邻两数的大小，保存最小数的序号，最后再交换位置，最外层循环一次
//保证第i的数排在它该在的位置

#include "simpleSelectSort.h"

void SimpleSelectSort::simpleSelectSort(vector<int> &data)
{
	//从第一个数循环到倒数第二个数
	for (vector<int>::size_type i = 0; i < data.size()-1; ++i)  
    {
		int minD = i; 
		//从i+1开始直到最后一个数跟i所在数比较
		for (vector<int>::size_type j = i+1; j < data.size(); ++j)
		{
            if (data.at(j) < data.at(minD))
                minD = j;  //记下当前较小数下标
		}
		if (i != minD)
            swap(data[i], data[minD]);
    }
}