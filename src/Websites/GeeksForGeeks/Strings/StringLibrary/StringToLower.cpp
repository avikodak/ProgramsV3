/*
 * StringToLower.cpp
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

char * StringToLower(char *userInput){
	char *userInputBegin = userInput;
	while(*userInput != '\0'){
		if(*userInput >= 'A' && *userInput <='Z'){
			*userInput = *userInput - 'A' + 'a';
		}
		userInput++;
	}
	return userInputBegin;
}





