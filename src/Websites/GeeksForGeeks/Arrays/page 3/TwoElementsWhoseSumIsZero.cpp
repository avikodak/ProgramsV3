/*
 * TwoElementsWhoseSumIsZero.cpp
 *
 *  Created on: Feb 18, 2013
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

int *TwoElementsWhoseSumIsClosestZero(int userInput[],int sizeOfArray){
	int innerCounter = 0;
	int resultElements[2];
	int minSum = INT_MAX,tempSum;
	for(int outerCounter=0;outerCounter<sizeOfArray;outerCounter++){
		for(innerCounter = outerCounter;innerCounter<sizeOfArray;innerCounter++){
			tempSum = userInput[outerCounter] + userInput[innerCounter];
			if(minSum > tempSum){
				minSum  = tempSum;
				resultElements[0] = userInput[outerCounter];
				resultElements[1] = userInput[innerCounter];
			}
		}
	}
}
int *TwoElementsWhoseSumIsClosestZeroAuxSpace(int userInput[],int sizeOfArray){
	sort(userInput,userInput+sizeOfArray);
	int frontCrawler=0,endCrawler=sizeOfArray-1;
	int minSum,result[2];
	for(;frontCrawler < endCrawler;){
	}
}


//int main(){
//	return -1;
//}

