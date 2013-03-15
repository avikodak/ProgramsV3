/*
 * NoOfBitsNeededToFlipForAToB.cpp
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

int CountSetBits(int number){
	return 1;
}

int NumberOfBitsToBeFlipped(int a,int b){
	int XORResult = a^b;
	return CountSetBits(XORResult);
}

int NumberOfBitsToBeFlippedIteration(int a,int b){
	int crawler= 1 << 31;
	int noOfBitsToBeFlipped=0;
	int bitFromFirstNumber,bitFromSecondNumber;
	do{
		bitFromFirstNumber = a & crawler;
		bitFromSecondNumber = b & crawler;
		if(bitFromFirstNumber^bitFromSecondNumber){
			noOfBitsToBeFlipped++;
		}
		crawler >>= 1;
	}while(crawler);
	return noOfBitsToBeFlipped;
}

//int main(){
//	return -1;
//}




