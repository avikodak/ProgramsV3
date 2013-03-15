/*
 * FindMissingElement.cpp
 *
 *  Created on: Feb 6, 2013
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

int FindMissingElementBruteForce(int startNumber,int endNumber,int userInput[],int sizeOfArray){
	int innerCrawler;
	for(int outerCrawler=startNumber;outerCrawler<endNumber;outerCrawler++){
		bool elementFound = false;
		for(innerCrawler=0;innerCrawler<sizeOfArray;innerCrawler++){
			if(innerCrawler == outerCrawler){
				continue;
			}
			if(userInput[innerCrawler] == outerCrawler){
				elementFound = true;
				break;
			}
		}
		if(!elementFound){
			return outerCrawler;
		}
	}
}

int FindMissingElementUsingFormulaes(int startNumber,int endNumber,int userInput[],int sizeOfArray){
	int sumOfElements=0;
	for(int numCrawler = startNumber;numCrawler <= endNumber;numCrawler++){
		sumOfElements += numCrawler;
	}

	int sumOfArrayElements = 0;
	for(int arrayCrawler =0;arrayCrawler < sizeOfArray;arrayCrawler++){
		sumOfArrayElements += userInput[arrayCrawler];
	}

	return (sumOfElements - sumOfArrayElements);

}

int FindMissingElementsUsingXOR(int startNumber,int endNumber,int userInput[],int sizeOfArray){
	int XORResult =0;
	for(int numCrawler=startNumber;numCrawler <= endNumber;numCrawler++){
		XORResult ^= numCrawler;
	}

	for(int arrayCrawler = 0;arrayCrawler < sizeOfArray;arrayCrawler++){
		XORResult ^= userInput[arrayCrawler];
	}

	return XORResult;
}

int FindMissingElementUsingHashTable(int startNumber,int endNumber,int userInput[],int sizeOfArray){
	hash_map<int,int> lookup;

	for(int arrayCrawler=0;arrayCrawler< sizeOfArray;arrayCrawler++){
		//As the elements are unique not checking whether an element exists in the hashtable or not
		lookup[arrayCrawler] =1;
	}

	for(int numCrawler=startNumber;numCrawler<=endNumber;numCrawler){
		if(lookup.find(numCrawler) == lookup.end()){
			return numCrawler;
		}
	}
}

int FindMissingNumberUsingAP(int startNumber,int endNumber,int userInput[],int sizeOfArray){
	int numberOfTerms = (endNumber-startNumber+1);
	int summationAP = (numberOfTerms/2)(startNumber+endNumber);

	int sumOfArray=0;
	for(int crawler=0;crawler < sizeOfArray;crawler++){
		sumOfArray+=userInput[crawler];
	}

	return summationAP - sumOfArray;
}

int FindMissingNumberBinarySearchUsingIndex(int startNumber,int endNumber,int userInput[],int sizeOfArray){

}


//int BinarySearchFindMissingElement(int userInput,int startIndex,int endIndex){
//
//}
//
//int FindMissingElemetnsUsingBinarySearch(int startNumber,int endNumber,int userInput[],int sizeOfArray){
//	sort(userInput,userInput+sizeOfArray);
//	for(int numCrawler = startNumber; numCrawler < endNumber;numCrawler++){
//		if(false = BinarySearchFindMissingElement(userInput,0,sizeOfArray)){
//			return numCrawler;
//		}
//	}
//}
//int main(){
//	return -1;
//}

