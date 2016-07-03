//ϣ�����򷨣����ⶨһ�����ʵ������������ѭ���ӵ�һ������ʼ����������������бȽϣ�ǰ���С�򽻻������������ѭ��
//��������ǰ��������������Ƚϣ�ǰ���С�򽻻���ִ����ѭ�����С������������ֱ������Ϊ1
//ϣ��������ֱ�Ӳ�������ĸĽ���ʵ�������Ŀ�Խʽ���򣬽�������𽥱�Ϊ�����
//ϣ������int while for if for

#include "shellSort.h"

void ShellSort::shellSort(vector<int> &data)
{
	//int����һ����ʼ����
    int increment = data.size(), temp = 0 , j = 0;
	//whileѭ�����������ݼ�
	while (increment > 1)
	{
		increment = increment/3+1;
		//forѭ�����������������һ����
		for (vector<int>::size_type i = increment; i < data.size(); i++) 
		{
			//�ӵ�һ������ʼ����������������бȽ�
            if (data.at(i) < data.at(i-increment))  
            {
                temp = data.at(i);
				//������ǰ��������������������бȽ� 
				for (j = i-increment; j >= 0 && temp < data.at(j); j -= increment) 
					data[j+increment] = data[j];
				data[j+increment] = temp;
            }             
		}
	}
}