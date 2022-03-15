#include "include/BubbleSort.h"
#include <iostream>
using namespace std;

void bubbleSort(int arr[],int length){
	int wsk1=length-2;//przedostatni el
	int wsk2=length-1;//ostatni el
	int numberOfSwaps=-1;//liczba zamian w jednej iteracji tablicy
	while(numberOfSwaps!=0){
		numberOfSwaps=0;
		
		for(int i=length-1;i>0;i--){//iteracja przez tabilce od konca 
			wsk2=i;
			wsk1=i-1;
			if(arr[wsk1]>arr[wsk2]) {int temp=arr[wsk1]; arr[wsk1]=arr[wsk2]; arr[wsk2]=temp; numberOfSwaps++;}//zamiana miejsc oraz inkrementacja
		}
	}
}

BubbleSort::BubbleSort(int arr[], int length)
{
	bubbleSort(arr,length);
}
