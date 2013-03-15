/*
 * BubbleSort.cpp
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

void BubbleSort(int userInput[],int sizeOfArray){
	int innerCrawler=0,temp;
	for(int outerCrawler =0;outerCrawler < sizeOfArray;outerCrawler++){
		for(innerCrawler=0;innerCrawler < sizeOfArray-1;innerCrawler++){
			if(userInput[outerCrawler][innerCrawler+1] < userInput[outerCrawler][innerCrawler]){
				temp = userInput[outerCrawler][innerCrawler];
				userInput[outerCrawler][innerCrawler] = userInput[outerCrawler][innerCrawler+1];
				userInput[outerCrawler][innerCrawler+1] = temp;
			}
		}
	}
}

//int main(){
//	return -1;
//}

