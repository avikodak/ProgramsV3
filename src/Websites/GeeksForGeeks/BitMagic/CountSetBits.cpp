/*
 * CountSetBits.cpp
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

int CountSetBitsIteration(int userInput){
	int count=0;
	for(int i = 1<<31;i;i>>=1){
		count += (userInput&i)?1:0;
	}
	return count;
}

int CountSetBitsRecursively(int userInput){
	if(!userInput){
		return 0;
	}
	int counterTillNow = CountSetBitsRecursively(userInput/2);
	return counterTillNow + (userInput%2);
}

int CountSetBits(int userInput){
	int counterSetBits=0;
	while((userInput=userInput&(userInput-1))){
		counterSetBits++;
	}
	return counterSetBits;
}

int CountSetBitsBitSet(int userInput){
	bitset<32> bitRepUserInput(userInput);
	int counter=0;
	for(int counter=0;counter < 32;counter++){
		if(bitRepUserInput[counter]){
			counter++;
		}
	}
	return counter;
}

//int main(){
//	return -1;
//}
