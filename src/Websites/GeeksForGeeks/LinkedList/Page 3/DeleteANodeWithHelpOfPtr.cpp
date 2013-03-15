/*
 * DeleteANodeWithHelpOfPtr.cpp
 *
 *  Created on: Mar 8, 2013
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
struct linkedlistnode{
	int value;
	linkedlistnode *next;
};

void DeleteANodeOnlyWithPtr(linkedlistnode *deleteNodePtr){
	linkedlistnode *temp;
	if(deleteNodePtr->next != NULL){
		deleteNodePtr->value = deleteNodePtr->next->value;
		temp = deleteNodePtr;
		deleteNodePtr->next = deleteNodePtr->next->next;
	}else{
		temp = deleteNodePtr;
		deleteNodePtr = null;
	}
	free(temp);
	return;
}

//int main(){
//	return -1;
//}

