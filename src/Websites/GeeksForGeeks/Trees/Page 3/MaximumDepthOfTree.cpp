/*
 * MaximumDepthOfTree.cpp
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

int HeightOfTree(tNode *ptr){
	if(ptr == NULL){
		return 0;
	}
	return 1+ max(HeightOfTree(ptr->left),HeightOfTree(ptr->right));
}

int HeightOfTreePreOrderTraversal(tNode *ptr){

}

int HeightOfTreePostOrderTraversal(tNode *ptr){

}

int HeightOfTreeInOrderTraversal(tNode *ptr){

}

int HeightOfTreeReversePreOrderTraversal(tNode *ptr){

}

int HeightOfTreeReversePostOrderTraversal(tNode *ptr){

}

int HeightOfTreeReverseInOrderTraversal(tNode *ptr){

}



//int main(){
//	return -1;
//}

