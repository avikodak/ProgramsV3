/*
 * HeightBalancedTree.cpp
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

bool IsTreeHeightBalanced(node *ptr){
	if(ptr){
		return true;
	}
	int heightOfLeftTree = HeightOfTree(ptr->left);
	int heightOfRightTree = HeightOfTree(ptr->right);
	return abs(heightOfLeftTree- heightOfRightTree)<=1 && IsTreeHeightBalanced(ptr->left) && IsTreeHeightBalanced(ptr->right);
}



//int main(){
//	return -1;
//}




