#pragma once
#include <vector>

#include "Plot.h"

using namespace std;

class Farm
{
public:
	Farm();

	void print_farm();

protected:
	vector<vector<Plot>> farm;
};