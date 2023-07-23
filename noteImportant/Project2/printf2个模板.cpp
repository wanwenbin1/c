#include <iostream>
#include <initializer_list>
#include <string>
using namespace std;


template <typename T>
void print(const T& arr)
{
	cout << arr << endl;
	const type_info &a= typeid(T);
	cout << a.name() << endl;
}
//递归调用,出口是上面的那个函数
template <class T,class...Ttype>
void print(const T& t,const Ttype&...temp)
{
	cout << t << endl;
	const type_info& a = typeid(T);
	cout << a.name() << endl;
	return print(temp...);
}




template <typename T>
void print1(const initializer_list<T>& temp)
{
	for (auto s:temp)
	{
		cout << s << endl;
	}
}

template<class T,class...Ttype>
void print1(const initializer_list<T>&temp, const initializer_list<Ttype>&...n)
{
	for (auto s:temp)
	{
		cout << s << endl;
	}
	return print1(n...);
}

int main()
{
	initializer_list<int>temp = { 1,2,3 };
	print1({1,2,3 },{"4,5,6","sdf"},{"sdfsd"},{1,2,3});
	
	print(1, 2, 3, "sdfds");

	return 0;
}