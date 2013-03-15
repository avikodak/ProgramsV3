/*
 * PrintUniqueRowsInBooleanMatrix.cpp
 *
 *  Created on: Feb 28, 2013
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

void PrintUniqueRows(int userInput[][columns],int rows,int columns){
	set<unsigned long> values_seen;
	bitset<columns> bitRep;
	for(int rowCounter=0;rowCounter<rows;rowCounter++){
		bitRep.reset();
		for(int columnCounter = columns-1;columnCounter >= 0;columnCounter--){
			if(userInput[rowCounter][columnCounter] == 1){
				bitRep.set(columnCounter,1);
			}
		}

		if(values_seen.find(bitRep.to_ulong()) != values_seen.end()){
			for(int columnCounter = 0;columnCounter < columns;columnCounter++){
				printf("%d",userInput[rowCounter][columnCounter]);
			}
			values_seen.insert(bitRep.to_ulong());
		}
	}
}

void PrintUniqueRowsInBooleanMatrixON2(int userInput[][column],int rowsUserInput,int columnUserInput){
	bool isUnique = false;
	int innerRowCounter;
	for(int outerRowCounter=0;outerRowCounter < rowsUserInput;outerRowCounter++){
		for(innerRowCounter=0;innerRowCounter < rowsUserInput;innerRowCounter++){
			if(innerRowCounter == outerRowCounter){
				continue;
			}
			isUnique = true;
			for(int columnCounter=0;columnCounter < columnUserInput;columnCounter++){
				if(userInput[outerRowCounter][columnCounter] != userInput[innerRowCounter][columnCounter]){
					isUnique = false;
					break;
				}
			}
			if(isUnique){
				for(int columnCounter = 0;columnCounter < columns;columnCounter++){
					printf("%d",userInput[outerRowCounter][columnCounter]);
				}
			}
		}
	}
}




//int main(){
//	return -1;
//}

