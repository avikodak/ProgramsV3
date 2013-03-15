/*
 * SortElementsByFrequency.cpp
 *
 *  Created on: Feb 18, 2013
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
/*
 * Incomplete
 */
bool customCompareOperator(pair<int,int> firstElement,pair<int> secondElement){
	return firstElement.second < secondElement.second;
}

void SortElementsByFrequencyUsingON2(int userInput[],int sizeOfArray){
	int innerCounter,tempForSwap;
	int countArray[sizeOfArray],countArrayIndex=-1;

	for(int outerCounter=0;outerCounter < sizeOfArray;){
		int countSwaps =0;
		for(innerCounter = outerCounter+1;innerCounter < sizeOfArray;innerCounter++){
			if(userInput[outerCounter] == userInput[innerCounter]){
				if(outerCounter+1 < sizeOfArray){
					tempForSwap = userInput[outerCounter];
					userInput[outerCounter] = userInput[innerCounter];
					userInput[innerCounter] = tempForSwap;
					countSwaps++;
				}
			}
		}
		outerCounter += countSwaps;
		if(countArrayIndex == -1){
			countArray[++countArrayIndex] = countSwaps;
		}else{

		}
	}
}

void SortElementsByFrequency(int userInput[],int sizeOfArray){
	hash_map<int,int> frequencyTable;
	hash_map<int,int>::iterator iteratorToKey;
	for(int crawler =0;crawler < sizeOfArray;crawler++){
		if((iteratorToKey = frequencyTable.find(userInput[crawler])) == frequencyTable.end()){
			frequencyTable.insert(pair<int,int>(userInput[crawler]),1);
		}else{
			frequencyTable.insert(iteratorToKey->first,((iteratorToKey->second)+1));
		}
	}

	vector<pair<int,int>> frequencyTableCopy(frequencyTable.begin(),frequencyTable.end());

	//Sorting Elements by frequency
	sort(frequencyTableCopy.begin(),frequencyTableCopy.end(),customCompareOperator);

}



void SortElementsByFrequencyUsingBST(int userInput[],int sizeOfArray){

}



//int main(){
//	return -1;
//}

