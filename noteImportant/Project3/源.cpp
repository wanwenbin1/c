#include <iostream>
#include <vector>
#include <valarray>
#include <cassert>
#include <iterator>
#include <algorithm>
using namespace std;
string s;
template<class T>
void sort1(T t,T t1)
{
	sort(t, t1);

}

	/*for (int i = 0; i <n-1; i++)
	{
		for (int j = i+1; j >0;j--)
		{
			int temp = a[j];
			while (temp<a[j-1]&&j>=0)
			{
				a[j] = a[j-1];
				j--;
			}
			a[j] = temp;
		}
	}*/


int main()
{
	
	
	vector<int>arr = {999,7,9};
	auto t = arr.begin();
	auto t1 = arr.begin();
	//*t = 100;
	int& t3 = arr[0];
	int* p = &arr[0];
	*p = 1000;
	sort1<vector<int>::iterator>(arr.begin(), arr.end());
	for (auto s:arr)
	{
		cout << s << endl;
	}
	return 0;
}