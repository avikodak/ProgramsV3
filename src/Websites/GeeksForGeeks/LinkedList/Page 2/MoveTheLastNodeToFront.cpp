/*
 * MoveTheLastNodeToFront.cpp
 *
 *  Created on: Mar 13, 2013
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

void MoveTheLastNodeToFrontRecursive(linkedListNode *recursivePtr,linkedListNode *&frontPtr){
	if(recursivePtr->next->next == NULL){
		linkedListNode *tailPtr;
		tailPtr = recursivePtr->next;
		tailPtr->next = frontPtr;
		tailPtr = frontPtr->next;
		frontPtr->next = NULL;
		return;
	}
	MoveTheLastNodeToFront(recursivePtr->next,frontPtr);
}

void MoveTheLastNodeToFrontRecursiveDriver(linkedListNode *ptr){
	if(ptr == NULL){
		printf("List is empty\n");
		return;
	}
	if(ptr->next == NULL){
		printf("List Contains only one node\n");
		return;
	}
	MoveTheLastNodeToFrontRecursive(ptr,ptr);
}

void MoveTheLastNodeToFrontIterative(linkedListNode *ptr){
	if(ptr == NULL){
		printf("List is empty\n");
		return;
	}
	if(ptr->next == NULL){
		printf("List Contains only one node\n");
		return;
	}
	linkedListNode *iterativePtr = ptr;
	while(iterativePtr->next->next == NULL){
		iterativePtr = iterativePtr->next;
	}
	linkedListNode *tailPtr,*frontPtr = ptr;
	tailPtr = iterativePtr->next;
	tailPtr->next = frontPtr;
	tailPtr = frontPtr->next;
	frontPtr->next = NULL;
	return;
}





//int main(){
//	return -1;
//}

