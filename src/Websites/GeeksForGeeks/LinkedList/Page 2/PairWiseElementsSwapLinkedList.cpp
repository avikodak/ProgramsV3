/*
 * PairWiseElementsSwapLinkedList.cpp
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

struct linkedListNode{
	int value;
	linkedListNode *next;
};

void PairWiseElementsSwapLinkedListRecursive(linkedListNode *ptr){
	if(ptr == NULL || ptr->next == NULL){
		return;
	}
	int tempForSwap = ptr->value;
	ptr->value = ptr->next->value;
	ptr->next->value = tempForSwap;
	PairWiseElementsSwapLinkedListRecursive(ptr->next->next);
}


void PairWiseElementsSwapLinkedListLinearCrawl(linkedListNode *ptr){
	linkedListNode *crawler = ptr;
	int tempForSwap;
	while(crawler != NULL && crawler->next != NULL){
		tempForSwap = crawler->next->value;
		crawler->next->value = crawler->value;
		crawler->value = tempForSwap;
		crawler = crawler->next->next;
	}
}


//int main(){
//	return -1;
//}

