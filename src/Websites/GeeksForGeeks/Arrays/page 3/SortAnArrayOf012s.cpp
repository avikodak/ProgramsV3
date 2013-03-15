/*
 * SortAnArrayOf012s.cpp
 *
 *  Created on: Feb 13, 2013
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

using namespace std;
using namespace __gnu_cxx;

#define null NULL

int *SortArray(int userInput[],int sizeOfArray){
	int counter[3];
	for(int crawler=0;crawler < sizeOfArray;crawler++){
		counter[userInput[crawler]]++;
	}

	for(int outerCounter=0;outerCounter < 3;outerCounter++){
		int numberOfElements = counter[outerCounter];
		for(int innerCounter=0;innerCounter < sizeOfArray && numberOfElements;innerCounter++,numberOfElements--){
			userInput[innerCounter] = outerCounter;
		}
	}

}




//int main(){
//	return -1;
//}

