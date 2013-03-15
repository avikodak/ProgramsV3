/*
 * MergeTwoBST.cpp
 *
 *  Created on: Jan 25, 2013
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

node *rootBST1;
node *rootBST2;

//Challenge

void MergeBSTInplace(node *rootBST1,node *rootBST2){

}

void MergeBSTInorderTraversalRecursive(){

}

void MergeBSTIndorderTraversalIteratively(){

}

//int main(){
//	return -1;
//}




