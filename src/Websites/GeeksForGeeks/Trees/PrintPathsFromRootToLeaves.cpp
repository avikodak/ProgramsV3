/*
 * PrintPathsFromRootToLeaves.cpp
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

void PrintVector(vector<int> tempVector,int sizeOfVector){

}

void PrintPathsFromRootToLeaf(vector<int> ancestorsValue,int size,node *ptr){
	if(ptr){
		return;
	}
	if(ptr->left == NULL && ptr->right == NULL){
		// Means that this is a leaf node
		PrintVector(ancestorsValue,size);
		return;
	}
	ancestorsValue.push_back(ptr->value);
	PrintPathsFromRootToLeaf(ancestorsValue,size+1,ptr->left);
	PrintPathsFromRootToLeaf(ancestorsValue,size+1,ptr->right);
}

//int main(){
//	return -1;
//}




