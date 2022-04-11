#include <cstdio>
#include <iostream>
#include "include/BinarySearch.h"
#include "include/FindIndexOfFirstOccurenceOf.h"
#include "include/SumOfDigitsInNumber.h"
#include "include/Exponentation.h"
#include "include/BubbleSort.h"
#include "include/InsertionSort.h"
#include "include/SelectionSort.h"
#include "include/QuickSort.h"
#include "include/HeapSort.h"

 using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int value=133;
	int power=0;
	int arr[]={1,-5,0,2,7,6,-12,8,3,-20,-2,8,9,50};

	int length=sizeof(arr)/sizeof(arr[0]);
	int low=0;
	int high=length-1;
	
	
//	FindIndexOfFirstOccurenceOf findIndexOfFirstOccurenceOf(value,arr,sizeof(arr)/sizeof(arr[0])); 
//	BinarySearch binarySearch(value,arr,sizeof(arr)/sizeof(arr[0]));
//	SumOfDigitsInNumber sumOfDigitsInNumber(value); 
//	Exponentation exponentation(value,power);
	//BubbleSort bubbleSort(arr,length);
	//InsertionSort insertionSort(arr,length);
	
	for(int i=0;i<length;i++){
		cout<<arr[i]<<",";
	}
	
//	QuickSort quickSort(arr,low,high);
	HeapSort heapSort(arr,length);
	cout<<endl;
	
	for(int i=0;i<length;i++){
		cout<<arr[i]<<",";
	}
	
	
	return 0;
}
