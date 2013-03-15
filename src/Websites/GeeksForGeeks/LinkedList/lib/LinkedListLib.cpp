/*
 * LinkedListLib.cpp
 *
 *  Created on: Feb 1, 2013
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
public:
	int value;
	linkedListNode *next;

	linkedListNode(){
		value=0;
		next = null;
	}

	linkedListNode(int value){
		this->value = value;
		next = null;
	}

};

linkedListNode *head;
linkedListNode *tail;

void CreateLinkedListUsingGlobalHead(int value){
	if(head == null){
		head = new linkedListNode(value);
		tail = head;
	}else{
		linkedListNode temp;
		temp = new linkedListNode(value);
		tail->next = temp;
		tail = temp;
	}
}

void CreateLinkedListUsingDoublePointer(linkedListNode **ptr,int value){

}

void ReverseLinkedList(linkedListNode *ptr,linkedListNode **headOfReverseLinkedList,int count=0){
	if(ptr == null){
		return;
	}
	ReverseLinkedList(ptr->next,count+1);
	if(ptr->next == null){
		headOfReverseLinkedList = ptr;
	}else{
		if(count == 0){
			//first node
			ptr->next = null;
		}else{
			ptr->next->next = ptrs;
		}
	}
}

void ReverseLinkedListAuxStack(linkedListNode *ptr){
	stack<int> auxStorage;
	linkedListNode *crawlerLinkedList = ptr;
	while(crawlerLinkedList->next == NULL){
		auxStorage.push(crawlerLinkedList->value);
	}

	crawlerLinkedList = ptr;
	while(!auxStorage.empty()){
		crawlerLinkedList->value = auxStorage.top();
		auxStorage.pop();
		crawlerLinkedList = crawlerLinkedList->next;
	}
}

void ReverseLinkedListUsingReference(linkedListNode *ptrCrawler,linkedListNode *&beginPtr,int count,int middleOfLinkedList){
	if(ptrCrawler->next == NULL){
		middleOfLinkedList = count/2;
		beginPtr->value = ptrCrawler->value;
		beginPtr = beginPtr->next;
		return null;
	}
	ReverseLinkedListUsingReference(ptrCrawler->next,beginPtr,count+1,middleOfLinkedList);
	if(middleOfLinkedList >= count){
		return;
	}
	beginPtr->value = ptrCrawler->value;
	beginPtr = beginPtr->next;
}

void ReverseLinkedListFrontCrawling(linkedListNode *ptr){

	linkedListNode *crawlerLinkedList = ptr;
	linkedListNode *tempNextNextPtr;
	linkedListNode *nextPtrToBeGlued;

}

void ReverseLinkedListByCreatingNewList(linkedListNode *ptr){

}

void DeleteLinkedList(){

}

void DeleteANodeInLinkedList(){

}

void DisplayLinkedList(){
	linkedListNode *crawler;
	crawler = head;
	if(crawler == null){
		printf("List is empty\n");
		return;
	}
	while(crawler != null){
		printf("%d->",crawler->value);
	}
	printf("null");
	return;
}

void PrintLinkedListInReverse(linkedListNode *ptr){
	if(ptr == NULL){
		return;
	}
	PrintLinkedListInReverse(ptr->next);
	printf("%d->",ptr->value);
}

void PrintLinkedListInReverseDriver(linkedListNode *ptr){
	PrintLinkedListInReverse(ptr);
	printf("NULL");
}

int GetThePredecessor(linkedListNode *ptr,int value){
	int predecessorVal = INT_MIN;
	while(ptr != NULL){
		if(ptr->value < value && ptr->value > predecessorVal){
			predecessorVal = ptr->value;
		}
	}
	return predecessorVal;
}

int GetTheSuccessor(linkedListNode *ptr,int value){
	int successorVal = INT_MAX;
	while(ptr != NULL){
		if(ptr->value > value && ptr->value < successorVal){
			successorVal = ptr->value;
		}
	}
	return successorVal;
}

bool InsertIntoALinkedList(int position){

}

void DeleteANodeGivenByPointer(linkedListNode *ptr){

}

int LengthOfLinkedListRecursive(node *ptr){
	if(ptr == null){
		return 0;
	}
	return 1+LengthOfLinkedList(ptr->next);
}

int LengthOfLinkedList(linkedListNode *ptr){
	int countOfNodes =0;
	while(ptr != null){
		countOfNodes++;
	}
	return countOfNodes;
}

linkedListNode *middleOfLinkedList(linkedListNode *ptr,int count,int &middleIndex = -1){
	if(ptr == NULL){
		middleIndex = count/2;
		return NULL;
	}
	linkedListNode *ptrToReturn;

	ptrToReturn = middleOfLinkedList(ptr->next,count+1,middleIndex);

	if(middleIndex  == count){
		ptrToReturn = ptr;
		return ptrToReturn;
	}
	return ptrToReturn;
}

linkedListNode *middleOfLinkedListPtrCrawlers(linkedListNode *ptr){
	linkedListNode *fastPtr,*slowPtr;
	fastPtr = ptr;
	slowPtr = ptr;
	while(fastPtr != NULL && fastPtr->next != NULL && slowPtr != NULL){
		fastPtr = fastPtr->next->next;
		slowPtr = slowPtr->next;
	}

	return slowPtr;
}

linkedListNode *middleOfLinkedListFindingLength(node *ptr){
	int lengthOfLinkedList = 0;
	linkedListNode *listCrawler = ptr;
	while(listCrawler != null){
		lengthOfLinkedList++;
		listCrawler = listCrawler->next;
	}

	listCrawler = ptr;
	int counter=0;
	while(counter != lengthOfLinkedList/2){
		listCrawler = listCrawler->next;
		counter++;
	}

	return listCrawler;

}

linkedListNode *middleOfLinkedListHashMap(linkedListNode *ptr){
	hash_map<int,linkedListNode *> ptrIndexMap;
	int indexCounter=-1;
	while(ptr != null){
		ptrIndexMap[++indexCounter] = ptr;
		ptr = ptr->next;
	}

	return ptrIndexMap[indexCounter/2];
}


//int main(){
//	return -1;
//}

