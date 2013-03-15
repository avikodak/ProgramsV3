/*
 * ReverseArray.cpp
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

void ReverseArray(int userInput[],int sizeOfArray){
	if(sizeOfArray <= 1){
		return;
	}
	int tempSwap;
	for(int startCrawler = 0,endCrawler=sizeOfArray-1;endCrawler>startCrawler;startCrawler++,endCrawler--){
		tempSwap = userInput[startCrawler];
		userInput[startCrawler] = userInput[endCrawler];
		userInput[endCrawler] = tempSwap;
	}
}

void ReverseArrayRecursive(int userInput[],int startCrawler,int endCrawler){
	if(startCrawler < endCrawler){
		return;
	}
	int tempSwap;
	tempSwap = userInput[startCrawler];
	userInput[startCrawler] = userInput[endCrawler];
	userInput[endCrawler] = tempSwap;

	ReverseArrayRecursive(userInput,++startCrawler,--endCrawler);
}

void ReverseArrayRecursiveReference(int userInput[],int sizeOfArray,int crawlerRecursive,int &indexBegin){
	if(crawlerRecursive == sizeOfArray){
		return;
	}
	ReverseArrayRecursiveReference(userInput,sizeOfArray,++crawlerRecursive,indexBegin);
	int tempSwap;
	tempSwap = userInput[crawlerRecursive];
	userInput[crawlerRecursive] = userInput[indexBegin];
	userInput[indexBegin] = tempSwap;
	++indexBegin;
}

void ReverseArrayStackImplementation(int userInput[],int sizeOfArray){
	stack<int> auxillaryStack;
	for(int counter=0;counter < sizeOfArray;counter++){
		auxillaryStack.push(userInput[counter]);
	}
	int topElement,indexCounter=0;
	while(!auxillaryStack.empty()){
		topElement = auxillaryStack.top();
		userInput[indexCounter] = topElement;
		auxillaryStack.pop();
	}
}

//int main(){
//	return -1;
//}

