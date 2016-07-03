//ֱ�Ӳ�������Straight Insertion Sorting���Ļ���˼���ǣ���n����
//�����Ԫ�ؿ���Ϊһ��������һ���������ʼʱ�������ֻ����һ��
//Ԫ�أ�������а�����n-1��Ԫ�أ����������ÿ�δ��������ȡ����һ��
//Ԫ�أ��������뵽������е��ʵ�λ�ã�ʹ֮��Ϊ�µ�������ظ�n-1��
//�����������̡�

#include "straightInsertSort.h"
 
void StraightInsertSort::straightInsertSort(vector<int> &data)
{
	int temp = 0, j = 0;
	for (vector<int>::size_type i = 1; i < data.size(); i++)
    {
		if (data.at(i) < data.at(i-1))
		{
			//�����С��
            temp = data.at(i);
			//ѭ���ж����ҵ�����������λ��
			for (j = i-1; j >= 0 && data.at(j) > temp; j--)
                data[j+1] = data[j];
			data[j+1] = temp;
		}
    }
}