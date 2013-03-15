/*
 * BinaryRepresentationOfNumber.cpp
 *
 *  Created on: Jan 22, 2013
 *      Author: AVINASH
 */
//
// Testing Status - Done
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

void BinaryRepresentationIteration(int userInput){
	for(unsigned int i = 1 << 31;i;i >>= 1){
		printf("%d",userInput&i?1:0);
	}
	return;
}

void BinaryRepRecursive(int userInput){
	if(userInput == 0){
		printf("%d",userInput);
		return;
	}
	BinaryRepRecursive(userInput/2);
	printf("%d",userInput%2);
}

//int main(){
//	BinaryRepresentationIteration(3);
//	printf("\n");
//	BinaryRepRecursive(8);
//	return -1;
//}
