// ConsoleApplication7.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <cmath>
#include <math.h>
#include <functional>
#include "标头.h"
using namespace placeholders;



using namespace std;

int pow1(int x, int y)
{
	int temp=pow(x, y);
	return temp;
}


int main()
{
	
	auto fun1 = bind(pow1, _1, _2);
	srand(time(0));

	vector<int>temp(10);
	vector<int>temp1(10,5);
	vector<int>temp2(10);
	vector<int>temp3(10,7);
	suijiVector(temp);

	for (auto i :temp)
	{
		cout << i << endl;
	}
	cout << endl;
	//n 的5次方
	transform(temp1.begin(), temp1.end(), temp.begin(), temp2.begin(),fun1);
	for (auto i : temp2)
	{
		cout << i << endl;
	}
	cout << endl;
	//7的n次方
	transform(temp.begin(), temp.end(), temp3.begin(), temp3.begin(), fun1);
	for (auto i : temp3)
	{
		cout << i << endl;
	}
	cout << endl;
	//n的n次方
	transform(temp.begin(), temp.end(), temp.begin(), temp.begin(), fun1);
	for (auto i : temp)
	{
		cout << i << endl;
	}
	cout << endl;
	return 0;
}


// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
