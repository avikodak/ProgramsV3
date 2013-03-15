/*
 * NextGreaterElement.cpp
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

int NextGreaterElementInAnArray(int userInput[],int sizeOfArray){
	int innerCrawler=0;
	hash_map<int,int> nextGreaterElementMap;
	for(int outerCrawler =0;outerCrawler < sizeOfArray;outerCrawler++){
		for(innerCrawler = outerCrawler+1;innerCrawler < sizeOfArray;innerCrawler){
			if(userInput[outerCrawler] < userInput[innerCrawler]){
				nextGreaterElementMap[userInput[outerCrawler]] = userInput[innerCrawler];
				break;
			}
		}
	}
}

int NextGreaterElementInAnArrayBackScan(int userInput[],int sizeOfArray){
	int maxElementRight = INT_MIN;
	hash_map<int,int> nextGreaterElementMap;
	for(int backCrawler = sizeOfArray -1;backCrawler >=0;backCrawler--){
		nextGreaterElementMap[userInput[backCrawler]] = maxElementRight;
		if(maxElementRight < userInput[backCrawler]){
			maxElementRight = userInput[backCrawler];
		}
	}
}

void NextGreaterElementInAnArrayRecursion(int userInput[],int sizeOfArray,int currentIndex,int &maxElementInRight){
	if(currentIndex > sizeOfArray){
		return;
	}
	NextGreaterElementInAnArrayRecursion(userInput,sizeOfArray,currentIndex+1,maxElementInRight);
	printf("Element : %d,Greater Element on right %d",userInput[currentIndex],maxElementInRight);
	if(maxElementInRight < userInput[currentIndex]){
		maxElementInRight = currentIndex;
	}
}

void NextGreaterElementInArrayRecursionDriver(int userInput[],int sizeOfArray){
	NextGreaterElementInAnArrayRecursion(userInput,sizeOfArray,0,INT_MIN);
}

void NextGreaterElementInAnArrayRecursionWithoutReferences(int userInput[],int sizeOfArray,int currentIndex){

}

void NextGreaterElementUsingStack(int userInput[],int sizeOfArray){
	stack<int> auxStackToFindNextGreater;
	auxStackToFindNextGreater.push(userInput[0]);
	hash_map<int,int> nextGreaterElement;
	int buffer;
	for(int crawler = 1;crawler < sizeOfArray;crawler++){
		if(auxStackToFindNextGreater.top() < userInput[crawler]){
			while(!auxStackToFindNextGreater.empty()){
				buffer = auxStackToFindNextGreater.top();
				nextGreaterElement[buffer] = userInput[crawler];
				auxStackToFindNextGreater.pop();
			}
		}
		auxStackToFindNextGreater.push(userInput[crawler]);
	}

}


//int main(){
//	return -1;
//}

