/*
 * ImplementTwoStacksInArray.cpp
 *
 *  Created on: Feb 22, 2013
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

class TwoStacksInArray{
	int topStack1 = -1;
	int sizeOfArray;
	int auxArray[sizeOfArray];
	int topStack2 = sizeOfArray;

	void push(int number,int stackIndex){
		if(isFull()){
			cout << "Can't push elements into stack .Array is full" << endl;
			return;
		}
		switch(stackIndex){
		case 1:
			auxArray[++topStack1] = number;
			break;
		case 2:
			auxArray[--topStack2] = number;
			break;
		}
	}

	int top(int stackIndex){
		switch(stackIndex){
		case 1:
			if(!isEmpty(stackIndex)){
				return auxArray[topStack1];
			}
			break;
		case 2:
			if(!isEmpty(stackIndex)){
				return auxArray[topStack2];
			}
			break;
		}
		return INFINITY;
	}

	bool isEmpty(int stackIndex){
		switch(stackIndex){
		case 1:
			if(topStack1 == -1){
				return true;
			}
			break;
		case 2:
			if(topStack2 == sizeOfArray){
				return true;
			}
			break;
		}
		return false;
	}

	bool isFull(){
		if(topStack2 - topStack1 == 1){
			return true;
		}
		return false;
	}

	void pop(int stackIndex){
		switch(stackIndex){
		case 1:
			if(!isEmpty(stackIndex)){
				auxArray[topStack1] = 0;
				topStack1--;
				return;
			}
			break;
		case 2:
			if(!isEmpty(stackIndex)){
				auxArray[topStack2] = 0;
				topStack1++;
				return;
			}
			break;
		}
		printf("Stack %d is empty",stackIndex);
		return;
	}
};

//int main(){
//	return -1;
//}

