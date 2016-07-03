//�鲢����n�������������Կ���n������������У�ÿ�������г���Ϊ1�������鲢
//�õ���С��n/2�����������У��������鲢��ֱ���õ�һ������Ϊn����������

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
	//��data�е�����С����鲢��newdata
	int j = 0, i = 0;
    for (i = start, j = mid + 1; start <= mid && j <= end; i++)
    {
		if (data.at(start) < data.at(j))
		    newData[i] = data.at(start++);
		else
			newData[i] = data.at(j++);
    }

	//��ʣ���data[start...mid]���Ƶ�newdata
	if (start <= mid)
	{
		for (int l = 0; l <= mid - start; ++l)
			newData[i+l] = data[start+l];
	}

	//��ʣ���data[mid+1...end]���Ƶ�newdata
	if (j <= end)
	{
		for (int l = 0; l <= end - j; ++l)
            newData[i+l] = data[j+l]; 
	}
}