/*
 * BinarySearchTree.cpp
 *
 *  Created on: Feb 27, 2013
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

struct BSTNode{
	int value;
	BSTNode *left;
	BSTNode *right;
	BSTNode *parent;

	BSTNode(){
		value = 0;
		left = NULL;
		right = NULL;
		parent = NULL;
	}

	BSTNode(int value){
		this->value = value;
		left = NULL;
		right = NULL;
		parent = NULL;
	}
};
BSTNode *rootBST;

BSTNode *GetTheParentPtrForNewNode(BSTNode *ptr,int newValue,bool &shouldBeLeftChild){
	if(ptr->value == newValue){
		return NULL;
	}
	if(ptr->value > newValue){
		if(ptr->right == NULL){
			shouldBeLeftChild = false;
			return ptr;
		}else{
			return GetTheParentPtrForNewNode(ptr->right,newValue,shouldBeLeftChild);
		}
	}else{
		if(ptr->left == NULL){
			shouldBeLeftChild = true;
			return ptr;
		}else{
			return GetTheParentPtrForNewNode(ptr->left,newValue,shouldBeLeftChild);
		}
	}
}


void CreateBST(int value){

}

void InsertANodeInBST(int value){
	if(rootBST == NULL){
		// root is empty
		rootBST  = new BSTNode(value);
	}else{
		bool shouldBeLeft = true;
		BSTNode *parentPointer = GetTheParentPtrForNewNode(rootBST,value,shouldBeLeft);
		if(parentPointer == NULL){
			// Value already exists in the binary search tree so skip that value
			return;
		}
		if(shouldBeLeft){
			parentPointer->left = new BSTNode(value);
			parentPointer->left->parent = parentPointer;
		}else{
			parentPointer->right = new BSTNode(value);
			parentPointer->right->parent = parentPointer;
		}
	}
}

void DeleteANodeInBST(BSTNode *ptr,int key){
	BSTNode *ptrToKey = NULL;
	bool isKeyPresent = SearchForKeyRecursivelyInBST(ptr,key,ptrToKey);
	if(!isKeyPresent){
		printf("Key not present in the BST tree");
		return;
	}

	int noOfChildren = GetTheNumberOfChildrenForNodeInBST(ptrToKey);

	switch(noOfChildren){
	case 0:
		int childType = GetNodeType(ptrToKey);
		switch(childType){
		case 0:
			ptrToKey->parent->left = NULL;
			break;
		case 1:
			ptrToKey->parent->right = NULL;
			break;
		case -1:
			rootBST = NULL;
			break;
		}
		free(ptrToKey);
		break;
	case 1:

	case 2:
	default:
	}
}

bool SearchForKeyRecursivelyInBST(BSTNode *ptr,int key,BSTNode *&ptrTokey){

	if(ptr->value == key){
		ptrTokey = ptr;
		return true;
	}

	bool goLeft = true;
	if(ptr->value > key){
		goLeft = true;
	}else{
		goLeft = false;
	}

	if(goLeft){
		if(ptr->left == NULL){
			ptrTokey = NULL;
			return false;
		}else{
			return SearchForKeyRecursivelyInBST(ptr->left,key,ptrTokey);
		}
	}else{
		if(ptr->right == NULL){
			ptrTokey = NULL;
			return false;
		}else{
			return SearchForKeyRecursivelyInBST(ptr->right,key,ptrTokey);
		}
	}
}

bool SearchForKeyIterativelyInBST(BSTNode *ptr,int key){

}

int GetTheNumberOfChildrenForNodeInBST(BSTNode *ptr){
	if(ptr->left == NULL && ptr->right == NULL){
		return 0;
	}else{
		if((ptr->left == NULL && ptr->right != NULL )|| (ptr->left != NULL && ptr->right == NULL )){
			return 1;
		}else{
			return 2;
		}
	}
}

void GetPredecessorFromBST(BSTNode *ptr,int key){

}

void GetSuccessorFromBST(BSTNode *ptr,int key){

}

/**
 *	This function is used to know the type of the node
 *	ie it returns whether it is a left child or right child or
 *	the node is root
 */
int GetNodeType(BSTNode *ptr){
	if(ptr->parent == NULL){
		return -1;
	}
	if(ptr->parent->left == ptr){
		return 0;
	}else{
		return 1;
	}
}


//int main(){
//	return -1;
//}

