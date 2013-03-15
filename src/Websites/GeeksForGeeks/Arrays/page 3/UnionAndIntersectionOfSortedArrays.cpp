/*
 * UnionAndIntersectionOfSortedArrays.cpp
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

void UnionAndIntersectionOfSortedArrays(int userInput1[],int sizeOfArray1,int userInput2[],int sizeOfArray2,set<int> &unionOfArray,set<int> &intersectionOfArray){
	set<int> firstArrayInputs;
	set<int> secondArrayInputs;
	std::vector<int> unionOfArray(max(sizeOfArray1,sizeOfArray2));
	std::vector<int> intersectionOfArray(min(sizeOfArray1,sizeOfArray2));


	for(int crawler = 0; crawler < sizeOfArray1;crawler++){
		firstArrayInputs.insert(userInput1[crawler]);
	}

	for(int crawler=0;crawler < sizeOfArray2;crawler++){
		secondArrayInputs.insert(userInput2[crawler]);
	}

	set_union(firstArrayInputs.begin(),firstArrayInputs.end(),secondArrayInputs.begin(),secondArrayInputs.end(),unionOfArray);
	set_intersection(firstArrayInputs.begin(),firstArrayInputs.end(),secondArrayInputs.begin(),secondArrayInputs.end(),intersectionOfArray);


}

vector<int> * UnionAndIntersectionOfSortedArraysAuxMemory(int userInput1[],int sizeOfArray1,int userInput2[],int sizeOfArray2){
	hash_map<int,int> keyCounter;
	vector<int> unionIntersectionOfArrays[2];
	for(int crawler = 0 ; crawler < sizeOfArray1;crawler++){
		if(keyCounter.find(userInput1[crawler]) == keyCounter.end()){
			keyCounter[crawler] = 1;
		}else{
			//key exists
			keyCounter[crawler]++;
		}
	}

	for(int crawler=0;crawler < sizeOfArray2;crawler++){
		if(keyCounter.find(userInput2[crawler]) == keyCounter.end()){
			keyCounter[crawler] = 1;
		}else{
			keyCounter[crawler]++;
		}
	}

	for(hash_map<int,int>::iterator crawlerHashMap = keyCounter.begin();crawlerHashMap != keyCounter.end();crawlerHashMap++){
		if(crawlerHashMap->second > 1){
			unionIntersectionOfArrays[1].push_back(crawlerHashMap->first);
		}
		unionIntersectionOfArrays[0].push_back(crawlerHashMap->first);
	}

	return unionIntersectionOfArrays;
}

int *FindUnionIntersectionInON(int userInput1[],int sizeOfArray1,int userInput2[],int sizeOfArray2){
	int crawler1,crawler2;
	vector<int> unionIntersectionOfArrays[2];
	while(crawler1 < sizeOfArray1 && crawler2 < sizeOfArray2){
		if(userInput1[crawler1] == userInput2[crawler2]){
			unionIntersectionOfArrays[0].push_back(userInput1[crawler1]);
			unionIntersectionOfArrays[1].push_back(userInput1[crawler1]);
		}else{
			if(userInput1[crawler1] < userInput2[crawler2]){
				unionIntersectionOfArrays[0].push_back(userInput1[crawler1]);
				crawler1++;
			}else{
				unionIntersectionOfArrays[0].push_back(userInput2[crawler2]);
				crawler2++;
			}
		}
	}
	while(crawler1 <sizeOfArray1){
		unionIntersectionOfArrays[0].push_back(userInput1[crawler1]);
	}
	while(crawler2 < sizeOfArray2){
		unionIntersectionOfArrays[0].push_back(userInput2[crawler2]);
	}

	return unionIntersectionOfArrays;
}



//int main(){
//	return -1;
//}

