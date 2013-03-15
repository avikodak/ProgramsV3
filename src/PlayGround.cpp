/*
 * PlayGround.cpp
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


int main(){
	int number = -21;
	int mask = number >> (sizeof(int) * CHAR_BIT -1);

	int result = (number + mask);
	result ^= mask;

	printf("%d",result);
	return -1;
}

