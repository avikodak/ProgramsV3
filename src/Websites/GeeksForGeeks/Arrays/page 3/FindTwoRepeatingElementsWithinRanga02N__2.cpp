/*
 * FindTwoRepeatingElementsWithinRanga02N__2.cpp
 *
 *  Created on: Feb 12, 2013
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

int * FindTwoRepeatingElements(int userInput[],int sizeOfArray){
	int innerCrawler,countKey,indexResult=-1;
	int twoRepeatingElements[2];
	for(int outerCrawler =0;outerCrawler < sizeOfArray;outerCrawler++){
		countKey =0;
		for(innerCrawler =0;innerCrawler < sizeOfArray;innerCrawler++){
			if(userInput[outerCrawler] == userInput[innerCrawler]){
				countKey++;
			}
		}
		if(countKey == 2){
			if(indexResult == 0){
				twoRepeatingElements[++indexResult] = userInput[outerCrawler];
				return twoRepeatingElements;
			}
			twoRepeatingElements[++indexResult] = userInput[outerCrawler];
		}
	}
}

int *FindTwoRepeatingElementsUsingArrayIndexing(int userInput[],int sizeOfArray){
	bool zeroVisited = false;
	int twoRepeatingElements[2],indexResult=-1;
	for(int crawler=0;crawler < sizeOfArray;crawler++){
		int setKey = userInput[crawler];
		if(setKey < 0){
			setKey *= -1;
		}
		if(setKey == 0){
			if(zeroVisited){
				twoRepeatingElements[++indexResult] = 0;
				if(indexResult == 1){
					return twoRepeatingElements;
				}
			}
			zeroVisited = !zeroVisited;
		}else{
			if(userInput[setKey] > 0){
				// first occurence
				userInput[setKey] *= -1;
			}else{
				twoRepeatingElements[++indexResult] = setKey;
				if(indexResult == 1){
					return twoRepeatingElements;
				}
			}
		}
	}
}

int SolveQuadraticEquation(int power2Coefficient,int power1Coefficient,int constant){

}

int FindTwoRepeatingElementsEquations(int userInput[],int sizeOfArray){

}

//int main(){
//	return -1;
//}

