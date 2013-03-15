/*
 * TripletThatSumToGivenValue.cpp
 *
 *  Created on: Feb 22, 2013
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

int *TripletThatSumToGivenValueON3(int userInput[],int sizeOfArray,int targetSum){
	int middleCrawler,innerCrawler;
	int triplet[3];
	for(int outerCrawler=0;outerCrawler < sizeOfArray-2;outerCrawler++){
		for(middleCrawler = outerCrawler+1 ;middleCrawler < sizeOfArray-1;middleCrawler++){
			for(innerCrawler = middleCrawler+1;innerCrawler < sizeOfArray;innerCrawler++){
				if((userInput[outerCrawler] + userInput[middleCrawler] + userInput[innerCrawler]) == key){
					triplet[0] = outerCrawler;
					triplet[1] = middleCrawler;
					triplet[2] = innerCrawler;
					return triplet;
				}
			}
		}
	}
}

int *TripletThatSumEqualToGivenValueON2(int userInput[],int sizeOfArray,int targetSum){
	sort(userInput,userInput+sizeOfArray);
	int frontCrawler,backCrawler;
	int resultingElements[3];
	for(int outerCrawler=0;outerCrawler < sizeOfArray;outerCrawler++){
		frontCrawler = outerCrawler+1;
		backCrawler = sizeOfArray-1;
		while(frontCrawler < backCrawler){
			int sumOfElements = userInput[outerCrawler] + userInput[frontCrawler] + userInput[backCrawler];
			if(sumOfElements == targetSum){
				resultingElements[0] = userInput[outerCrawler];
				resultingElements[1] = userInput[frontCrawler];
				resultingElements[2] = userInput[backCrawler];
				return resultingElements;
			}else{
				if(sumOfElements > targetSum){
					backCrawler--;
				}else{
					frontCrawler++;
				}
			}
		}
	}
	return null;
}



//int main(){
//	return -1;
//}

