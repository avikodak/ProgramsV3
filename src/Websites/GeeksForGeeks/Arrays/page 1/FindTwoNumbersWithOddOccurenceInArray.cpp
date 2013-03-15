/*
 * FindTwoNumbersWithOddOccurenceInArray.cpp
 *
 *  Created on: Feb 22, 2013
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

int FindANumberWithOddOccurence(int userInput[],int sizeOfArray){

}

int FindTwoNumbersWithOddOccurence(int userInput[],int sizeOfArray){
	int XORResult=0;
	for(int crawler=0;crawler < sizeOfArray;crawler++){
		XORResult ^= userInput[crawler];
	}

	bitset<32> bitPatternXOR(XORResult);

	int frontCrawler=-1;
	int backCrawler = sizeOfArray;

	int positionOfRightSetBit = log(XORResult & (XORResult-1));

	for(int crawler=0;crawler < sizeOfArray;crawler++){
		bitset<32> bitPatternOfNumbers(userInput[crawler]);
		if(bitPatternOfNumbers[positionOfRightSetBit]){
			userInput[++frontCrawler] = userInput[crawler];
		}else{
			userInput[--backCrawler] = userInput[crawler];
		}
	}

	XORResult = 0;
	for(int crawler = 0;crawler <=frontCrawler;crawler++){
		XORResult ^= userInput[crawler];
	}
	int twoOddOccurenceResult[2];
	twoOddOccurenceResult[0] = XORResult;

	XORResult = 0;
	for(int crawler = frontCrawler+1;crawler <sizeOfArray;crawler++){
		XORResult ^= userInput[crawler];
	}
	twoOddOccurenceResult[1] = XORResult;

	return twoOddOccurenceResult;
}



int * FindTwoNumbersWithOddOccurenceInArray(int userInput[],int sizeOfArray){
	int innerCrawler;
	int resultingNumbers[2];
	int resultIndex = -1;
	for(int outerCrawler =0;outerCrawler<sizeOfArray-1;outerCrawler++){
		int counter=0;
		for(innerCrawler=0;innerCrawler < sizeOfArray;innerCrawler++){
			if(userInput[outerCrawler] == userInput[innerCrawler]){
				counter++;
			}
		}
		if(counter%2 == 1){
			resultingNumbers[++resultIndex] = userInput[outerCrawler];
			if(resultIndex == 1){
				return resultingNumbers;
			}
		}
	}
	return NULL;
}

//int main(){
//	return -1;
//}

