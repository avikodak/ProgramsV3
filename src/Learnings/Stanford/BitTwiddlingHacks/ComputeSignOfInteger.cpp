/*
 * ComputeSignOfInteger.cpp
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

int ComputeSignOfIntegerBranching(int userInput){
	return -(v < 0); //returns -1 if negative or 0 if the number is positive
}

int ComputeSignUsingBit(int userInput){
	return (int)-1 * (userInput >> (sizeof(int) * CHAR_BIT - 1));
}

int ComputeSignUsingBit2(int userInput){
	return userInput >> (sizeof(int) * CHAR_BIT -1);
}

int ComputeSignUsingBits3(int userInput){
	return +1 | userInput >> (sizeof(int)*CHAR_BIT-1);
}

int ComputeSignUsingBit4(int userInput){
	return (userInput > 0) - (userInput < 0);
}

//int main(){
//	return -1;
//}

