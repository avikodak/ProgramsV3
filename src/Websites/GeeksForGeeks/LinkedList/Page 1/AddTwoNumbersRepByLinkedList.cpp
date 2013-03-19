/*
 * AddTwoNumbersRepByLinkedList.cpp
 *
 *  Created on: Mar 18, 2013
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

struct linkedListNode {
	int value;
	linkedListNode *next;
};

void AdditionOfTwoNumber(linkedListNode *firstArg,linkedListNode *secondArg,int countOfList1,int countOfList2,int &sum, int &carry) {
	while (firstArg == NULL && secondArg == NULL) {
		return;
	}
	if (firstArg == NULL) {
		if (secondArg != NULL) {
			return AdditionOfTwoNumber(firstArg, secondArg->next,countOfList1,countOfList2+1, sum, carry);
		}
	}
	if (secondArg == NULL) {
		if (firstArg != NULL) {
			return AdditionOfTwoNumber(firstArg->next, secondArg,countOfList1+1,countOfList2, sum, carry);
		}
	}

	AdditionOfTwoNumber(firstArg->next, secondArg->next,countOfList1+1,countOfList2+1, sum, carry);

	/*
	 * Conditions to be determined
	 */
	if (countOfList1 >= 0 && countOfList2 >= 0) {
		int temp = firstArg->value + secondArg->value + carry;
		sum = (sum << 3) + (sum << 1) + (temp % 10);
		carry = temp / 10;
	} else {
		if (countOfList1 >= 0) {
			int temp = firstArg->value + carry;
			sum = (sum << 3) + (sum << 1) + (temp % 10);
			carry = temp / 10;
		}
		if(countOfList2 >= 0){
			int temp = secondArg->value + carry;
			sum = (sum << 3) + (sum << 1) + (temp % 10);
			carry = temp / 10;
		}
	}

}

void AddTwoNumbersLinkeListStack(linkedListNode *arg1,linkedListNode *arg2){
	stack<int> arg1Stack;
	stack<int> arg2Stack;
	linkedListNode *arg1Crawler = arg1,*arg2Crawler = arg2;
	while(arg1Crawler != NULL){
		arg1Stack.push(arg1Crawler->value);
		arg1Crawler = arg1Crawler->next;
	}

	while(arg2Crawler != NULL){
		arg2Stack.push(arg2Crawler->value);
		arg2Crawler = arg2Crawler->next;
	}

	int sum = 0,temp,carry=0;

	while(!arg1Stack.empty() && !arg2Stack.empty()){
		temp = arg1Stack.top() + arg2Stack.top() + carry;
		sum = (sum << 3) + (sum << 1) + (temp%10);
		carry = temp/10;
	}

	while(!arg1Stack.empty()){
		temp = arg1Stack.top() + carry;
		sum = (sum << 3) + (sum << 1) + (temp%10);
		carry = temp/10;
	}

	while(!arg2Stack.empty()){
		temp = arg2Stack.top() + carry;
		sum = (sum << 3) + (sum << 1) + (temp%10);
		carry = temp/10;
	}
}

//int main(){
//	return -1;
//}

