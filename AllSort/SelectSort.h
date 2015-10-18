#pragma once
#include"Sort.h"
#ifndef SELECT_SORT_H
#define SELECT_SORT_H
template<class T>
class SelectSort : public Sort<T>
{
public:
	SelectSort(T temp[],int n):Sort(temp, n)
	{
		cout<<"Select Sort"<<endl;
	}
	void sort()
	{
		for(int i = 0; i < n; i++)
		{
			int min = i;
			for(int j = 1; j < n; j++)
			{
				if(this->array[min] > this->array[j])
				{
					min = j;
				}
			}
			if(min != i)
			{
				T temp = this->array[min];
				this->array[min] = this->array[i];
				this->array[i] = temp;
			}
		}
	}
};
#endif