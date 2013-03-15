/*
 * BinaryRepresentationOfNumber.cpp
 *
 *  Created on: Feb 20, 2013
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

int BitRepresentationOfNumber(int decimalRepresentation){
	stack<int> bitRepresentation;
	while(decimalRepresentation){
		bitRepresentation.push(decimalRepresentation%2);
		decimalRepresentation /= 2;
	}
}



//int main(){
//	return -1;
//}

