/*
 * SwapsBitsInNumber.cpp
 *
 *  Created on: Jan 22, 2013
 *      Author: AVINASH
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

using namespace std;
using namespace __gnu_cxx;

#define null NULL

int *SwapBitsAtPositions(int number1,int number2,int startPositionOfNumber1,int startPositionOfNumber2,int numberOfBits){
	int bitsFromFirstNumber = (number1 >> startPositionOfNumber1) & (1 << numberOfBits)-1;
	int bitsFromSecondNumber = (number2 >> startPositionOfNumber2) & (1 << numberOfBits)-1;
	int XORResult = bitsFromFirstNumber ^ bitsFromSecondNumber;
	number1 = number1 ^(XORResult << startPositionOfNumber1);
	number2 = number2 ^(XORResult << startPositionOfNumber2);
	int result[2];
	result[0] = number1;
	result[1] = number2;
	return result;
}

//int main(){
//	return -1;
//}




