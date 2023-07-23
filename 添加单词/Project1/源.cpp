#include <iostream>
#include <string>

using namespace std;


int main()
{
	int k = 0;
	cin >> k;
	cin.clear();		// 清除错误标志, 使后续正常输入, 但错误的数据还在输入缓冲区
	cin.ignore(3, '\n');
	cin >> k;
	cin >> k;
	cin >> k;
	cin >> k;
	cin >> k;
	cin >> k;
	cin >> k;



	return  0;
}