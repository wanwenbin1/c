

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include "标头.h"

using namespace std;



int main()
{
	srand(time(0));
	vector<int>temp(10);
	generate(temp.begin(), temp.end(), suiji);

	for (auto i :temp)
	{
		cout << i << endl;
	}
		
    return 0;
}

