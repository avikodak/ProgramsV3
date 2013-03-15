/*
 * ReplaceEveryElementWithGreatestRightSide.cpp
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

void ReplaceEveryElementWithGreatestOnRightSide(int userInput[],int sizeOfArray){
	int innerCrawler;
	for(int outerCrawler=0;outerCrawler < sizeOfArray;outerCrawler++){
		for(innerCrawler = outerCrawler;innerCrawler < sizeOfArray;innerCrawler++){
			if(userInput[outerCrawler] < userInput[innerCrawler]){
				userInput[outerCrawler] = userInput[innerCrawler];
			}
		}
	}
}

void ReplaceEveryElementWithGreatestOnRightSideON(int userInput[],int sizeOfArray){
	int backCrawler=sizeOfArray-2;
	int maxElementOnRightSide = userInput[sizeOfArray-1];
	int temp;
	for(;backCrawler >= 0;backCrawler--){
		temp = userInput[backCrawler];
		userInput[backCrawler] = maxElementOnRightSide;
		if(temp > maxElementOnRightSide){
			maxElementOnRightSide = temp;
		}
	}
}

void ReplaceEveryElementWithGreatestRecursion(int userInput[],int sizeOfArray,int currentIndex,int &rightSideGreatest){
	if(currentIndex > sizeOfArray-1){
		return;
	}
	ReplaceEveryElementWithGreatestRecursion(userInput,sizeOfArray,currentIndex+1,rightSideGreatest);
	int temp;
	temp = userInput[currentIndex];
	userInput[currentIndex] = rightSideGreatest;
	if(temp >  rightSideGreatest){
		rightSideGreatest = temp;
	}
}

void ReplaceeveryElementWithGreatestStack(int userInput[],int sizeOfArray){

}
//int main(){
//	return -1;
//}

