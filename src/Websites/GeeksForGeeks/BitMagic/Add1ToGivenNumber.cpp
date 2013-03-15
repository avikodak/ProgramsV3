/*
 * Add1ToGivenNumber.cpp
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

int AdditionOfOneToResult(int userInput){
	return ~(-userInput);
}

int AdditionUsingBits(int userInput){
	//Find the first zero bit and make it one and rest of them as zero bits
	int negationOfUserInput = ~userInput;
	int firstSetBit = log2(negationOfUserInput&-negationOfUserInput)+1;
	userInput = userInput &(1<< firstSetBit);
	return userInput;
}

int AdditionUsingBitsIteration(int userInput){
	int crawler=1;
	while(userInput&crawler){
		userInput ^= crawler;
		crawler<<=1;
	}
	userInput ^= crawler;
	return userInput;
}

//int main(){
//	return -1;
//}
