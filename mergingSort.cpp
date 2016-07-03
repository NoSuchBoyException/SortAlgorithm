//归并排序：n个待排数，可以看成n个有序的子序列，每个子序列长度为1，两两归并
//得到不小于n/2个有序子序列，再两两归并，直到得到一个长度为n的有序序列

#include "mergingSort.h"

void MergingSort::mergingSort(vector<int> &data, vector<int> &newData)
{
    mSort(data, newData, 0, data.size()-1);
}

void MergingSort::mSort(vector<int> &data, vector<int> &newData, int start, int end)
{
    int mid = 0;
	if (start == end)
		newData[start] = data[start];
	else
	{
		mid = (start + end) / 2;
		mSort(data, newData, start, mid);
		mSort(data, newData, mid + 1, end);
		merge(newData, data, start, mid, end);
	}
}

void MergingSort::merge(vector<int> &data, vector<int> &newData, int start, int mid, int end)
{
	//将data中的数由小到大归并到newdata
	int j = 0, i = 0;
    for (i = start, j = mid + 1; start <= mid && j <= end; i++)
    {
		if (data.at(start) < data.at(j))
		    newData[i] = data.at(start++);
		else
			newData[i] = data.at(j++);
    }

	//将剩余的data[start...mid]复制到newdata
	if (start <= mid)
	{
		for (int l = 0; l <= mid - start; ++l)
			newData[i+l] = data[start+l];
	}

	//将剩余的data[mid+1...end]复制到newdata
	if (j <= end)
	{
		for (int l = 0; l <= end - j; ++l)
            newData[i+l] = data[j+l]; 
	}
}