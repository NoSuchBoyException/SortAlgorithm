/** ������˼�룺���������д����һ����Ҷ�ڵ㹹��ɴ󶥶ѣ��ظ����ж�β�������ӵ�һ��Ԫ�ؿ�ʼ�ع��󶥶�
����ʱ�临�Ӷ�ΪO��n����ȡ�Ѷ���¼�ؽ�ʱ�临�Ӷ�O��logn����ȡn-1�Σ�����ΪO��nlogn��
��� � ƽ��ʱ�临�Ӷȶ�ΪO��nlogn�� **/

#include "heapSort.h"

void HeapSort::heapSort(vector<int> &data)
{
	//���������п���һ����ȫ�������������һ����Ҷ������򹹽��󶥶�
	for (int i = (data.size()-1)/2; i >= 0; --i)
		heapAdjust(data, i, data.size()-1);

	for (int i = data.size()-1; i > 0; --i)
	{
		swap(data[i], data[0]);
		//�ؽ��󶥶��ǴӶ���ʼ����,�����˴󶥶Ѹ��������������ӽڵ�
		heapAdjust(data, 0, i-1);
	}
}

//sΪ�������ĵ�һ������±꣬mΪ���һ������±�
void HeapSort::heapAdjust(vector<int> &data, int s, int m)
{
	int temp = data.at(s);
	for (int j = 2*s; j <= m; j *= 2)
	{
		//�����ӽ��ȡ����Ǹ��±�
		if (j < m && data.at(j) < data.at(j+1))
			++j;
		//����㸳Ϊ���������ֵ
		if (temp >= data.at(j))
			break;
		data[s] = data[j];
		//���������ӽ��Ϊ��
		s = j;
	}
	data[s] = temp;
}