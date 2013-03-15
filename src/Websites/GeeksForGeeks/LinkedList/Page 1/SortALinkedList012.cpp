/*
 * SortALinkedList012.cpp
 *
 *  Created on: Mar 4, 2013
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

struct node{
	int number;
	node *next;
};

void SortALinkedList(node *head){
	node *crawler = head;
	int counter[3];

	while(head != null){
		counter[crawler->number]++;
		crawler = crawler->next;
	}
	crawler = head;
	for(int indexCounter=0;indexCounter < 3;indexCounter++){
		while(counter[indexCounter] != 0){
			crawler->number = indexCounter;
			crawler = crawler->next;
		}
	}
}

void SortALinkedList012BubbleSort(node *head){
	int lengthOfLinkedList=10;
	node *crawlerLinkedList = head;
	for(int counter=0;counter < lengthOfLinkedList;counter++){
		crawlerLinkedList = head;
		while(crawlerLinkedList->next != null){

		}
	}
}

void SortALinkedListRecursionBackTracking(node *ptr,node *head){

}

void SortALinkedListByCreatingLinkedLists(){

}

//int main(){
//	return -1;
//}

