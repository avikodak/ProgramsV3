/*
 * FindTheIntersectionNodeInLinkedList.cpp
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

struct linkedListNodeForIntersection{
	int value;
	linkedListNode *next;
	bool isVisited;
};

/*
 * WARNING:
 * =======
 *
 * NOT CONSIDERING THE CASE WHEN EITHER OF THE LINKED LISTS IS CIRCULAR
 *
 */

linkedListNode * FindIntersectionNodeAuxSpace(linkedListNode *firstPtr,linkedListNode *secondPtr){
	hash_map<linkedListNode *,int> visitedNodeAddresses;
	hash_map<linkedListNode *,int>::iterator iteratorToNode;
	linkedListNode *firstListCrawler = firstPtr,*secondListCrawler = secondPtr;
	linkedListNode *commonNode = NULL;
	int order=-1;
	while(firstListCrawler != NULL){
		visitednodeAddresses[firstListCrawler] = ++order;
		firstListCrawler = firstListCrawler->next;
	}

	int minimumNode = INT_MAX;

	while(secondListCrawler != NULL){
		if((iteratorToNode=visitedNodeAddresses.find(secondListCrawler)) != visitedNodeAddresses.end()){
			if(minimumNode > iteratorToNode->second){
				commonNode = secondListCrawler;
			}
		}
	}

	return commonNode;
}

linkedListNode *FindIntersectionNode(linkedListNode *firstPtr,linkedListNode *secondPtr,int lengthOfFirstLinkedList,int lengthOfSecondLinkedList){
	// Assuming that the given linked lists are intersecting
		// To check whether two lists are intersecting or not go through the code CheckWhetherTwoLinkedListsAreIntersectingOrNot.cpp

		bool isFirstListLong;
		int differenceBetweenLengthsOfLinkedList = lengthOfFirstLinkedList - lengthOfSecondLinkedList;
		linkedListNode *firstPtrCrawler = firstPtr,*secondPtrCrawler = secondPtr;

		if(differenceBetweenLengthsOfLinkedList < 0){
			isFirstListLong = false;
		}else{
			isFirstListLong = true;
		}

		differenceBetweenLengthsOfLinkedList = abs(differenceBetweenLengthsOfLinkedList);
		if(isFirstListLong){
			while(differenceBetweenLengthsOfLinkedList--){
				firstPtr = firstPtr->next;
			}
		}else{
			while(differenceBetweenLengthsOfLinkedList--){
				secondPtr = secondPtr->next;
			}
		}

		while(firstPtr == secondPtr){
			firstPtr = firstPtr->next;
			secondPtr = secondPtr->next;
		}

		return firstPtr;

}

linkedListNode *FindTheIntersectionNodeInLinkedListON2(linkedListNode *first,linkedListNode *second){

}

linkedListNode *FindTheIntersectionNodeInLinkedListEnhancedStruct(linkedListNode *first,linkedListNode *second){

}
//int main(){
//	return -1;
//}

