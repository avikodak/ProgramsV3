/*
 * CountNumberOfTimesAKeyOccurs.cpp
 *
 *  Created on: Mar 11, 2013
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

struct linkedListNode{
	int value;
	linkedListNode *next;
};

int CountNumberOfTimesAKeyOccurs(linkedListNode *ptr,int key){
	linkedListNode *crawler = ptr;
	int keyCounter=0;
	while(ptr != NULL){
		if(ptr->value == key){
			keyCounter++;
		}
	}
	return keyCounter;
}

int CountNumberOfTimesAKeyOccurs(linkedListNode *ptr,int key){
	if(ptr == NULL){
		return 0;
	}
	if(ptr->value  == key){
		return 1+CountNumberOfTimesAKeyOccurs(ptr->next,key);
	}else{
		return CountNumberOfTimesAKeyOccurs(ptr->next,key);
	}
}

int CountNumberOfTimesAKeyOccurs(linkedListNode *ptr,int key){
	// Use Sorting and count the continous nodes which have a key
}

int CountNumberOfTimesAKeyOccurs(linkedListNode *ptr,int key){
	hash_map<int,int> occurenceMap;
	linkedListNode *llCrawler = ptr;
	int occurenceOfKey = 0;
	hash_map<int,int>::iterator iteratorToKey;

	while(ptr != NULL){
		if((iteratorToKey = occurenceMap.find(ptr->value)) == occurenceMap.end()){
			occurenceMap.insert(ptr->value,1);
		}else{
			occurenceMap[iteratorToKey->first] = ++iteratorToKey->second;
		}
	}

	return occurenceMap[key];
}
//int main(){
//	return -1;
//}

