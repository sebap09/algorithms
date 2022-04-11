#include "include/HeapSort.h"

void heapsort(int arr[],int size){
	
	for(int i=1;i<size;i++){
		int parent=(i-1)/2;//0,1->0|2,3->1|4,5->2
		int j=i;
		while(arr[j]>arr[parent]){
			int temp=arr[parent];
			arr[parent]=arr[j];
			arr[j]=temp;
			j=parent;
			parent=(parent-1)/2;
		}
		
	}
	
	for(int k=size-1;k>=0;k--){
		int temp=arr[0];//swap root with leaf
		 arr[0]=arr[k];
		 arr[k]=temp;
		
		for(int i=1;i<k;i++){
			int parent=(i-1)/2;//0,1->0|2,3->1|4,5->2
			int j=i;
			while(arr[j]>arr[parent]){
				int temp=arr[parent];
				arr[parent]=arr[j];
				arr[j]=temp;
				j=parent;
				parent=(parent-1)/2;
			}
		
		}
		
		
		
		
	}
	
	
}


HeapSort::HeapSort(int arr[], int size)
{
	heapsort(arr,size);
}
