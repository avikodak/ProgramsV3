/*
 * AddTwoNumbersWithoutArithematicOperation.cpp
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

int AdditionOfTwoNumbers(int number1,int number2){
	int sumOfTwoNumber;
	int carry;

	while(number2){
		carry = number1 & number2;
		number1 = number1 ^ number2;
		number2 = carry << 1;
	};

	return number1;
}

int AdditionOfTwoNumberUsingRecursion(int number1,int number2){
	if(number2 == 0){
		return number1;
	}
	return AdditionOfTwoNumber(number1^number2,(number1 & number2) << 1);
}

//int main(){
//	return -1;
//}

