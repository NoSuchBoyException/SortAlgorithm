#include "bubbleSort.h"

void BubbleSort::bubbleSort(vector<int> &data)
{
	//ѭ�������������ڶ�����Ϊֹ
	for (vector<int>::size_type i = 0; i < data.size()-1; ++i)  
    {
		//�����������������ʼ�Ƚ�
		for (vector<int>::size_type j = data.size()-1; j > i; --j)  
		{
            if(data.at(j) < data.at(j-1))
                swap(data[j], data[j-1]);
		}
    }
}