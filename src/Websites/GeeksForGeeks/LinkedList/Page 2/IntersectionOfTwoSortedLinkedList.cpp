/*
 * IntersectionOfTwoSortedLinkedList.cpp
 *
 *  Created on: Mar 14, 2013
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

	linkedListNode(){
		value = INT_MIN;
		next = NULL;
	}

	linkedListNode(int value){
		this->value = value;
		next = NULL;
	}
};

linkedListNode *IntersectionOfTwoSortedLinkedList(linkedListNode *sortedLL1,linkedListNode *sortedLL2){
	linkedListNode *crawler1 = sortedLL1,*crawler2 = sortedLL2;
	linkedListNode *intersectionList = NULL;
	linkedListNode *tailOfNewLinkedList = NULL;
	while(crawler1 != NULL && crawler2 != NULL){
		if(crawler1->value == crawler2->value){
			if(intersectionList == NULL){
				intersectionList = new linkedListNode(crawler1->value);
				tailOfNewLinkedList = intersectionList;
			}else{
				tailOfNewLinkedList->next = new linkedListNode(crawler1->value);
				tailOfNewLinkedList = tailOfNewLinkedList->next;
			}
		}
		if(crawler1->value > crawler2->value){
			crawler2 = crawler2->next;
		}else{
			crawler1 = crawler1->next;
		}
	}
	return intersectionList;
}

/**
 * WARNING :
 * =========
 * DOUBLE POINTER PLEASE CHECK IMPORTANT
 */
void IntersectionOfTwoSortedLinkedListRecursion(linkedListNode *ptrSortedLL1,linkedListNode *ptrSortedLL2,linkedListNode **intersectionResult,linkedListNode *&tailResultList){
	if(ptrSortedLL1 == NULL || ptrSortedLL2 == NULL){
		return;
	}
	if(ptrSortedLL1->value == ptrSortedLL2->value){
		if(intersectionResult == NULL){
			*intersectionResult = new linkedListNode(ptrSortedLL1->value);
			tailResultList = *intersectionResult;
		}else{
			tailResultList->next = new linkedListNode(ptrSortedLL1->value);
			tailResultList = tailResultList->next;
		}
	}

	if(crawler1->value > crawler2->value){
		IntersectionOfTwoSortedLinkedListRecursion(ptrSortedLL1,ptrSortedLL2->next,intersectionResult,tailResultList);
	}else{
		IntersectionOfTwoSortedLinkedListRecursion(ptrSortedLL1->next,ptrSortedLL2,intersectionResult,tailResultList);
	}

}
//int main(){
//	return -1;
//}

