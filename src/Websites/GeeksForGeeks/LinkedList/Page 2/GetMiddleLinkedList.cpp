/*
 * GetMiddleLinkedList.cpp
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
	int number;
	node *next;
};


node *GetMiddleLinkedList(node *head,int &n,int &middle,node *ptrToMiddleLinkedList){
	int lengthOfLinkedList = 0;
	node *windowStartCrawler = head,*middlePtr;
	while(windowStartCrawler->next != null){
		lengthOfLinkedList++;
		windowStartCrawler = windowStartCrawler->next;
	}

	windowStartCrawler = head;

	while(lengthOfLinkedList/2){
		middlePtr = middlePtr->next;
		lengthOfLinkedList--;
	}

	return middlePtr;
}

node *GetMiddleLinkedListAux(node *headOfLinkedList){

}

node *GetMiddleLinkedListRunningAlgo(node *headOfLinkedList){
	node *slowPtr,*fastPtr;
	while(slowPtr != null && fastPtr != null && fastPtr->next != null){
		slowPtr = slowPtr->next;
		fastPtr = fastPtr->next->next;
	}
	return slowPtr;
}

//int main(){
//	return -1;
//}

