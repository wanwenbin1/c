#include <iostream>
#include <initializer_list>
using namespace std;

void print_errir1(int k)
{
	switch (k)
	{
	case 1:
		cout << "error:" << k << endl;
		break;
	case 2:
		cout << "error:" << k << endl;
		break;
	case 3:
		cout << "error:" <<k << endl;
		break;
	case 4:
		cout << "error:" <<k << endl;
		break;
	default:
		break;
	}
}

template<class T,class... T1>//类型展开
void print_errir1(T k,T1... argc...)//参数展开
{
	//cout << k << "error" << endl;
	 print_errir1(argc...);
	 cout << k << "error" << endl;
}

int main()
{
	print_errir1(1, 2, 3, 4);


	return 0;
}