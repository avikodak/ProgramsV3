/*
 * StringToUpper.cpp
 *
 *  Created on: Jan 21, 2013
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

char * StringToUpper(char *userInput){
	char *userInputBegin = userInput;
	while(*userInput != '\0'){
		if(*userInput >= 'a' && *userInput <='z'){
			*userInput = *userInput - 'a' + 'A';
		}
		userInput++;
	}
	return userInputBegin;
}

//int main(){
//	char sample[5]={'a','b','c','d'};
//	char *ptr = sample;
//	cout << StringToUpper(ptr) << endl;
//	return -1;
//}




