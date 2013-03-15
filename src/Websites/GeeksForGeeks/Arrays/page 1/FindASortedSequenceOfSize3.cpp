/*
 * FindASortedSequenceOfSize3.cpp
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

int *FindASortedSequenceSizeThree(int userInput[],int sizeOfArray){
	int arrayOfSmallElements[sizeOfArray];
	int arrayOfLargeElements[sizeOfArray];
	int sortedSequence[3];

	arrayOfSmallElements[0] = 0;
	for(int crawler=1;crawler < sizeOfArray;crawler++){
		if(userInput[crawler-1] < userInput[arrayOfSmallElements[crawler-1]]){
			arrayOfSmallElements[crawler] = crawler-1;
		}else{
			arrayOfSmallElements[crawler] = arrayOfSmallElements[crawler-1];
		}
	}

	arrayOfLargeElements[sizeOfArray-1] = sizeOfArray-1;
	for(int crawler=sizeOfArray-2;crawler >=0;crawler--){
		if(userInput[crawler+1] > userInput[arrayOfLargeElements[crawler+1]]){
			arrayOfLargeElements[crawler] = crawler+1;
		}else{
			arrayOfLargeElements[crawler] = arrayOfLargeElements[crawler+1];
		}
	}

	for(int crawler=0;crawler < sizeOfArray;crawler++){
		if(userInput[crawler] > userInput[arrayOfSmallElements[crawler]] && userInput[crawler] < userInput[arrayOfLargeElements[crawler]]){
			sortedSequence[0] = userInput[arrayOfSmallElements[crawler]];
			sortedSequence[1] = userInput[crawler];
			sortedSequence[2] = userInput[arrayOfLargeElements[crawler]];
			return sortedSequence;
		}
	}

	return null;
}

int *FindASortedSequecenSizeThreeON3(int userInput[],int sizeOfArray){
	int middleCrawler,innerCrawler;
	int sortedSequence[3];
	for(int outerCrawler =0;outerCrawler < sizeOfArray-2;outerCrawler++){
		for(middleCrawler = 0;middleCrawler < sizeOfArray-1;middleCrawler++){
				if(middleCrawler == outerCrawler){
					continue;
				}
				for(innerCrawler = 0;innerCrawler < sizeOfArray;innerCrawler++){
					if(innerCrawler == outerCrawler || innerCrawler == middleCrawler){
						continue;
					}
					if(userInput[middleCrawler]>userInput[outerCrawler] && userInput[innerCrawler] > userInput[middleCrawler]){
						sortedSequence[0] = userInput[outerCrawler];
						sortedSequence[1] = userInput[middleCrawler];
						sortedSequence[2] = userInput[innerCrawler];
						return sortedSequence;
					}
				}
		}
	}
}


//int main(){
//	return -1;
//}

