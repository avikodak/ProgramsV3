/*
 * MajorityElement.cpp
 *
 *  Created on: Feb 3, 2013
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
public:
	int value;
	int occurences;
	node *left;
	node *right;

	node(){
		this->value = 0;
		this->occurences = 0;
		left = null;
		right = null;
	}

	node(int value,int occurences){
		this->value = value;
		this->occurences = occurences;
		left = null;
		right = null;
	}
};

node *rootBSTForMajorityElement;

int MajorityElementHashMap(int userInput[],int sizeOfArray){
	hash_map<int,int> countOfOccurences;
	bool found;
	hash_map<int,int>::iterator iteratorToKey;
	for(int arrayCrawler=0;arrayCrawler < sizeOfArray;arrayCrawler++){
		if((iteratorToKey = countOfOccurences.find(userInput[arrayCrawler]))!=countOfOccurences.end()){
			countOfOccurences[iteratorToKey->first] = iteratorToKey->second++;
		}else{
			countOfOccurences[userInput[arrayCrawler]] = 0;
		}
	}

	int maxOccurence =0;
	int maxElement =0;
	for(iteratorToKey = countOfOccurences.begin();iteratorToKey != countOfOccurences.end();iteratorToKey++){
		if(iteratorToKey->second > maxOccurence){
			maxOccurence = iteratorToKey->second;
			maxElement = iteratorToKey->first;
		}
	}

	return maxElement;
}

void CreateBSTForFindingMajorityElement(int userInput[],int sizeOfArray){
	for(int counter=0;counter<sizeOfArray;counter++){
	//	node *ptrTobeInserted = FindPositionInBST(rootBSTForMajorityElement);
	}
}

node *FindPositionInBST(node *ptr){

}

int MajorityElementBST(int userInput[],int sizeOfArray){

}

int MajorityElementHeap(int userInput[],int sizeOfArray){

}

int MajorityElementBruteForce(int userInput[],int sizeOfArray){
	int innerCrawler=0;
	int countOfKey;
	int maxOccurences=0;
	int maxElement =0;
	for(int outerCrawler=0;outerCrawler < sizeOfArray;outerCrawler++){
		countOfKey =0;
		for(innerCrawler =0 ;innerCrawler < sizeOfArray;innerCrawler++){
			if(innerCrawler == outerCrawler){
				continue;
			}
			if(userInput[outerCrawler] == userInput[innerCrawler]){
				countOfKey++;
			}
		}
		if(maxOccurences < countOfKey){
			maxOccurences = countOfKey;
			maxElement = userInput[outerCrawler];
		}
	}

	return maxElement;
}

int MooreVotingMethod(){
	return 1;
}

//int main(){
//	return -1;
//}

