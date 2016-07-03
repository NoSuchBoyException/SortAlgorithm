//直接插入排序（Straight Insertion Sorting）的基本思想是：把n个待
//排序的元素看成为一个有序表和一个无序表，开始时有序表中只包含一个
//元素，无序表中包含有n-1个元素，排序过程中每次从无序表中取出第一个
//元素，将它插入到有序表中的适当位置，使之成为新的有序表，重复n-1次
//可完成排序过程。

#include "straightInsertSort.h"
 
void StraightInsertSort::straightInsertSort(vector<int> &data)
{
	int temp = 0, j = 0;
	for (vector<int>::size_type i = 1; i < data.size(); i++)
    {
		if (data.at(i) < data.at(i-1))
		{
			//保存较小数
            temp = data.at(i);
			//循环判断以找到待插入数的位置
			for (j = i-1; j >= 0 && data.at(j) > temp; j--)
                data[j+1] = data[j];
			data[j+1] = temp;
		}
    }
}