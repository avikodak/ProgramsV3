/*
 * CountBits1ToN.cpp
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

int CountSetBits(int userInput){
	int counter=0;
	while((userInput=userInput&(userInput-1))){
		counter++;
	}
	return counter;
}

int CountBitsTillN(int userInput){
	int counterSetBits=0;
	for(int counter=1;counter <= userInput;counter++){
		counterSetBits += CountSetBits(counter);
	}
	return counterSetBits;
}

int GetGreatestElementInTable(int lookupValue){
	return 0;
}

int CountsBitsTillNUsingTable(int userInput){
	return 0;
}

//int main(){
//	return -1;
//}
