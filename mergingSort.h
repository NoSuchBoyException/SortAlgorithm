#ifndef MERGINGSORT_H
#define MERGINGSORT_H
#include <vector>
using namespace std;

class MergingSort
{
public:
	void mergingSort(vector<int> &data, vector<int> &newData);

private:
	void mSort(vector<int> &data, vector<int> &newData, int start, int end);
	void merge(vector<int> &data, vector<int> &newData, int start, int mid, int end);
};
#endif