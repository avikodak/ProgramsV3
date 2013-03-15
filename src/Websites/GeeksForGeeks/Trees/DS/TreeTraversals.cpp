/*
 * TreeTraversals.cpp
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

struct tNode{
	int value;
	tNode *left;
	tNode *right;
	tnode *parent;
};

void PreOrderTraversal(tNode *ptr){
	if(ptr == NULL){
		return;
	}
	printf("%d",ptr->value);
	PreOrderTraversal(ptr->left);
	PreOrderTraversal(ptr->right);
}

void MorrisTraversalForPreOrder(){

}

void InOrderTraversal(tNode *ptr){
	if(ptr == NULL){
		return;
	}
	InOrderTraversal(ptr->left);
	printf("%d",ptr->value);
	InOrderTraversal(ptr->right);
}

void MorrisTraversalForInorder(){

}

void PostOrderTraversal(tNode *ptr){
	if(ptr == NULL){
		return;
	}
	PostOrderTraversal(ptr->left);
	PostOrderTraversal(ptr->right);
	printf("%d\t",ptr->value);
}

void MorrisTraversalForPostOrder(tNode *ptr){

}

void ReverseInOrderTraversal(tNode *ptr){

}

void MorrisTraversalForReverseInOrder(tNode *ptr){

}

//int main(){
//	return -1;
//}

