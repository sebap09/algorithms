#include "include/BinarySearch.h"
#include <iostream>

using namespace std;
int binarySearch(int value, int arr[], int length){
    int first=0;
    int last=length-1;
    int mid=last/2;
    while(arr[mid]!=value){
        if(arr[mid]>value){last=mid-1;mid=(last+first)/2;}
        if(arr[mid]<value){first=mid+1;mid=(last+first)/2;}
        if(last<first) return -1;
    }

    return mid;
}
BinarySearch::BinarySearch(int value, int arr[], int length)
{
    std::cout<<"Binary search: "<<binarySearch(value,arr,length)<<endl;
}
