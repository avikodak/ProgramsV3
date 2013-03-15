/*
 * PrintRowWhichHasMaximumSetBits.cpp
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

int PrintRowsWhichHasMaximumSetBits(int userInput[][columns],int rows,int columns){
	int innerCrawler;
	int maxSetBitsRow = INT_MIN;
	int countSetBits=0;
	for(int outerCrawler=0;outerCrawler < rows;outerCrawler++){
		countSetBits = 0;
		for(innerCrawler=0;innerCrawler < columns;innerCrawler++){
			if(userInput[outerCrawler][innerCrawler] == 1){
				countSetBits++;
			}
		}
		if(maxSetBitsRow < countSetBits){
			maxSetBitsRow = outerCrawler;
		}
	}
}

int BinarySearchCustomisedPrintRowWhichHasMaxSetBits(int userInput[][column],int row,int columns,int startIndex,int endIndex,int rowCrawler,int key){
	if(startIndex > endIndex){
		return -1;
	}

	int middleIndex = (startIndex+endIndex)/2;

	if(userInput[rowCrawler][middleIndex] == key){
		if(userInput[rowCrawler][middleIndex-1] == key){
			return BinarySearchCustomisedPrintRowWhichHasMaxSetBits(userInput,row,columns,startIndex,middleIndex-1,rowCrawler,key);
		}
		return middleIndex;
	}
	return BinarySearchCustomisedPrintRowWhichHasMaxSetBits(userInput,row,columns,middleIndex+1,endIndex,rowCrawler,key);
}


int PrintRowsWhichHasMaximumSetBits(int userInput[][columns],int rows,int columns){
	int maxSetBitsRowIndex= columns,tempMax;
	for(int rowCrawler=0;rowCrawler < rows;rowCrawler++){
		tempMax = BinarySearchCustomisedPrintRowWhichHasMaxSetBits(userInput,rows,columns,0,columns-1,rowCrawler,1);
		if(maxSetBitsRowIndex > tempMax){
			maxSetBitsRowIndex = rowCrawler;
		}
	}
	return maxSetBitsRowCount;
}

int PrintRowsWhichHasMaximumSetBitsBSV2(int userInput[][columns],int rows,int columns){
	int maxSetBitsRowIndex= INT_MAX,tempMax;
	for(int rowCrawler=0;rowCrawler < rows;rowCrawler++){
		tempMax = BinarySearchCustomisedPrintRowWhichHasMaxSetBits(userInput,rows,columns,0,maxSetBitsRowIndex-1,rowCrawler,1);
		if(tempMax != -1){
			if(maxSetBitsRowIndex > tempMax){
				maxSetBitsRowIndex = rowCrawler;
			}
		}
	}
	return maxSetBitsRowCount;
}

int PrintRowsWhichHasMaximumSetBitsON2V2(int userInput[][columns],int rows,int columns){
	int columnCounter;
	int columnCheckFlag=columns;
	int minimumSetBitIndex = columns;
	int setBitsCount=0;
	for(int rowCounter=0;rowCounter<rows;rowCounter++){
		setBitsCount=0;
		for(columnCounter;columnCounter < columnCheckFlag;columnCounter++){
			if(userInput[rowCounter][columnCounter] == 1){
				setBitsCount++;
			}
		}
		if((columns-setBitsCount) < (columns - minimumSetBitIndex)){
			minimumSetBitIndex = columns - setBitsCount;
		}
	}
}




//int main(){
//	return -1;
//}

