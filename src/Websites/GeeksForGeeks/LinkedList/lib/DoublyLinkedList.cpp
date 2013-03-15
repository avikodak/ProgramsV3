/*
 * DoublyLinkedList.cpp
 *
 * Created on: Mar 12, 2013
 * Author: Avinash
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

struct doubleLinkedList{
	int value;
	doubleLinkedList *next;
	doubleLinkedList *prev;
};

doubleLinkedList *head;

void CreateDoublyLinkedList(){

}

void PrintDoublyLinkedList(doubleLinkedList *ptr){
	doubleLinkedList *crawler = ptr;
	printf("NULL<->");
	while(crawler){
		printf("%d<->",crawler->value);
		crawler = crawler->next;
	}
	printf("<->NULL");
}

void PrintDoublyLinkedListRecursive(doubleLinkedList *ptr){
	if(ptr == NULL){
		return;
	}
	printf("%d<->",ptr->value);
	PrintDoublyLinkedListRecursive(ptr->next);
}

void PrintDoublyLinkedListReverseRecursive(doubleLinkedList *ptr){
	if(ptr == NULL){
		return;
	}
	PrintDoublyLinkedListReverseRecursive(ptr->next);
	printf("%d<->",ptr->value);
}

void PrintDoublyLinkedListReverseIterative(doubleLinkedList *tail_ptr){
	doubleLinkedList *crawlerBack = tail_ptr;
	while(crawlerBack != NULL){
		printf("%d<->",crawlerBack->value);
		tail_ptr = tail_ptr->prev;
	}
}

void InsertANodeInDoublyLinkedList(){

}

void DeleteANodeInDoublyLinkedList(){

}

int LengthOfDoublyLinkedList(doubleLinkedList *ptr){
	doubleLinkedList *crawler = ptr;
	int lengthOfDoublyLinkedList =0;
	while(crawler != NULL){
		lengthOfDoublyLinkedList += 1;
		crawler = crawler->next;
	}
	return lengthOfDoublyLinkedList;
}

int LengthOfDoublyLinkedListRecursive(doubleLinkedList *ptr){
	if(ptr == NULL){
		return 0;
	}
	return 1+LengthOfDoublyLinkedListRecursive(ptr->next);
}

int LengthOfDoublyLinkedListIterativeBack(doubleLinkedList *ptr){
	doubleLinkedList *tail = GetTheTailPointerOfDoublyLinkedList(ptr);
	doubleLinkedList *backCrawler = tail;
	int lengthOfDoublyLinkedList = 0;
	while(backCrawler != NULL){
		lengthOfDoublyLinkedList++;
		backCrawler = backCrawler->prev;
	}
	return lengthOfDoublyLinkedList;
}

int LengthOfDoublyLinkedListRecursiveBack(doubleLinkedList *backPtr){
	if(backPtr == NULL){
		return 0;
	}
	return 1+LengthOfDoublyLinkedListRecursiveBack(backPtr->prev);
}

int LengthOfDoublyLinkedListRecursiveBackDriver(doubleLinkedList *ptr){
	doubleLinkedList *backPtr = GetTheTailPointerOfDoublyLinkedList(ptr);
	return LengthOfDoublyLinkedListRecursiveBack(backPtr);
}

doubleLinkedList *GetTheTailPointerOfDoublyLinkedList(doubleLinkedList *ptr){
	doubleLinkedList *crawler = ptr;
	while(crawler->next != NULL){
		crawler = crawler->next;
	}
	return crawler;
}


void ReverseDoublyLinkedList(doubleLinkedList *frontPtr,doubleLinkedList *tailPtr){
	if(frontPtr == tailPtr){
		return;
	}
	int tempForSwap;
	tempForSwap = frontPtr->value;
	frontPtr->value = tailPtr->value;
	tailPtr->value = tempForSwap;
	ReverseDoublyLinkedList(frontPtr->next,tailPtr->prev);
}

void ReverseDoublyLinkedListDriver(doubleLinkedList *frontPtr){
	doubleLinkedList *tailPtr = GetTheTailPointerOfDoublyLinkedList(frontPtr);
	ReverseDoublyLinkedList(frontPtr,tailPtr);
}

void ReverseDoublyLinkedListRecursive(doubleLinkedList *recursiveCrawler,doubleLinkedList *&frontCrawler,int count,int &middle){
	if(recursiveCrawler == NULL){
		middle = count/2;
		return;
	}
	ReverseDoublyLinkedList(recursiveCrawler->next,frontCrawler,count+1,middle);
	if(count > middle){
		int tempForSwap;
		tempForSwap = recursiveCrawler->value;
		recursiveCrawler->value = frontCrawler->value;
		frontCrawler->value = tempForSwap;
		frontCrawler = frontCrawler->next;
	}
}

void ReverseDoublyLinkedListItertivePointerSwapping(doubleLinkedList *fPtr){
	doubleLinkedList *tPtr = GetTheTailPointerOfDoublyLinkedList(fPtr);
	doubleLinkedList *frontPtr = fPtr,*tailPtr = tPtr;
	while(frontPtr != tailPtr){
		frontPtr->prev->next = tailPtr;
		frontPtr->next->prev = tailPtr;
		tailPtr->prev->next = frontPtr;
		tailPtr->next->prev = frontPtr;
		linkedListNode *tempTailPrev = tailPtr->prev;
		linkedListNode *tempTailNext = tailPtr->next;
		tailPtr->prev = frontPtr->prev;
		tailPtr->next = frontPtr->next;
		frontPtr->prev = tempTailPrev;
		frontPtr->next = tempTailNext;
	}
}

void SwapTwoNodesInDoublyLinkedList(doubleLinkedList *firstNode,doubleLinkedList *secondNode){
	firstNode->prev->next = secondNode;
	firstNode->next->prev = secondNode;
	secondNode->prev->next = firstNode;
	secondNode->next->prev = firstNode;
	linkedListNode *tempTailPrev = secondNode->prev;
	linkedListNode *tempTailNext = secondNode->next;
	secondNode->prev = firstNode->prev;
	secondNode->next = firstNode->next;
	firstNode->prev = tempTailPrev;
	firstNode->next = tempTailNext;
}

int GetThePredecessor(doubleLinkedList *ptr,int key){
	int predecessor = INT_MIN;
	doubleLinkedList *frontCrawler = ptr;
	while(frontCrawler != NULL){
		if(frontCrawler->value < key && frontCrawler->value > predecessor){
			predecessor = frontCrawler->value;
		}
	}
	return predecessor;
}

int GetTheSuccessor(doubleLinkedList *ptr,int key){
	int successor = INT_MAX;
	doubleLinkedList *frontCrawler = ptr;
	while(frontCrawler != NULL){
		if(frontCrawler->value > key && frontCrawler->value < successor){
			successor = frontCrawler->value;
		}
	}
	 return successor;
}
//int main(){
//	return -1;
//}

