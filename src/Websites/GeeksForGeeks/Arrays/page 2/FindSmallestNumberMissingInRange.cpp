/*
 * FindSmallestNumberMissingInRange.cpp
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

int FindSmallestMissingNumber(int userInput[],int sizeOfArray){
	int maxElement = max_element(userInput,userInput+sizeOfArray);
	int minElement = min_element(userInput,userInput+sizeOfArray);
	bool isElementPresent;
	for(int crawler = minElement+1;crawler < maxElement;crawler){
		isElementPresent = false;
		for(int arrayCrawler=0;arrayCrawler < sizeOfArray;arrayCrawler++){
			if(userInput[arrayCrawler] == crawler){
				isElementPresent = true;
				break;
			}
		}
		if(!isElementPresent){
			return crawler;
		}
	}
}

int BinarySearchCustomized(int userInput[],int sizeOfArray,int startIndex,int endIndex,int minValue){

}

int FindSmallestBinarySearchDriver(int userInput[],int sizeOfArray){
	sort(userInput,userInput+sizeOfArray);
	BinarySearchCustomized(userInput,sizeOfArray,0,sizeOfArray-1,userInput[0]);
}

//int main(){
//	return -1;
//}

