#pragma once
#ifndef INSERT_SORT_H
#define INSERT_SORT_H
template<class T>
class InsertSort : public Sort<T>
{
public:
	InsertSort(T temp[], int n):Sort(temp,n)
	{
		cout<<"Insert Sort"<<endl;
	}

	void sort()
	{
		int i, j, temp;

		for(i = 1; i < n; i++)
		{
			temp = this->array[i];
			for(j = i - 1; j >= 0 && temp > this->array[j]; j--)
			{
				this->array[j + 1] = this->array[j];
			}
			this->array[++j] = temp;
		}
	}
};

#endif
