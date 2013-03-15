/*
 * FindDuplicatesInRange02N_1.cpp
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

//
//	What if zero is present in the array
//
int FindDuplicatesInRange(int userInput[],int sizeOfArray){
	int setKey;
	for(int arrayCrawler =0;arrayCrawler < sizeOfArray; arrayCrawler++){
		setKey = userInput[arrayCrawler];
		if(setKey < 0){
			setKey *= -1;
		}
		if(userInput[setKey] < 0){
			//Duplicate found
			return userInput[arrayCrawler];
		}else{
			//at first occurence we multiply with negative -1
			userInput[setKey] *= -1;
		}
	}
}

int FindDuplicatesInRangeON2(int userInput[],int sizeOfArray){
	int innerCrawler,countKey;
	for(int outerCrawler=0;outerCrawler<sizeOfArray;outerCrawler++){
		countKey =0;
		for(innerCrawler =0;innerCrawler<sizeOfArray;innerCrawler++){
			if(userInput[outerCrawler] == userInput[innerCrawler]){
				countKey++;
			}
		}
		if(countKey == 2){
			return userInput[outerCrawler];
		}
	}
}

int FindDuplicatesInRangeONWithAuxSpace(int userInput[],int sizeOfArray){
	hash_map<int,int> auxToHandleDuplicates;
	for(int crawler = 0;crawler < sizeOfArray;crawler){
		if(auxToHandleDuplicates.find(userInput[crawler]) != auxToHandleDuplicates.end()){
			return userInput[crawler];
		}
		auxToHandleDuplicates.insert(userInput[crawler]);
	}
}

int FindDuplicatesInRangeONWithBitArray(int userInput[],int sizeOfArray){

}

int BinarySearchForFindingDuplicatesRange(int userInput[],int sizeOfArray,int start,int end,int key){
	if(start > end){
		return 0;
	}
	int middleElement = (start+end)/2;
	if(userInput[middleElement] == key){
		// Key found
		int numberOfOccurences =1;
		if(middleElement-1 >= 0){
			if(userInput[middleElement-1] == key){
				numberOfOccurences++;
			}
		}
		if(middleElement+1 < sizeOfArray){
			if(userInput[middleElement+1] == key){
				numberOfOccurences++;
			}
		}
		// Assuming that the array contains the duplicate elements which means
		// that there cant be elements greater than count 2
		return numberOfOccurences;
	}
	if(userInput[middleElement] > key){
		BinarySearchForFindingDuplicatesRange(userInput,sizeOfArray,start,middleElement-1,key);
	}else{
		BinarySearchForFindingDuplicatesRange(userInput,sizeOfArray,middleElement+1,end,key);
	}
}

int FindDuplicatesInRangeONLOGN(int userInput[],int sizeOfArray){
	sort(userInput,userInput+sizeOfArray);
	int occurences;
	for(int crawler=0;crawler < sizeOfArray;crawler++){
		occurences = BinarySearchForFindingDuplicatesRange(userInput,sizeOfArray,0,sizeOfArray-1,userInput[crawler]);
		if(occurences == 2){
			return userInput[crawler];
		}
	}
}

int FindDuplicatesInRangeUsingEquation(int userInput[],int sizeOfArray){
	int sumOfElementsTillN_1=0;
	for(int crawler=0;crawler < sizeOfArray;crawler++){
		sumOfElementsTillN_1 += crawler;
	}
	int arraySum=0;
	for(int crawler=0;crawler < sizeOfArray;crawler++){
		arraySum += userInput[crawler];
	}

	int diff = sumOfElementsTillN_1 - arraySum;
	if(diff< 0){
		diff *= -1;
	}
	return diff;
}

//int main(){
//	return -1;
//}

