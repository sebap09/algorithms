#include "include/InsertionSort.h"
#include <iostream>

using namespace std;

void insertionSort(int arr[], int length){
	int leftEl=arr[0];
	for(int j=1;j<length;j++){
		leftEl=arr[j-1];
		if(arr[j]<leftEl){
		for(int i=j;i>0;i--){
			leftEl=arr[i-1];		
			if(leftEl>arr[i]){arr[i-1]=arr[i];arr[i]=leftEl;}
			
		}
	}
	}	
}

InsertionSort::InsertionSort(int arr[], int length)
{
	insertionSort(arr,length);
}
