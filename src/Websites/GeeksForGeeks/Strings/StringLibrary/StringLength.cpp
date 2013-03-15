/*
 * StringLength.cpp
 *
 *  Created on: Jan 21, 2013
 *      Author: AVINASH
 */
//
// Testing Status : Done
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

int StringLength(char *ptr){
	if(*ptr == '\0'){
		return 0;
	}
	return 1+StringLength(++ptr);
}

int StringLengthIteration(char *ptr){
	int length=0;
	while(*ptr != '\0'){
		length++;ptr++;
	}
	return length;
}
