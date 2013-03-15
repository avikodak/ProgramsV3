/*
 * FindAbsoluteValueOfInteger.cpp
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

int AbsoluteValue1(int number){
	int mask = (number >> sizeof(int)*CHAR_BIT-1); // If the number is negative we get all ones which is -1

	int result = (number ^ mask) - mask; // number ^ mask = flips all the bits and - mask adds +1 if the mask is -1
}

int AbsoluteValue2(int number){
	int mask = (number >> sizeof(int)*CHAR_BIT-1);


}

//int main(){
//	return -1;
//}

