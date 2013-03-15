/*
 * FindANumberOddTimes.cpp
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

//Tested
int FindOddOccurence(int userInput[],int sizeOfArray){
	int crawler;
	int XORResult=0;
	for(crawler=0;crawler<sizeOfArray;crawler++){
		XORResult ^= userInput[crawler];
	}
	return XORResult;
}

//Tested
int FindOddOccurenceTwoLoops(int userInput[],int sizeOfArray){
	int innerCrawler;
	for(int outerCrawler=0;outerCrawler < sizeOfArray;outerCrawler++){
		int count=1;
		for(innerCrawler =0;innerCrawler<sizeOfArray;innerCrawler++){
			if(innerCrawler==outerCrawler){
				continue;
			}
			if(userInput[innerCrawler] == userInput[outerCrawler]){
				count++;
			}
		}
		if(count%2 == 1){
			return userInput[outerCrawler];
		}
	}
}

//Tested
int FindOddOccurenceSort(int userInput[],int sizeOfArray){
	sort(userInput,userInput+sizeOfArray);
	for(int crawler=0;crawler<sizeOfArray;crawler+=2){
		if(crawler+1 < sizeOfArray){
			if(userInput[crawler] != userInput[crawler+1]){
				return userInput[crawler];
			}
		}else{
			return userInput[crawler];
		}
	}
}

//Tested
int BinarySearchModifiedForOddOccurence(int userInput[],int start,int end,int key){
	if(start > end){
		return 0;
	}
	int middle = (start+end)/2;

	if(userInput[middle] == key){
		int count=1;
		if(middle-1 >=start){
			if(userInput[middle-1] == key){
				count += BinarySearchModifiedForOddOccurence(userInput,start,middle-1,key);
			}
		}
		if(middle+1 <= end){
			if(userInput[middle+1] == key){
				count += BinarySearchModifiedForOddOccurence(userInput,middle+1,end,key);
			}
		}
		return count;
	}else{
		if(userInput[middle] > key){
			return BinarySearchModifiedForOddOccurence(userInput,start,middle-1,key);
		}else{
			return BinarySearchModifiedForOddOccurence(userInput,middle+1,end,key);
		}
	}
}

//Tested
void FindOddOccurenceBinarySearch(int userInput[],int sizeOfArray){
	sort(userInput,userInput+sizeOfArray);
	set<int> uniqueInteger;
	int occurencesOfKey;
	for(int crawler=0;crawler < sizeOfArray; crawler++){
		if(uniqueInteger.find(userInput[crawler]) == uniqueInteger.end()){
			occurencesOfKey = BinarySearchModifiedForOddOccurence(userInput,0,sizeOfArray,userInput[crawler]);
			if(occurencesOfKey%2 == 1){
				cout << userInput[crawler] << endl;
			}
			uniqueInteger.insert(userInput[crawler]);
		}
	}
}

int main(){
	int ar[] = {2, 3, 5, 4, 5, 2, 4, 3, 5, 2, 4, 4, 2};
	// 2,2,2,2,3,3,4,4,4,4,5,5,5
	int n = sizeof(ar)/sizeof(ar[0]);
	//printf("%d", FindOddOccurenceBinarySearch(ar, n));
	FindOddOccurenceBinarySearch(ar,n);
	return 0;
}

