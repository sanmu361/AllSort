#pragma once
#include "Sort.h"
#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

template <class T>
class BubbleSort : public Sort<T>
{
public:
	BubbleSort(T temp[],int n):Sort(temp,n)
	{
		cout<<"BublleSort"<<endl;
	}
	void sort()
	{
		for(int i = 0; i < n; i++  )
		{
			for(int j = 1; j < n - i; j++)
			{
				if(this->array[j - 1] < this->array[j])
				{
					Swap(array[j - 1],array[j]);
				}
			}
		}
	}
};
template<class T>
inline void Swap(T& t1, T& t2)
{
	T temp = t1;
	t1 = t2;
	t2 = temp;
}
#endif