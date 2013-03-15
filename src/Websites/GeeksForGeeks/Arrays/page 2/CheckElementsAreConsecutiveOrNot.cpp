/*
 * CheckElementsAreConsecutiveOrNot.cpp
 *
 *  Created on: Feb 20, 2013
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

bool CheckElementsAreConsecutiveOrNot(int userInput[],int sizeOfArray){
	int minElement = min_element(userInput,userInput+sizeOfArray);
	int maxElement = max_element(userInput,userInput+sizeOfArray);

	int sumArray =0;
	for(int crawler=0;crawler < sizeOfArray;crawler++){
		sumArray += userInput[crawler];
	}

	int sumConsecutive;
	sumConsecutive = (sizeOfArray/2)(minElement + minElement + sizeOfArray -1); // If they are consecutive then they will be in ap with common difference 1

	if(sumConsecutive == sumArray){
		return true;
	}else{
		return false;
	}

}




//int main(){
//	return -1;
//}

