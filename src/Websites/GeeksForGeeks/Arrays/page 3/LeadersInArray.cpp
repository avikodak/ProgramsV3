/*
 * LeadersInArray.cpp
 *
 *  Created on: Feb 18, 2013
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

void PrintLeadersInArrayUsingFrontScan(int userInput[],int sizeOfArray){
	int innerCrawler;
	bool isLeader;
	printf("Leaders in array \n");
	for(int outerCrawler=0;outerCrawler < sizeOfArray;outerCrawler++){
		isLeader = true;
		for(innerCrawler = outerCrawler+1;innerCrawler < sizeOfArray;innerCrawler++){
			if(userInput[outerCrawler] < userInput[innerCrawler]){
				isLeader = false;
				break;
			}
		}
		if(!isLeader){
			printf("%d \t",userInput[outerCrawler]);
		}
	}
}

void PrintLeadersInArrayUsingBackScan(int userInput[],int sizeOfArray){
	int maxValue = INT_MIN;
	printf("Leaders in array\n");
	for(int crawler = sizeOfArray - 1;crawler >= 0;crawler--){
		if(userInput[crawler] > maxValue){
			printf("%d",userInput[crawler]);
			maxValue = userInput[crawler];
		}
	}
}

void PrintLeadersInArrayUsingRecursion(int userInput[],int sizeOfArray,int currentIndex,int &maxValue = INT_MIN){
	if(currentIndex > sizeOfArray){
		return;
	}

	PrintLeadersInArrayUsingRecursion(userInput,sizeOfArray,currentIndex+1,maxValue);

	if(userInput[currentIndex] > maxValue){
		printf("%d",userInput[currentIndex]);
		maxValue = userInput[currentIndex];
	}
}

void PrintLeadersRecursionDriver(int userInput[],int sizeOfArray){
	PrintLeadersInArrayUsingRecursion(userInput,sizeOfArray,0,INT_MIN);
}
//int main(){
//	return -1;
//}

