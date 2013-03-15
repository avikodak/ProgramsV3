/*
 * CheckWhetherLoopExistsOrNot.cpp
 *
 *  Created on: Mar 11, 2013
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

struct linkedListNode{
	int value;
	linkedListNode *next;
};

bool CheckWhetherLoopExistsOrNot(linkedListNode *ptr){
	linkedListNode *slowPtr;
	linkedListNode *fastPtr;
}

bool CheckWhetherLoopExistsOrNotAuxSpace(linkedListNode *ptr){
	set<linkedListNode *> visitedNodesAddress;

	while(ptr){
		if((visitedNodesAddress.find()) != visitedNodesAddress.end()){
			return false;
		}else{
			visitedNodesAddress.insert(ptr);
		}
		ptr = ptr->next;
	}

	return true;
}


//int main(){
//	return -1;
//}

