//��ѡ������˼�룺��������һ����ѭ�������������ڶ�������ÿ��ѭ����
//�����������Ĵ�С��������С������ţ�����ٽ���λ�ã������ѭ��һ��
//��֤��i�������������ڵ�λ��

#include "simpleSelectSort.h"

void SimpleSelectSort::simpleSelectSort(vector<int> &data)
{
	//�ӵ�һ����ѭ���������ڶ�����
	for (vector<int>::size_type i = 0; i < data.size()-1; ++i)  
    {
		int minD = i; 
		//��i+1��ʼֱ�����һ������i�������Ƚ�
		for (vector<int>::size_type j = i+1; j < data.size(); ++j)
		{
            if (data.at(j) < data.at(minD))
                minD = j;  //���µ�ǰ��С���±�
		}
		if (i != minD)
            swap(data[i], data[minD]);
    }
}