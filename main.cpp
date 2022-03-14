#include <cstdio>
#include <iostream>
#include "include/BinarySearch.h"
#include "include/FindIndexOfFirstOccurenceOf.h"
#include "include/SumOfDigitsInNumber.h"
#include "include/Exponentation.h"

 using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int value=133;
	int power=0;
	int arr[]={1,2,4,5,7,10,12,17,20};
	
	FindIndexOfFirstOccurenceOf findIndexOfFirstOccurenceOf(value,arr,sizeof(arr)/sizeof(arr[0])); 
	BinarySearch binarySearch(value,arr,sizeof(arr)/sizeof(arr[0]));
	SumOfDigitsInNumber sumOfDigitsInNumber(value); 
	Exponentation exponentation(value,power);
	return 0;
}
