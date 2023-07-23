#pragma once
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include "../ConsoleApplication6/标头.h"
using namespace std;

//随机队列
void suijiVector(vector<int>&temp)
{
	int size = temp.size();
	generate(temp.begin(), temp.end(), suiji);
}