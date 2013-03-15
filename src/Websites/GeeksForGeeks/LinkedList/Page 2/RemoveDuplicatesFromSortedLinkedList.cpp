/*
 * RemoveDuplicatesFromSortedLinkedList.cpp
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

void RemoveDuplicatesFromSortedLinkedList(linkedListNode *ptr){
	linkedListNode *crawler = ptr;
	linkedListNode *tempNextNext;
	linkedListNode *toBeFree;
	while(crawler != NULL && crawler->next != NULL){
		while(crawler->value == crawler->next->value){
			tempNextNext = crawler->next->next;
			toBeFree = crawler->next;
			crawler->next = tempNextNext;
			free(toBeFree);
		}
		crawler = crawler->next;
	}
}

//int main(){
//	return -1;
//}

