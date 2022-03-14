#include "include/FindIndexOfFirstOccurenceOf.h"
#include <iostream>

 int findFirstOccurence(int value, int *p,int length){
    for(int i=0;i<length;i++){
        if(p[i]==value) {return i;}
    }
    return -1;

}

int findFirstOccurenceWithSentinel(int value, int *p, int length){
    int last=p[length-1];
    int i=0;
    while(p[i]!=value)
        i++;
    p[length-1]=last;
    if(i<length-1||p[length-1]==value)
        return i;

    return -1;


}


FindIndexOfFirstOccurenceOf::FindIndexOfFirstOccurenceOf(int value, int *p, int length)
{
    std::cout<<"Linear search: "<<findFirstOccurence(value, p,length)<<std::endl;
    std::cout<<"Sentinel linear search: "<<findFirstOccurenceWithSentinel(value, p,length)<<std::endl;
}

