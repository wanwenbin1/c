#pragma once
#include <assert.h>

template<class T>
class Array {
private:
	T* list;
	int size;

public:
	Array(int sz = 10);
	Array(const Array<T>& a);
	~Array();
	Array<T>& operator=(const Array<T>& ths);
	T& operator[](int i);
	const T& operator[](int i)const;
	operator T* ();
	operator const T* ()const;
	int getSize()const;
	void resize(int sz);
	void swap1(Array<T>&temp);

};

template<class T>
inline Array<T>::Array(int sz)
{
	assert(sz >= 0);
	size = sz;
	list = new T[size];
}

template<class T>
inline Array<T>::Array(const Array<T>& a)
{
	size = a.size;
	list = new T[size];
	for (int i=0;i<size;i++)
	{
		list[i] = a.list[i];
	}
}



template<class T>
inline Array<T>::~Array()
{
	delete[]list;
}

template<class T>
inline Array<T>& Array<T>::operator=(const Array<T>& ths)
{
	// TODO: 在此处插入 return 语句
	if (ths!=*this)
	{
		if (this->size!=ths.size)
		{
			delete[]list;
			size = ths.size;
			list = new T[size];
		}
		for (int i = 0; i < size; i++)
		{
			list[i] = ths.list[i];
		}
	}
	return *this;
}





template<class T>
inline T& Array<T>::operator[](int i)
{
	// TODO: 在此处插入 return 语句
	assert(i >= 0 && i < size);
	return list[i];
}

template<class T>
inline const T& Array<T>::operator[](int i) const
{
	// TODO: 在此处插入 return 语句
	assert(i >= 0 && i < size);
	return list[i];
}

template<class T>
inline Array<T>::operator T* ()
{
	return list;
}

template<class T>
inline Array<T>::operator const T* () const
{
	return list;
}

template<class T>
inline int Array<T>::getSize() const
{
	return size;
}

template<class T>
inline void Array<T>::resize(int sz)
{
	assert(sz >= 0);
	if (sz==size)
	{
		return;
	}
	T* newList = new  T[sz];
	int n = (sz < size) ? sz : size;

	for (int i = 0; i <n; i++)
	{
		newList[i] = list[i];
	}
	delete[]list;
	list = newList;
	size = sz;

}

template<class T>
inline void Array<T>::swap1(Array<T>& temp)
{
	Array<T> tmp = temp;

	temp = *this;

	*this = tmp;
}
