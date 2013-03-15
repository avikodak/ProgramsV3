/*
 * CountNodesInATree.cpp
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

int TotalNoOfNodes(node *ptr){
	if(!ptr){
		return 0;
	}
	return 1+TotalNoOfNodes(ptr->left)+TotalNoOfNodes(ptr->right);
}

int TotalNoOfNodesUsingLevelOrder(node *ptr){
	return -1;
}

//int main(){
//	return -1;
//}




