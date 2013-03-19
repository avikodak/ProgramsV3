/*
 * AreTreesIdentical.cpp
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

bool AreTwoTreesIdentical(tNode *tree1,tNode *tree2){
	if(tree1 == NULL && tree2 == NULL){
		return true;
	}
	if(tree1 == NULL || tree2 == NULL){
		return false;
	}

	if(tree1->value1 == tree2->value2){
		return AreTreesIdentical(tree1->left,tree2->left) && AreTreesIdentical(tree1->right,tree2->right);
	}else{
		return false;
	}
}

bool AreTwoTreesIdenticalLevelOrderTraversal(tNode *tree1,tNode *tree2){

}

bool AreTwoTreesIdenticalPreOrderTraversal(tNode *tree1,tNode *tree2){

}

bool AreTwoTreesIdenticalPostOrderTraversal(tNode *tree1,tNode *tree2){

}

bool AreTwoTreesIdenticalInOrderTraversal(tNode *tree1,tNode *tree2){

}

bool AreTwoTreesIdenticalReversePreOrderTraversal(tNode *tree1,tNode *tree2){

}

bool AreTwoTreesIdenticalReversePostOrderTraversal(tNode *tree1,tNode *tree2){

}

bool AreTwoTreesIdenticalReverseInOrderTraversal(tNode *tree1,tNode *tree2){

}

//int main(){
//	return -1;
//}

