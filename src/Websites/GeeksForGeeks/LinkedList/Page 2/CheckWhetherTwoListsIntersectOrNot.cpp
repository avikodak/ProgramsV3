/*
 * CheckWhetherTwoListsIntersectOrNot.cpp
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


/*
 * WARNING :
 * ==========
 *
 * CONSIDER THE CASE WHEN THE LINKED LIST IS CIRCULAR
 *
 */
bool CheckWhetherTwoListsIntersectOrNot(linkedListNode *ptrFirst,linkedListNode *ptrSecond){
	//If the linked lists intersect then both must be leading to the same end node

	while(ptrFirst != NULL && ptrSecond != NULL){
		ptrFirst  = ptrFirst->next;
		ptrSecond = ptrSecond->next;
	}

	if(ptrFirst == ptrSecond){
		return true;
	}else{
		return false;
	}
}

bool CheckWhetherTwoListsIntersectAuxHashMap(linkedListNode *ptrFirst,linkedListNode *ptrSecond){
	hash_map<linkedListNode *,int> visitedNodes;
	hash_map<linkedListNode *,int>::iterator iteratorToKeyNode;

	linkedListNode *ptrFirstCrawler,*ptrSecondCrawler;
	ptrFirstCrawler = ptrFirst;
	ptrSecondCrawler = ptrSecond;

	// Traversing the first list and pushing it to the hash map
	while(ptrFirstCrawler  != NULL){
		visitedNodes[ptrFirstCrawler] = 1;
		ptrFirstCrawler = ptrFirstCrawler->next;
	}

	// Traversing the second list and checking whether it already exists or not
	while(ptrSecondCrawler != NULL){
		if((iteratorToKeyNode = visitedNodes.find(ptrSecondCrawler)) != visitedNodes.end()){
			// we have found the first intersection point
			return true;
		}
	}

	// we have not found the intersection point
	return false;
}



//int main(){
//	return -1;
//}

