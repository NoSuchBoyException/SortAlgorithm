#include "quickSort.h"
#include "mergingSort.h"
#include <iostream>

int main()
{
	vector<int> data;
	vector<int> data1;

	data.push_back(4);
	data.push_back(2);
	data.push_back(1);
	data.push_back(9);

	data1.push_back(4);
	data1.push_back(2);
	data1.push_back(1);
	data1.push_back(9);

	MergingSort bs;
    bs.mergingSort(data, data1, 0, 3);

	cout<<data1.at(0)<<endl
		<<data1.at(1)<<endl
		<<data1.at(2)<<endl
		<<data1.at(3)<<endl;

	return 0;
}