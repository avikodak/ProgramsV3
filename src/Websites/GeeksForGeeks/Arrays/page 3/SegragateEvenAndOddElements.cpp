/*
 * SegragateEvenAndOddElements.cpp
 *
 *  Created on: Feb 13, 2013
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

void SegregateEvenAndOdd(int userInput[],int sizeOfArray){
	int startCrawler=0,endCrawler=sizeOfArray-1,temp;
	while(1){
		while(userInput[startCrawler]%2 == 1 && startCrawler < endCrawler){
			startCrawler++;
		}
		while(userInput[endCrawler]%2 == 0 && endCrawler > startCrawler){
			endCrawler--;
		}
		if(startCrawler > endCrawler){
			break;
		}
		temp = userInput[startCrawler];
		userInput[startCrawler] = userInput[endCrawler];
		userInput[endCrawler] = temp;
	}
}

int *SegregateEvenAndOdd(int userInput[],int sizeofArray){
	queue<int> oddQueue,evenQueue;
	int crawlerArray;
	for(crawlerArray =0;crawlerArray < sizeofArray;crawlerArray++){
		if(userInput[crawlerArray]%2 == 0){
			evenQueue.push(userInput[crawlerArray]);
		}else{
			oddQueue.push(userInput[crawlerArray]);
		}
	}

	crawlerArray =-1;
	int popElement;
	while(!oddQueue.empty()){
		popElement = oddQueue.front();
		oddQueue.pop();
		userInput[++crawlerArray] = popElement;
	}
	while(!evenQueue.empty()){
		popElement = evenQueue.front();
		evenQueue.pop();
		userInput[++crawlerArray] = popElement;
	}

	return userInput;
}

void SegregateOddAndEvenNodesDequeue(int userInput[],int sizeOfArray){
	deque<int> doubleEndedQueue;
	for(int crawler =0;crawler < sizeOfArray;crawler++){
		if(userInput[crawler] %2 == 1){
			doubleEndedQueue.push_front(userInput[crawler]);
		}else{
			doubleEndedQueue.push_back(userInput[crawler]);
		}
	}
}

void SegregateOddAndEvenNodes(int userInput[],int sizeOfArray){
	// use string append the indexes and then read separated by delimiter
}


//int main(){
//	return -1;
//}

