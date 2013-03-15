/*
 * AddTwoNumbers.cpp
 *
 *  Created on: Jan 22, 2013
 *      Author: AVINASH
 */
//
// Testing Status - Done
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

using namespace std;
using namespace __gnu_cxx;

#define null NULL

int AdditionOfTwoNumbers(int number1,int number2){
	while(number2){
		int carry;
		carry = number1 & number2;
		number1 = number1 ^ number2;
		number2 = carry << 1;
	}
	return number1;
}

//int main(){
//	return -1;
//}




