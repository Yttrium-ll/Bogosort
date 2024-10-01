#pragma once
#include <vector>
#include <numeric>
#include <cstdlib>
#include <ctime>

using std::vector;

bool check(const vector<int>& vec)
{
	for (size_t i = 0; i < vec.size() - 1; i++)
		if (vec[i] > vec[i + 1])
			return false;
	return true;
}

void bogosort(vector<int>& vec)
{
	vector<int> vind(vec.size(), 0);
	std::iota(vind.begin(), vind.end(), 0);

	

}