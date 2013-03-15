/*
 * FindTheElementThatAppearsOnce.cpp
 *
 *  Created on: Jan 22, 2013
 *      Author: AVINASH
 */
//
// Testing Status : Done
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

/*
 * Complexity O(n)
 */
int GetElementThatAppearsOnce(int userInput[],int numberOfElements){
	int XORElements=0;
	for(int counter=0;counter<numberOfElements;counter++){
		XORElements ^= userInput[counter];
	}
	return XORElements;
}

/*
 * Complexity O(n^2)
 */
int GetElementsThatAppearOnceIteration(int userInput[],int numberOfElements){
	for(int outerCounter=0;outerCounter<numberOfElements;outerCounter++){
		int key = userInput[outerCounter];
		bool isFound = false;
		for(int innerCounter=0;innerCounter<numberOfElements;innerCounter++){
			if(innerCounter != outerCounter){
				if(key == userInput[innerCounter]){
					//Duplicate Found So This is not the duplicate element
					isFound=true;
					break;
				}
			}
		}
		if(!isFound){
			return key;
		}
	}
	return -1;
}

/*
 *	Complexity O(n)
 */
int GetElementThatAppearsOnceHashMap(int userInput[],int numberOfElements){
	hash_map<int,int> dictionaryForUserInput;
	for(int counter=0;counter<numberOfElements;counter++){
		if(dictionaryForUserInput.find(userInput[counter]) != dictionaryForUserInput.end()){
			dictionaryForUserInput[userInput[counter]] += 1;
		}else{
			dictionaryForUserInput[userInput[counter]] = 1;
		}
	}
	for(hash_map<int,int>::iterator crawlerHashMap = dictionaryForUserInput.begin();crawlerHashMap!=dictionaryForUserInput.end();crawlerHashMap++){
		if(crawlerHashMap->second  == 1){
			return crawlerHashMap->first;
		}
	}
	return -1;
}

int ModifiedBinarySearch(int userInput[],int start,int end,int key){
	if(start>end){
		return INT_MIN;
	}else{
		int middleElement = (start+end)/2;
		if(userInput[middleElement] == key){
			if(middleElement+1 <= end){
				if(userInput[middleElement+1] == key){
					return 0;
				}
			}
			if(middleElement-1 >= start){
				if(userInput[middleElement-1] == key){
					return 0;
				}
			}
			return 1;
		}

		if(key < userInput[middleElement]){
			return ModifiedBinarySearch(userInput,start,middleElement-1,key);
		}else{
			return ModifiedBinarySearch(userInput,middleElement+1,end,key);
		}
	}
}

/*
 *	Complexity O(n*log(n))
 */
int DriverForBinarySearch(int userInput[],int start,int end,int numberOfElements){
	sort(userInput,userInput+numberOfElements);
	for(int counter=0;counter<numberOfElements;counter++){
		int result = ModifiedBinarySearch(userInput,0,numberOfElements-1,userInput[counter]);
		if(result == 1){
			return userInput[counter];
		}
	}
	return -1;
}

/*
 *	Complexity O(n*log(n))
 */
int DriverForLinearSearch(int userInput[],int numberOfElements){
	sort(userInput,userInput+numberOfElements);
	for(int counter=0;counter<numberOfElements-1;counter+=2){
		if(userInput[counter] != userInput[counter+1]){
			return userInput[counter];
		}
	}
	return -1;
}


int main(){
	int userInput[]= {12, 1, 12, 3, 1, 2, 3};
	cout << GetElementThatAppearsOnce(userInput,7) << endl;
	cout << GetElementsThatAppearOnceIteration(userInput,7) << endl;
	cout << GetElementThatAppearsOnceHashMap(userInput,7) <<endl;
	cout << DriverForBinarySearch(userInput,0,6,7) << endl;
	cout << DriverForLinearSearch(userInput,7) << endl;
	return -1;
}

/*
 *	Complexity O(n*log(n))
 */
int GetElementThatAppearsOnceBST(int userInput[]){

	return -1;
}
