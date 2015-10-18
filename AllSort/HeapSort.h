#pragma once
#include"Sort.h"
#ifndef HEAP_SORT_H
#define HEAP_SORT_H

template<class T>
class HeapSort:public Sort<T>
{
public:
	HeapSort(T temp[],int n):Sort(temp,n)
	{
		cout<<"Heap Sort"<<endl;
	}
	void sort()
	{
		makeHeap(this->array,this->n);

		for(int i = n - 1; i >= 1;i--)
		{
			Swap(this->array[i],this->array[0]);
			FixHeap(this->array,0,i);
		}
	}
	void makeHeap(int a[], int n)
	{
		for(int i = n / 2 - 1; i >= 0; i--)
		{
			FixHeap(a,i,n);
		}
	}

	void FixHeap(int a[], int i, int n)
	{
		int j, temp;
		temp = a[i];

		j = 2 * i + 1;

		while(j < n)
		{
			if(j + 1 < n && a[j + 1] > a[j]) j++;

			if(a[j] <= temp) break;

			a[i] = a[j];
			i = j;
			j = 2 * i + 1;
		}
		a[i] = temp;
	}
	inline void Swap(T &a,T &b)
   {
		T temp = a;
		a = b;
		b = temp;
    }
};

#endif