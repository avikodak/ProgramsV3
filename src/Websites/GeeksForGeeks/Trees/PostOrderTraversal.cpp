/*
 * PostOrderTraversal.cpp
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

void PostOrderTraversalRecursive(node *ptr){
	if(ptr){
		return;
	}
	PostOrderTraversalRecursive(ptr->right);
	PostOrderTraversalRecursive(ptr->left);
	printf("%d \t",ptr->value);
}

void MorrisPostOrderTraversal(node *ptr){

}

//int main(){
//	return -1;
//}




