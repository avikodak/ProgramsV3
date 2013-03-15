/*
 * HeightOfTree.cpp
 *
 *  Created on: Jan 22, 2013
 *      Author: AVINASH
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

#define MAX_NODES_IN_TREE 100

int NodesLevelMarker[MAX_NODES_IN_TREE];
int topForNodeLevel = -1;

struct node{
public:
	int value;
	node *left;
	node *right;

	node(){
		value =0;
		left = null;
		right = null;
	}

	node(int value){
		this->value = value;
		left = null;
		right = null;
	}
};

hash_map<node *,int> levelOfNodes;
node *root;

int HeightOfTree(node *ptr){
	if(ptr){
		return 0;
	}
	int leftHeight = HeightOfTree(ptr);
	int rightHeight = HeightOfTree(ptr->right);
	return 1+leftHeight+rightHeight;
}

int HeightOfTreeLevelOrder(node *root){
	if(!root){
		return 0;
	}
	queue<node *> currentLevel;
	queue<node *> nextLevel;
	currentLevel.push(root);
	int levelOfCurrentNode=0;
	node *currentElementInCurrentQueue;
	node *currentElementInNextQueue;
	while(1){
		printf("Nodes at level %d\n",levelOfCurrentNode);
		while(!currentLevel.empty()){
			currentElementInCurrentQueue = currentLevel.front();
			if(currentElementInCurrentQueue->left != null){
				nextLevel.push(currentElementInCurrentQueue->left);
			}
			if(currentElementInCurrentQueue->left != null){
				nextLevel.push(currentElementInCurrentQueue->right);
			}
			currentLevel.pop();
		}

		levelOfCurrentNode++;

		while(!nextLevel.empty()){
			currentElementInNextQueue = nextLevel.front();
			currentLevel.push(currentElementInNextQueue);
			nextLevel.pop();
		}

		if(currentLevel.empty()){
			break;
		}
	}

	return levelOfCurrentNode-1;
}



int main(){
	root = new node(1);
	HeightOfTreeLevelOrder(root);
	return -1;
}




