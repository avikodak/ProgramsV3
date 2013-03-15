/*
 * SelectionSort.cpp
 *
 *  Created on: Mar 1, 2013
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

void SelectionSort(int userInput[],int sizeOfArray){
	int maxCrawler = INT_MIN;
	int innerCrawler,tempForSwap;

	for(int outerCrawler=0;outerCrawler < sizeOfArray;outerCrawler++){
		for(innerCrawler = outerCrawler;innerCrawler < sizeOfArray;innerCrawler++){
			if(maxCrawler < userInput[innerCrawler]){
				maxCrawler = innerCrawler;
			}
		}
		tempForSwap = userInput[outerCrawler];
		userInput[outerCrawler] = userInput[maxCrawler];
		userInput[maxCrawler] = userInput[outerCrawler];
	}
}



//int main(){
//	return -1;
//}

