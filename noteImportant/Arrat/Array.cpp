#include "Array.h"
#include <iostream>

using namespace std;



int main()
{
	Array<int>temp;
	int size = temp.getSize();
	for (int i=0;i<size;i++)
	{
		temp[i] = i+1;
	}
	

	Array<int>temp1;
	int size1 = temp1.getSize();
	for (int i = 0; i < size1; i++)
	{
		temp1[i] = i+100;
	//	cout << temp1[i] << endl;
	}
	for (int i = 0; i < size1; i++)
	{
		cout << temp[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < size1; i++)
	{
		cout << temp1[i] << endl;
	}
	
	temp.swap1(temp1);
	for (int i = 0; i < size1; i++)
	{
		cout << temp[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < size1; i++)
	{
		cout << temp1[i] << endl;
	}
	return 0;
}