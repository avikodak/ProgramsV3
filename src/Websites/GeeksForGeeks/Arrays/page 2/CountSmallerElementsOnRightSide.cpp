/*
 * CountSmallerElementsOnRightSide.cpp
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

int CountSmallerElementsInRightSide(int userInput[],int sizeOfArray){
	int innerCrawler;
	hash_map<int,int> keyValuePair;
	for(int outerCrawler=0;outerCrawler < sizeOfArray;outerCrawler++){
		int countElementsInRightSide =0;
		for(innerCrawler = outerCrawler+1;innerCrawler < sizeOfArray;innerCrawler++ ){
			if(userInput[outerCrawler] > userInput[innerCrawler]){
				countElementsInRightSide++;
			}
		}
		keyValuePair[outerCrawler] == countElementsInRightSide;
	}
}

//Construct A binary search tree using the elements of the array
//And Then do a pre order traversal


//int main(){
//	return -1;
//}

