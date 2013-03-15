/*
 * FindMaximumElementInIncreasingDecreasingArray.cpp
 *
 *  Created on: Feb 20, 2013
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

int FindMaximumInBitonicSequence(int userInput[],int sizeOfArray){
	int maxElement = INT_MIN;
	for(int crawler=0;crawler < sizeOfArray;crawler){
		if(maxElement < userInput[crawler]){
			maxElement = userInput[crawler];
		}
	}
	return maxElement;
}


//
// INCOMPLETE
//
int FindMaximumBitonicSequenceBinarySearch(int userInput[],int sizeOfArray,int startIndex,int endIndex){
	if(startIndex > endIndex){
		return INT_MAX;
	}

	int middleIndex = (startIndex+endIndex)/2;
	if(middleIndex -1 >=0 && middleIndex+1 < sizeOfArray){
		if(userInput[middleIndex] > userInput[middleIndex-1] && userInput[middleIndex] > userInput[middleIndex+1]){
			return userInput[middleIndex];
		}else{

		}
	}




}

int FindMaximumInBitonicSequenceBinarySearchDriver(int userInput[],int sizeOfArray){

}

//int main(){
//	return -1;
//}

