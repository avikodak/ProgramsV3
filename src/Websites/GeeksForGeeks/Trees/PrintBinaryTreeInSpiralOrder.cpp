/*
 * PrintBinaryTreeInSpiralOrder.cpp
 *
 *  Created on: Jan 23, 2013
 *      Author: AVINASH
 */
//
// Testing Status - DONE
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
	struct node *left;
	struct node *right;

	node(int element){
		value = element;
		left = NULL;
		right = NULL;
	}

};

node *rootOrderedBinaryTree;

/*
 * This is used to print the tree in spiral order
 */
void PrintTreeInSpiralOrder(node *root){
	stack<node *> leftToRight;
	stack<node *> rightToLeft;
	leftToRight.push(root);
	node *currentElement;
	int count=1;
	while(1){
		printf("\nLevel %d\n",count);
		printf("-----------\n");
		while(!leftToRight.empty()){
			currentElement = leftToRight.top();
			printf("%d\t",currentElement->value);
			if(currentElement->left != NULL){
				rightToLeft.push(currentElement->left);
			}
			if(currentElement->right != NULL){
				rightToLeft.push(currentElement->right);
			}
			leftToRight.pop();
		}
		count++;
		printf("\n");
		printf("\nLevel %d\n",count);
		printf("-----------\n");
		while(!rightToLeft.empty()){
			currentElement = rightToLeft.top();
			printf("%d\t",currentElement->value);
			if(currentElement->left != NULL){
				leftToRight.push(currentElement->right);
			}
			if(currentElement->right != NULL){
				leftToRight.push(currentElement->left);
			}
			rightToLeft.pop();
		}
		printf("\n");
		count++;
		if(leftToRight.empty() && rightToLeft.empty()){
			break;
		}
	}
}


/*
 * This is used to create a normal binary tree
 * But the tree can be anything
 *
 * Tree is constructed using the level order logic.
 */
void CreateTree(int inputArray[],int noOfElements){
	queue<node *> levelQueue;
	for(int counter=0;counter< noOfElements;counter++){
		if(null == rootOrderedBinaryTree){
			rootOrderedBinaryTree = new node(inputArray[counter]);
			levelQueue.push(rootOrderedBinaryTree);
		}else{
			if(counter%2 == 1){
				node *ptr = levelQueue.front();
				ptr->left  = new node(inputArray[counter]);
				levelQueue.push(ptr->left);
			}else{
				node *ptr = levelQueue.front();
				levelQueue.pop();
				ptr->right = new node(inputArray[counter]);
				levelQueue.push(ptr->right);
			}
		}
	}
}

int main(){
	int userInput[12] = {6,3,9,2,4,8,10,1,5,7,11,12};
	CreateTree(userInput,12);
	PrintTreeInSpiralOrder(rootOrderedBinaryTree);
	return -1;
}




