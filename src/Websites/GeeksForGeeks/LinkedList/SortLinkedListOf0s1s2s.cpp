/*
 * SortLinkedListOf0s1s2s.cpp
 *
 *  Created on: Feb 1, 2013
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

using namespace std;
using namespace __gnu_cxx;

#define null NULL


list<int> SortLinkedListHavingValues0s1s2s(list<int> userInput){
	int countZeros = 0 ,countOnes = 0,countTwos =0;
}

void DriverProgram(){
	list<int> userInput;
	int numberOfuserInputs;
	cin >> numberOfuserInputs;
	int userInputTemp;
	for(int inputCounter =0; inputCounter < numberOfuserInputs;inputCounter++){
		cin >> userInputTemp;
		if(userInput == 0 || userInput == 1 || userInput == 2){
			userInput.push_back(userInputTemp);
		}
	}

	list<int> sortedLinkedList = SortLinkedListHavingValues0s1s2s(userInput);
}

//int main(){
//	return -1;
//}

