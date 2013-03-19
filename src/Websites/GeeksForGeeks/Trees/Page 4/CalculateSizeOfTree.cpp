/*
 * CalculateSizeOfTree.cpp
 *
 *  Created on: Mar 19, 2013
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

struct tNode{
	int value;
	tNode *left;
	tNode *right;
};

int CalculateSizeOfTreeRecursion(tNode *ptr){
	if(ptr == NULL){
		return 0;
	}
	int noNodesLeft,noNodesRight;
	noNodesLeft = CalculateSizeOfTree(ptr->left);
	noNodesRight = CalculateSizeOfTree(ptr->right);
	return 1+noNodesLeft+noNodesRight;
}

int CalculateSizeOfTree(tNode *ptr){
	queue<tNode *> nodesOfTree;
	if(ptr != NULL){
		nodesOfTree.push(ptr);
	}
	tNode *currentNode;
	int totalCountOfNodes=0;
	while(!nodesOfTree.empty()){
		currentNode = nodesOfTree.front();
		if(currentNode->left != NULL){
			nodesOfTree.push(currentNode->left);
		}
		if(currentNode->right != NULL){
			nodesOfTree.push(currentNode->right);
		}
		totalCountOfNodes++;
	}

	return totalCountOfNodes;
}

int CalculateSizeOfTreePreOrderTraversal(tNode *ptr){

}

int CalculateSizeOfTreePostOrderTraversal(tNode *ptr){

}

int CalculateSizeOfTreeInOrderTraversal(tNode *ptr){

}

int CalculateSizeOfTreeReversePreOrderTraversal(tNode *ptr){

}

int CalculateSizeOfTreeReversePostOrderTraversal(tNode *ptr){

}

int CalculateSizeOfTreeReverseInOrderTraversal(tNode *ptr){

}


//int main(){
//	return -1;
//}

