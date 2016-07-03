#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <vector>
using namespace std;

class QuickSort
{
public:
	void quickSort(vector<int> &data);

private:
	void qSort(vector<int> &data, int low, int high);
	int partition(vector<int> &data, int low, int high);
};
#endif