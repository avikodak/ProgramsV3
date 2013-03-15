/*
 * AddTwoBitStrings.cpp
 *
 *  Created on: Feb 20, 2013
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

//
//	 Assuming the result of the addition is less than limit of the int_max
//
int ResultOfSum(string bitString1,string bitString2){
	int maxLength = max(bitString1.length(),bitString2.length());
	bitset<maxLength+1> additionResult;
	string::iterator stringIterator1,stringIterator2;
	string::iterator stringEndIterator1,stringEndIterator2;
	int bitsetCounter = -1;

	if(bitString1.length() > bitString2.length()){
		stringIterator1 = bitString1.rbegin();
		stringIterator2 = bitString2.rbegin();
		stringEndIterator1 = bitString1.rend();
		stringEndIterator2 = bitString2.rend();
	}else{
		stringIterator1 = bitString2.rbegin();
		stringIterator2 = bitString1.rbegin();
		stringEndIterator1 = bitString2.rend();
		stringEndIterator2 = bitString1.rend();
	}

	int carry=0,sum=0;
	for(;stringIterator1 != stringEndIterator1 && stringIterator2 != stringEndIterator2; stringIterator1++,stringIterator2++){
		sum = (int)(*stringIterator1) + (int)(*stringIterator2) + carry;
		carry = sum/2;
		additionResult[++bitsetCounter] = sum % 2;
	}

	while(stringIterator1 != stringEndIterator1){
		sum = (int)(*stringIterator1) + carry;
		carry = sum/2;
		additionResult[++bitsetCounter] = sum % 2;
		stringIterator1++;
	}

	return (int)additionResult;
}



//int main(){
//	return -1;
//}

