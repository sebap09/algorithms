#include "include/QuickSort.h"
#include <iostream>

using namespace std;


int partition(int arr[],int low, int high){
	int pivot=arr[high];
	int i=low-1;

		for(int j=low;j<=high-1;j++){
			if(arr[j]<pivot){
				i++;
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
		
		int temp=arr[high];
				arr[high]=arr[i+1];
				arr[i+1]=temp;
				
				return i+1;	
}

void quickSort(int arr[],int low, int high){
	
	if(low<high){
	
		int pivot=partition(arr,low,high);
		
		quickSort(arr,low,pivot-1);
		quickSort(arr,pivot+1,high);
	}
}

QuickSort::QuickSort(int arr[],int low, int high)
{
	quickSort(arr, low,  high);
}
