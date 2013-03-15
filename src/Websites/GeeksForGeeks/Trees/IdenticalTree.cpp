/*
 * IdenticalTree.cpp
 *
 *  Created on: Jan 23, 2013
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

struct node{
	int value;
	node *left;
	node *right;
};

bool AreTreesIdentical(node *ptrFirstTree,node *ptrSecondTree){
	if(ptrFirstTree == NULL && ptrSecondTree == NULL ){
		return true;
	}
	if((ptrFirstTree == NULL && ptrSecondTree != NULL) || (ptrFirstTree != NULL && ptrSecondTree == NULL)){
		return false;
	}

	if(false == AreTreesIdentical(ptrFirstTree->left,ptrSecondTree->left)){
		return false;
	}

	if(false == AreTreesIdentical(ptrFirstTree->right,ptrSecondTree->right)){
		return false;
	}

	if(ptrFirstTree->value==ptrSecondTree->value){
		return true;
	}
	return false;
}

//int main(){
//	return -1;
//}




