/*
 * MaximumDifferenceBetweenElements.cpp
 *
 *  Created on: Feb 16, 2013
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

int MaximumDifferenceBetweenElements(int userInput[],int sizeOfArray){
	int maxDifference = INT_MIN;
	int innerCounter=0;
	for(int outerCounter=0;outerCounter<sizeOfArray;outerCounter++){
		for(innerCounter = outerCounter ; innerCounter < sizeOfArray;innerCounter++){
			if(userInput[outerCounter] < userInput[innerCounter]){
				if(userInput[innerCounter] - userInput[outerCounter]){
					maxDifference = userInput[innerCounter] - userInput[outerCounter];
				}
			}
		}
	}
	return maxDifference;
}

int MaximumDifferenceBetweenElementsON(int userInput[],int sizeOfArray){
	int maxDifference = INT_MIN,leastElement = INT_MAX;
	for(int crawler = 0;crawler < sizeOfArray;crawler++){
		if(userInput[crawler] < leastElement){
			leastElement = userInput[crawler];
		}else{
			maxDifference = maxDifference < userInput[crawler] - leastElement ? userInput[crawler]-leastElement:maxDifference;
		}
	}
	return maxDifference;
}



//int main(){
//	return -1;
//}

