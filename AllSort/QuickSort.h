#pragma once
#include"Sort.h"
#ifndef QUICK_SORT_H
#define QUICK_SORT_H

template<class T>
class QuickSort:public Sort<T>
{
public:
	QuickSort(T temp[],int n):Sort(temp,n)
	{
		cout<<"Quick Sort"<<endl;
	}

	void sort()
	{
		quickSort(this->array,0,n - 1);
	}

	void quickSort(T a[],int first, int last)
	{
		int i = first;
		int j = last;

		if(first < last)
		{
				int temp = a[i];
				while(i < j)
			   {
					while(i < j && temp < a[j]) j--;

					if(i < j) a[i++] = a[j];

					while(i < j && temp > a[i]) i++;

					if(i < j) a[j--] = a[i];
			    }
			a[i] = temp;

			quickSort(a,first,i - 1);
			quickSort(a,i + 1,last);
			}
	}
};
#endif