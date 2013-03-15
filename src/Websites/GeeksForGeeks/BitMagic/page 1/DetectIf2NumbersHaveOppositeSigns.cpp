/*
 * DetectIf2NumbersHaveOppositeSigns.cpp
 *
 *  Created on: Feb 27, 2013
 *      Author: Avinash
 */
//
// Testing Status
//
#include <string>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <ctime>
#include <list>
#include <map>
#include <set>
#include <bitset>
#include <functional>
#include <utility>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>
#include <hash_map>
#include <stack>
#include <queue>
#include <limits.h>

using namespace std;
using namespace __gnu_cxx;

#define null NULL

bool CheckIfTwoNumbersHaveOppositeSigns(int number1,int number2){
	if((number1 < 0 && number2 > 0 )||(number1 > 0 && number2 < 0)){
		return true;
	}
	return false;
}

bool CheckIfTwoNumbersHaveOppositeSigns(int number1,int number2){
	return !((number1 >> 31)&&(number2 >> 31));
}

bool CheckIfTwoNumbersHaveOppositeSignsRecursion(int number1,int number2,int count){
	if(count == 31){
		bitset<32> bitRepFirstNumber(number1);
		bitset<32> bitRepSecondNumber(number2);
		return (bitRepFirstNumber[31] || bitRepSecondNumber[31]);
	}
	return CheckIfTwoNumbersHaveOppositeSignsRecursion(number1,number2,count+1);
}

bool CheckIfTwoNumbersHaveOppositeSigns2(int number1,int number2){
	return ((number1 ^number2) < 0);
}

//int main(){
//	return -1;
//}

