/** 堆排序思想：将待排序列从最后一个非叶节点构造成大顶堆，重复进行顶尾交换，从第一个元素开始重构大顶堆
建堆时间复杂度为O（n），取堆顶记录重建时间复杂度O（logn），取n-1次，所以为O（nlogn）
最好 最坏 平均时间复杂度都为O（nlogn） **/

#include "heapSort.h"

void HeapSort::heapSort(vector<int> &data)
{
	//将待排序列看成一个完全二叉树，从最后一个非叶结点逆序构建大顶堆
	for (int i = (data.size()-1)/2; i >= 0; --i)
		heapAdjust(data, i, data.size()-1);

	for (int i = data.size()-1; i > 0; --i)
	{
		swap(data[i], data[0]);
		//重建大顶堆是从顶开始调整,利用了大顶堆各个顶大于所有子节点
		heapAdjust(data, 0, i-1);
	}
}

//s为待调整的第一个结点下标，m为最后一个结点下标
void HeapSort::heapAdjust(vector<int> &data, int s, int m)
{
	int temp = data.at(s);
	for (int j = 2*s; j <= m; j *= 2)
	{
		//左右子结点取大的那个下标
		if (j < m && data.at(j) < data.at(j+1))
			++j;
		//根结点赋为亲子中最大值
		if (temp >= data.at(j))
			break;
		data[s] = data[j];
		//继续调整子结点为大顶
		s = j;
	}
	data[s] = temp;
}