/*
 * MultiplyBy3_5.cpp
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

int MultiplyBy3_5(int userInput){
	return (userInput << 1)+ userInput + (userInput >> 1);
}

int MultiplyBy3_5Method2(int userInput){
	return ((userInput<<3) - userInput) >> 1;
}

//int main(){
//	return -1;
//}




