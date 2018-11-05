#include <stdio.h>
#include <vector>
#include "Header.h"

using namespace std;

vector<int>* findMultiples(const int &rangesize) {
	static vector<int>* range = new vector<int>;

	for (int i = 1; i < rangesize; i++)
		if (i % 3 == 0 || i % 5 == 0)
			range->push_back(i);

	return range;
}

int* addition(vector<int>* range) {
	static int size;
	for (int x : *range)
		size += x;
	return &size;
}

int main(int args, char** chargs) {
	const int size = 1000;
	vector<int>* range = findMultiples(size);

	for (int x : *range)
		printf("%d, ", x);

	printf("\n%d is the size of mutiples\n", *addition(range));

	return 0;
}

