//∂—≈≈–Ú  ±º‰∏¥‘”∂»O(nlogn)

#ifndef HEAPSORT_H
#define HEAPSORT_H
#include <vector>
using namespace std;

class HeapSort
{
public:
	void heapSort(vector<int> &data);

private:
	void heapAdjust(vector<int> &data, int s, int m);
};

#endif