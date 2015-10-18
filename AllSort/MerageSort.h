#pragma once
#include"Sort.h"
#ifndef MERAGE_SORT_H
#define MERAGE_SORT_H

template<class T>
class MerageSort : public Sort<T>
{
public:
	MerageSort(T temp[],int n):Sort(temp,n)
	{
		cout<<"Merage sort"<<endl;
	}

	void sort()
	{
		T *temp = new T[this->n];
		merageSort(this->array,temp,0,n - 1);
		delete [] temp;
	}
	void merageSort(T a[],T b[],int l, int r)
	{
		if(l < r)
		{
			int mid =(l + r)/2;
			merageSort(a,b,l,mid);
			merageSort(a,b,mid + 1,r);
			merageArray(a,b,l,mid,r);
		}
	}
	void merageArray(int a[], int b[], int l,int mid,int r)
	{
		int i = l,j = mid + 1;
		int m = mid,n = r;
		int k = 0;

		while(i <= m && j <= n)
		{
			a[i] > a[j] ? b[k++] = a[j++] : b[k++] = a[i++];
		}

		while(i <= m)
		{
			b[k++] = a[i++];
		}

		while(j <= n)
		{
			b[k++] = a[j++];
		}
		for(int O = 0; O < k; O++)
		{
			a[l + O]  = b[O];
		}
	}
};
#endif