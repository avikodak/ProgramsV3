/*
 * DeleteNodesWhichHaveGreaterValueRightSide.cpp
 *
 *  Created on: Mar 18, 2013
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

void DeleteNodesWhichHaveGreaterValueRightSideON2(linkedListNode *ptr){
	linkedListNode *outerCrawler=ptr;
	linkedListNode *innerCrawler,*nodeToBeDeleted;
	bool toBeDeleted = false;
	while(outerCrawler != NULL){
		innerCrawler = outerCrawler->next;
		toBeDeleted = false;
		while(innerCrawler != NULL){
			if(outerCrawler->value < innerCrawler->value){
				toBeDeleted = true;
				break;
			}
			innerCrawler = innerCrawler->next;
		}
		if(toBeDeleted){
			// Not checking whether next node is null or not because toBeDeleted will
			// not be set
			outerCrawler->value = outerCrawler->next->value;
			nodeToBeDeleted = outerCrawler->next;
			outerCrawler->next = outerCrawler->next->next;
			free(nodeToBeDeleted);
		}
		outerCrawler = outerCrawler->next;

	}
}

void DeleteNodesWhichHaveGreaterValueOnRightSideStack(linkedListNode *ptr){
	stack<linkedListNode *> linkedListNodesPtrs;
	linkedListNode *ptrCrawler = ptr;
	linkedListNode *currentNode;
	while(ptrCrawler != NULL){
		linkedListNodesPtrs.push(ptrCrawler);
		ptrCrawler = ptrCrawler->next;
	}

	int maxElement = INT_MIN;
	linkedListNode *nodeToBeDeleted;
	while(!linkedListNodesPtrs.empty()){
		if(maxElement > linkedListNodesPtrs.top()->value){
			// Should be deleted;
			currentNode = linkedListNodesPtrs.top();
			nodeToBeDeleted = currentNode->next;
			currentNode->value = nodeToBeDeleted->value;
			currentNode->next = nodeToBeDeleted->next;
			free(nodeToBeDeleted);
		}else{
			maxElement = linkedListNodesPtrs.top()->value;
		}
		linkedListNodesPtrs.pop();
	}
}

void DeleteNodesWhichHaveGreaterValueOnRightSideReverse(linkedListNode *ptr){
	// Reverse Linked List
	ReverseLinkedList(ptr,ptr,0);
	// End of Reverse
	int maxElementTillHere = INT_MIN;
	linkedListNode *ptrCrawler = ptr;
	linkedListNode *nodeToBeDeleted;

	while(ptrCrawler != NULL){
		if(maxElementTillHere > ptr->value){
			if(ptr->next == NULL){
				break;
			}
			ptr->value = ptr->next->value;
			nodeToBeDeleted = ptr->next;
			ptr->next = ptr->next->next;
			free(nodeToBeDeleted);
		}else{
			maxElementTillHere = ptr->value;
		}
	}

	ReverseLinkedList(ptr,ptr,0);
}

//int main(){
//	return -1;
//}

