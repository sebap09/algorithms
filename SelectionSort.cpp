#include "include/SelectionSort.h"
#include <iostream>

using namespace std;

void selectionSort(int arr[], int length){
	int min=arr[0];
	int lastIndex=0;
	int counter=0;
	
	for(int counter=0;counter<length-1;counter++){
		min=arr[counter];
		for(int i=counter;i<length-1;i++){
			if(arr[i]<min) {min=arr[i];lastIndex=i;}
		}
		int temp=arr[counter]; arr[counter]=min;arr[lastIndex]=temp;
}
	
}
SelectionSort::SelectionSort(int arr[], int length)
{
	selectionSort(arr,length);
}
