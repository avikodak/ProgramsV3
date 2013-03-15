/*
 * FindFixedPointInArray.cpp
 *
 *  Created on: Feb 19, 2013
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

int FindFixedPointInArray(int userInput[],int sizeOfArray){
	int innerCounter;

	for(int outerCounter=0;outerCounter < sizeOfArray;outerCounter++){
		int left_sum=0;
		for(innerCounter =0;innerCounter < outerCounter;innerCounter++){
			left_sum += userInput[innerCounter];
		}
		int right_sum=0;
		for(innerCounter = outerCounter+1;innerCounter <sizeOfArray;innerCounter++){
			right_sum += userInput[innerCounter];
		}
		if(left_sum == right_sum){
			return outerCounter;
		}
	}
}

int FindFixedPointInArrayAuxSpace(int userInput[],int sizeOfArray){
	int leftSum[sizeOfArray];
	int rightSum[sizeOfArray];

	leftSum[0] =0;
	rightSum[sizeOfArray-1] = 0;

	for(int counter =1;counter<sizeOfArray;counter++){
		leftSum[counter] = leftSum[counter-1] + userInput[counter];
	}

	for(int counter = sizeOfArray-2;counter >= 0;counter--){
		rightSum[counter] = rightSum[counter+1] + right[counter+1];
	}

	for(int counter = 0;counter< sizeOfArray;counter++){
		if(leftSum[counter] == rightSum[counter]){
			return counter;
		}
	}
}

int FindFixedPointUsingAuxOneArray(int userInput[],int sizeOfArray){
	int leftSum[sizeOfArray];
	leftSum[0] = 0;
	for(int crawler=1;crawler < sizeOfArray;crawler++){
		leftSum[crawler] = leftSum[crawler-1] + userInput[crawler-1];
	}
	int rightSum =0;
	if(rightSum  == leftSum[sizeOfArray-1]){
		return sizeOfArray-1;
	}
	for(int crawler = sizeOfArray-2;crawler >=0;crawler--){
		rightSum += userInput[crawler+1];
		if(leftSum[crawler] == right){
			return crawler;
		}
	}
	return INT_MIN;
}

void FindFixedPointUsingRecursion(int userInput[],int sizeOfArray,int currentIndex,int sumLeft,int &sumRight=0,int &fixedIndex){
	if(currentIndex > sizeOfArray){
		return;
	}
	FindFixedPointUsingRecursion(userInput,sizeOfArray,currentIndex+1,sumLeft+userInput[currentIndex],sumRight);
	if(sumLeft == sumRight){
		fixedIndex = currentIndex;
	}
	sumRight += userInput[currentIndex];
}

void FindFixedPointRecursionDriver(int userInput[],int sizeOfArray){
	FindFixedPointUsingRecursion(userInput,sizeOfArray,0,0,0,-1);
}


//int main(){
//	return -1;
//}

