/*
 * CheckIfALinkedListIsPalindrome.cpp
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

bool CheckIfListIsPalindromeOrNot(linkedListNode *ptr,int lengthOfLinkedList){
	stack<int> visitedNodes;
	int middleOfLinkedList,elementCounter=0;

	bool skipMidElement = false;

	if(lengthOfLinkedList%2 == 1){
		skipMidElement = true;
	}

	while(ptr!= NULL){

		if(elementCounter == middleOfLinkedList){
			if(!skipMidElement){
				visitedNodes.push(ptr->value);
			}
		}else{
			if(elementCounter < middleOfLinkedList){
				visitedNodes.push(ptr->value);
			}else{
				if(ptr->value != visitedNodes.top()){
					return false;
				}
				visitedNodes.pop();
			}
		}

		ptr = ptr->next;
		elementCounter++;
	}

}

bool CheckIfListIsPalindromeRecursion(linkedListNode *recursivePtr,linkedListNode *&frontCrawler){
	if(recursivePtr == NULL){
		return true;
	}
	bool isPalindrome = CheckIfListIsPalindromeRecursion(recursivePtr->next,frontCrawler);
	if(isPalindrome){
		if(recursivePtr->value == frontCrawler->value){
			frontCrawler = frontCrawler->next;
			return true;
		}else{
			return false;
		}
	}else{
		return false;
	}
}

bool CheckIfAListIsPalindromeOrNot(linkedListNode *recursivePtr){

}

//int main(){
//	return -1;
//}

