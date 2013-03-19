/*
 * IdenticalLinkedList.cpp
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

bool AreTwoLinkedListIdentical(linkedListNode *ptr1,linkedListNode *ptr2){
	if(ptr1 == NULL && ptr2 == NULL){
		return true;
	}
	if(ptr1 == NULL || ptr2 == NULL){
		return false;
	}
	if(ptr1->value == ptr2->value){
		return AreTreesIdentical(ptr1->next,ptr2->next);
	}else{
		return false;
	}

}

bool AreTwoLinkedListIdentical(linkedListNode *ptr1,linkedListNode *ptr2){
	linkedListNode *crawler1=ptr1,crawler2=ptr2;
	bool listsIdentical = true;
	while(ptr1 != NULL && ptr2 != NULL){
		if(ptr1->value == ptr2->value){
			ptr1 = ptr1->next;
			ptr2 = ptr2->next;
		}else{
			listsIdentical = false;
			break;
		}
	}
	if(!listsIdentical){
		return false;
	}
	if(ptr1 == NULL && ptr2 == NULL){
		return true;
	}
}

//int main(){
//	return -1;
//}

