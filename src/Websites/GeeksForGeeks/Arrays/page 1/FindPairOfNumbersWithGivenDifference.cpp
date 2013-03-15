/*
 * FindPairOfNumbersWithGivenDifference.cpp
 *
 *  Created on: Feb 28, 2013
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

int *FindPairOfNumbersWithGivenDifference(int userInput[],int sizeOfArray, int difference){
	int pairOfNumber[2];
	int innerCrawler;
	for(int outerCrawler =0;outerCrawler < sizeOfArray;outerCrawler++){
		for(innerCrawler=0;innerCrawler<sizeOfArray;innerCrawler++){
			if(outerCrawler == innerCrawler){
				continue;
			}
			if(abs(userInput[innerCrawler]-userInput[outerCrawler]) == abs(difference)){
				pairOfNumber[0] = userInput[innerCrawler];
				pairOfNumber[1] = userInput[outerCrawler];
			}
		}
	}
	return pairOfNumber;
}

int *FindPairOfNumbersWithGivenDifference(int userInput[],int sizeOfArray,int difference){
	int resultingPair[2];
	hash_map<int,int> visitedNumbers;
	hash_map<int,int>::iterator ptrToKey;
	for(int crawler=0;crawler < sizeOfArray;crawler++){
		if((ptrToKey = visitedNumbers.find(abs(difference - userInput[crawler]))!=visitedNumbers.end())){
			resultingPair[0] = userInput[crawler];
			resultingPair[1] = *ptrToKey;
			return resultingPair;
		}
		visitedNumbers[userInput[crawler]] = 1;
	}
	return NULL;
}

int *FindPairOfNumbersWithGivenDifferneceOLOGN(int userInput[],int sizeOfArray,int difference){
	int resultingPair[2];
	sort(userInput,userInput+sizeOfArray);
	int frontCrawler=-1,backCrawler=sizeOfArray;
	int calculatedDifference;
	while(frontCrawler < backCrawler){
		calculatedDifference = abs(userInput[frontCrawler] - userInput[backCrawler]);
		if(calculatedDifference == difference){
			resultingPair[0] = userInput[frontCrawler];
			resultingPair[1] = userInput[backCrawler];
			return resultingPair;
		}
		if(calculatedDifference < difference){
			backCrawler++;
		}else{
			frontCrawler++;
		}
	}
	return NULL;
}

int BinarySearchCustomizedForFindingGivenDifference(int userInput[],int sizeOfArray,int startIndex,int endIndex,int key){
	if(startIndex < endIndex){
		return -1;
	}
	//To be implemented

}

int *FindPairOfNumbersWithGivenDifferneceOLOGN2(int userInput[],int sizeOfArray,int difference){
	sort(userInput,userInput+sizeOfArray);
	int indexOfKeyElement;
	int resultingPair[2];
	for(int crawler =0;crawler < sizeOfArray;crawler++){
		indexOfKeyElement = BinarySearchCustomizedForFindingGivenDifference(userInput,sizeOfArray,0,sizeOfArray-1,userInput[crawler]);
		if(indexOfKeyElement != -1){
			resultingPair[0] = userInput[crawler];
			resultingPair[1] = userInput[indexOfKeyElement];
			return resultingPair;
		}
	}
}


//int main(){
//	return -1;
//}

