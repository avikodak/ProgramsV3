/*
 * RemoveDuplicatesFromUnSortedLinkedList.cpp
 *
 *  Created on: Mar 12, 2013
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
 * ---------
 * Check the logic
 */
void RemoveDuplicatesFromUnSortedLinkedList(linkedListNode *ptr){
	linkedListNode *crawler,*tempPtrToDelete,*crawlerOneNodeBack;
	hash_map<int,int> occurenceMap;
	hash_map<int,int>::iterator iteratorToKey,crawlerHashMap;
	crawler = ptr;
	while(crawler != NULL){
		if((iteratorToKey = occurenceMap.find(crawler->value)) == occurenceMap.end()){
			occurenceMap.insert(pair<int,int>(crawler->value,1));
		}else{
			occurenceMap.insert(pair<int,int>(crawler->value,iteratorToKey->second+1));
		}
	}

	crawler = ptr;
	crawlerOneNodeBack = NULL;
	while(crawler != NULL){
		if((iteratorToKey = occurenceMap.find(crawler->value)) != occurenceMap.end()){
			if(iteratorToKey->second != 1){
				tempPtrToDelete = crawler->next;
				if(iteratorToKey->next->next != NULL && tempPtrToDelete != NULL){
					crawler->value = crawler->next->value;
				}else{
					if(tempPtrToDelete == NULL){
						crawlerOneNodeBack->next = NULL;
					}
				}
				free(tempPtrToDelete);
				iteratorToKey->second -= 1;
			}
			crawlerOneNodeBack = crawler;
			crawler = crawler->next;
		}
	}
}

void RemoveDuplicatesInUnsortedLinkedList(linkedListNode *ptr){
	linkedListNode *outerCrawler;
	linkedListNode *innerCrawler;
	outerCrawler = ptr;
	innerCrawler = outerCrawler->next;

	linkedListNode *ptrToBeFreed;
	while(outerCrawler != NULL){
		innerCrawler = outerCrawler->next;
		while(innerCrawler != NULL){
			if(outerCrawler->value == innerCrawler->value){
				//complete
			}
			innerCrawler = innerCrawler->next;
		}
		outerCrawler = outerCrawler->next;
	}
}

//int main(){
//	return -1;
//}

