#pragma once
#ifndef VIRTUAL_SORT_H
#define VIRTUAL_SORT_H

template <class T>
class Sort
{
protected:
	T *array;
	int n;
public:
	Sort();
	Sort(T temp[],int n)
	{
		this->array = new int[n];
		this->n = n;
		for(int i = 0; i < n; i++)
		{
			array[i] = temp[i];
		}
	}

	void setArray(T temp[], int n)
	{
		this->array = new int[n];
		this->n = n;
		for(int i = 0; i < n; i++ )
		{
			array[i] = temp[i];
		}
	}
	void play()
	{
		for(int i = 0; i < this->n; i++)
		{
			cout<<this->array[i]<<endl;
		}
	}

	~Sort()
	{
		delete [] this->array;
	}

	virtual void sort() = 0;
};
#endif