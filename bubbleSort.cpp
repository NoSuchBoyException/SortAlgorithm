#include "bubbleSort.h"

void BubbleSort::bubbleSort(vector<int> &data)
{
	//循环到容器倒数第二个数为止
	for (vector<int>::size_type i = 0; i < data.size()-1; ++i)  
    {
		//从容器最后两个数开始比较
		for (vector<int>::size_type j = data.size()-1; j > i; --j)  
		{
            if(data.at(j) < data.at(j-1))
                swap(data[j], data[j-1]);
		}
    }
}