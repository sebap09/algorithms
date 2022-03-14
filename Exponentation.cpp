#include "include/Exponentation.h"
#include <iostream>
using namespace std;


float powerOf(float base, float power){
	float result=1;
	if(power>0){
		while(power!=0){
		result=result*base;
		power--;
	}	return result;}
	

	//<=0
	while(power!=0){
		result=result*base;
		power++;
	}
	return 1/result;
	
	}


Exponentation::Exponentation(int base, int power){
	cout<<base<<" to the power of "<<power<<" is: "<<powerOf(base,power)<<endl;
}
