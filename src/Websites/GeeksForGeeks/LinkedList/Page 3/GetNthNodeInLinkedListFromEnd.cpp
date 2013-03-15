/*
 * GetNthNodeInLinkedList.cpp
 *
 *  Created on: Feb 12, 2013
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

using namespace std;
using namespace __gnu_cxx;

#define null NULL

struct node{
	int value;
	struct node *next;
};

node *BFMGetNthNodeLinkedList(node *ptr,int n){
	while(ptr->next != null&&n){
		ptr = ptr->next;
		n--;
	}
	if(!n && ptr->next == null){
		return ptr;
	}
	return null;
}

node *BFMGetNthNodeLinkedListDriver(node *headOfLinkedList,int n){
	node *returnNodeValue = null;
	node *crawlerLinkedList = headOfLinkedList;

	while(crawlerLinkedList){
		returnNodeValue = BFMGetNthNodeLinkedList(crawlerLinkedList,n);
		if(returnNodeValue!=null){
			return returnNodeValue;
		}
		crawlerLinkedList = crawlerLinkedList->next;
	}

	return returnNodeValue;
}

node *GetNthNodeInLinkedList(node *head,int n){
	node *windowStartCrawler;
	node *windowEndCrawler;
	bool didReachEnd= false;

	while(n){
		windowEndCrawler = windowEndCrawler->next;
		n--;
		if(n == 0){
			didReachEnd = true;
		}
	}

	if(!didReachEnd){
		// Linked list has less number of nodes than the specified in n
		return null;
	}

	while(windowEndCrawler->next != null){
		windowEndCrawler = windowEndCrawler->next;
		windowStartCrawler = windowStartCrawler->next;
	}

	return windowStartCrawler;
}

void GetNthNodeRecurstion(node *ptr,int &n,node *&ptrToNNode){
	if(ptr){
		return;
	}
	GetNthNodeRecurstion(ptr->next,n,ptrToNNode);
	n--;
	if(n == 0){
		ptrToNNode = ptr;
	}
}

node *GetNthNodeAuxArray(node *ptr,int n){
	hash_map<int, node *> addressMap;
	int nodeCounter=-1;
	while(ptr != null){
		addressMap[++nodeCounter] = ptr;
	}

	int requiredNodeIndex = nodeCounter - n;
	if(requiredNodeIndex < 0){
		return null;
	}else{
		return addressMap[requiredNodeIndex];
	}
}



//int main(){
//	return -1;
//}

