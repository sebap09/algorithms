#include "include/SumOfDigitsInNumber.h"
#include <iostream>

using namespace std;

int sumOfDigits(int number){
    int sum=0;

    while(number!=0){
        sum+=number%10;
        number/=10;
    }
    return sum;
}

SumOfDigitsInNumber::SumOfDigitsInNumber(int number)
{
    std::cout<<"Sum of digits in a number is: "<<sumOfDigits(number)<<endl;
}
