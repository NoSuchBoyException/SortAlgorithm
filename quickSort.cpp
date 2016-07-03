//快速排序：将待排序记录通过分组函数分为两组，计算枢轴，左边那组全部数小于枢轴
//右边那组全部大于枢轴，分组递归排序算法
#include "quickSort.h"

void QuickSort::quickSort(vector<int> &data)
{
    qSort(data, 0, data.size()-1);
}

//low为待排序列第一个数下标，high为最后一个数下标
void QuickSort::qSort(vector<int> &data, int low, int high)
{
    int pivotLocate = 0;
	if (low < high)
	{
		pivotLocate = partition(data, low, high);

		qSort(data, low, pivotLocate-1);
		qSort(data, pivotLocate + 1, high);
	}
}

//分组函数将data分为两组，左边那组所有数小于枢轴，右边的全部大于枢轴，返回枢轴所在位置 
int QuickSort::partition(vector<int> &data, int low, int high)
{
	//寻找枢轴，枢轴data[low]为最左端数，最右端数，中间数三个数中第二大的数(三数取中法)
    int m = low + (high - low) / 2;
	if(data.at(low) > data.at(high))
		swap(data[low], data[high]);
	if(data.at(m) > data.at(high))
		swap(data[high], data[m]);
	if(data.at(m) > data.at(low))
		swap(data[m], data[low]);

	int pivot = data.at(low);
    while (low < high)
    {
		//从右往左遍历，遇到小于枢轴的数跟枢轴交换位置
        while(low < high && data.at(high) >= pivot)
			high--;
		swap(data[low], data[high]);

		//从左往右遍历，遇到小于枢轴的数跟枢轴交换位置
		while(low < high && data.at(low) <= pivot)
			low++;
		swap(data[low], data[high]);
    }
	return low;
}