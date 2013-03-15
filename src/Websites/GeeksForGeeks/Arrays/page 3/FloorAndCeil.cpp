/*
 * FloorAndCeil.cpp
 *
 *  Created on: Feb 14, 2013
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

int *FindFloorAndCeilOfSortedArray(int userInput[],int sizeOfArray,int key){
	int ceilOfKey,floorOfKey;
	int result[2];
	for(int crawler=0;crawler < sizeOfArray;crawler++){
		if(userInput[crawler] == key){
			result[0] = result[1] = userInput[crawler];
			return result;
		}
		if(userInput[crawler] < key){
			if(ceilOfKey - userInput[crawler] > key - userInput[crawler] ){
				ceilOfKey = userInput[crawler];
			}
		}
		if(userInput[crawler] > key){
			if(floorOfKey - userInput[crawler] > key - userInput[crawler] ){
				floorOfKey = userInput[crawler];
			}

		}
	}
	result[0] = floorOfKey;
	result[1] = ceilOfKey;
	return result;
}

int * FindCeilAndFloorBinarySearch(int userInput[],int sizeOfArray,int startIndex,int endIndex,int key){
	int result[2];
	if(startIndex < endIndex){
		if(startIndex > 0 && startIndex < sizeOfArray){
			if(userInput[startIndex] > key){
				result[0] = INT_MIN;
				result[1] = userInput[startIndex];
			}else{
				result[0] = userInput[startIndex];
				result[1] = INT_MAX;
			}
			return result;
		}
		if(endIndex > 0 && endIndex < sizeOfArray){
			if(userInput[endIndex] > key){
				result[0] = INT_MIN;
				result[1] = userInput[startIndex];
			}else{
				result[0] = userInput[startIndex];
				result[1] = INT_MAX;
			}
			return result;
		}
	}

	int middleIndex = (startIndex + endIndex)/2;
	if(userInput[middleIndex] == key){
		result[0] = userInput[middleIndex];
		result[1] = userInput[middleIndex];
		return result;
	}
	if(middleIndex-1 > 0){
		if(key < userInput[middleIndex] && userInput[middleIndex-1] > key){
			result[0] = userInput[middleIndex-1];
			result[1] = userInput[middleIndex];
			return result;
		}
	}

	if(middleIndex+1 < sizeOfArray){
		if(key < userInput[middleIndex+1] && userInput[middleIndex] < key){
			result[0] = userInput[middleIndex];
			result[1] = userInput[middleIndex+1];
			return result;
		}
	}

	if(userInput[middleIndex] > key){
		return FindCeilAndFloorBinarySearch(userInput,sizeOfArray,0,middleIndex-1,key);
	}else{
		return FindCeilAndFloorBinarySearch(userInput,sizeOfArray,middleIndex+1,endIndex,key);
	}

}

int *FloorAndCeilUsingMaxMinHeap(){
	// Use two heaps one to store the min heap and
	// other the max heap
	// get the max and min of the two heaps
}


//int main(){
	//	return -1;
//}

