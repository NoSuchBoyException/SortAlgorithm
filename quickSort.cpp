//�������򣺽��������¼ͨ�����麯����Ϊ���飬�������ᣬ�������ȫ����С������
//�ұ�����ȫ���������ᣬ����ݹ������㷨
#include "quickSort.h"

void QuickSort::quickSort(vector<int> &data)
{
    qSort(data, 0, data.size()-1);
}

//lowΪ�������е�һ�����±꣬highΪ���һ�����±�
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

//���麯����data��Ϊ���飬�������������С�����ᣬ�ұߵ�ȫ���������ᣬ������������λ�� 
int QuickSort::partition(vector<int> &data, int low, int high)
{
	//Ѱ�����ᣬ����data[low]Ϊ������������Ҷ������м����������еڶ������(����ȡ�з�)
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
		//�����������������С��������������ύ��λ��
        while(low < high && data.at(high) >= pivot)
			high--;
		swap(data[low], data[high]);

		//�������ұ���������С��������������ύ��λ��
		while(low < high && data.at(low) <= pivot)
			low++;
		swap(data[low], data[high]);
    }
	return low;
}