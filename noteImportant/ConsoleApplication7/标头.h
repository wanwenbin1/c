#pragma once
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include "../ConsoleApplication6/��ͷ.h"
using namespace std;

//�������
void suijiVector(vector<int>&temp)
{
	int size = temp.size();
	generate(temp.begin(), temp.end(), suiji);
}