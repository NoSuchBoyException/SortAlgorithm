//希尔排序法：先拟定一个合适的增量，最外层循环从第一个数开始与相距增量的数进行比较，前大后小则交换，并进行里层循环
//交换后向前与相距增量的数比较，前大后小则交换。执行完循环后减小增量继续排序，直到增量为1
//希尔排序法是直接插入排序的改进，实现了数的跨越式排序，将无序表逐渐变为有序表
//希尔排序：int while for if for

#include "shellSort.h"

void ShellSort::shellSort(vector<int> &data)
{
	//int定义一个初始增量
    int increment = data.size(), temp = 0 , j = 0;
	//while循环控制增量递减
	while (increment > 1)
	{
		increment = increment/3+1;
		//for循环从增量遍历到最后一个数
		for (vector<int>::size_type i = increment; i < data.size(); i++) 
		{
			//从第一个数开始与相距增量的数进行比较
            if (data.at(i) < data.at(i-increment))  
            {
                temp = data.at(i);
				//继续向前与相距增量的数继续进行比较 
				for (j = i-increment; j >= 0 && temp < data.at(j); j -= increment) 
					data[j+increment] = data[j];
				data[j+increment] = temp;
            }             
		}
	}
}