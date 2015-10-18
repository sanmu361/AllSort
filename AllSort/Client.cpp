#include<iostream>
#include"Sort.h"
#include"BubbleSort.h"
#include"InsertSort.h"
#include"SelectSort.h"
#include"MerageSort.h"
#include"QuickSort.h"
#include"HeapSort.h"

using namespace std;

int main()
{
	int a[10] = {3,7,1,2,6,8,4,9,5,0};
    BubbleSort<int> Bubblesort(a,10);
	
	Bubblesort.sort();
	Bubblesort.play();

	InsertSort<int> insertsort(a,10);
	insertsort.sort();
	insertsort.play();


	SelectSort<int> selectsort(a,10);
	insertsort.sort();
	insertsort.play();

	MerageSort<int> meragesort(a,10);
	meragesort.sort();
	meragesort.play();

	QuickSort<int> quicksort(a,10);
	quicksort.sort();
	quicksort.play();

	HeapSort<int> heapsort(a,10);
	heapsort.sort();
	heapsort.play();
	return 0;
}