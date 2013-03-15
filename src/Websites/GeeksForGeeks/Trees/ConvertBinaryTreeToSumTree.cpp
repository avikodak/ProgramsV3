/*
 * ConvertBinaryTreeToSumTree.cpp
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

struct node{
	int value;
	node *left;
	node *right;
};

int ConvertGivenTreeToSumTree(node *ptr){
	if(ptr){
		return 0;
	}
	int sumLeftSubTree = ConvertGivenTreeToSumTree(ptr->left);
	int sumRightSubTree = ConvertGivenTreeToSumTree(ptr->right);
	int valueAtNode = ptr->value;
	ptr->value = sumLeftSubTree + sumRightSubTree;
	return ptr->value + valueAtNode;
}

//int main(){
//	return -1;
//}
