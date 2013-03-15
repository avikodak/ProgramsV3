/*
 * ProductArraySample.cpp
 *
 *  Created on: Feb 13, 2013
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

int *FindProductArraySample(int userInput[],int sizeOfArray){
	int productArray[sizeOfArray];
	int leftProduct=1,rightProduct=1,innerCounter;
	for(int outerCounter=0;outerCounter<sizeOfArray;outerCounter++){
		leftProduct=2;rightProduct=1;
		for(innerCounter = 0;innerCounter < outerCounter;innerCounter++){
			leftProduct *= userInput[innerCounter];
		}
		for(innerCounter=outerCounter+1;innerCounter<sizeOfArray;innerCounter++){
			rightProduct *= userInput[innerCounter];
		}
		productArray[outerCounter] = leftProduct*rightProduct;
	}
}

int *FindProductArraySampleAuxSpace(int userInput[],int sizeOfArray){
	int leftProduct[sizeOfArray];
	int rightProduct[sizeOfArray];
	int productArray[sizeOfArray];

	leftProduct[0] = 1;
	for(int counter=1;counter<sizeOfArray;counter++){
		leftProduct[counter] = leftProduct[counter-1] * userInput[counter-1];
	}

	rightProduct[sizeOfArray-1] = 1;
	for(int counter = sizeOfArray-2; counter >=0;counter--){
		rightProduct[counter] = rightProduct[counter+1] * userInput[counter+1];
	}

	for(int counter=0;counter< sizeOfArray;counter++){
		productArray[counter] = leftProduct[counter] * rightProduct[counter];
	}
}

int *FindProductArraySampleNoAuxSpace(int userInput[],int sizeOfArray){
	int productArray[sizeOfArray];

	productArray[0] = 1;
	for(int counter=1;counter<sizeOfArray;counter++){
		productArray[counter] = productArray[counter-1] * userInput[counter-1];
	}

	int rightProduct=1;
	for(int counter = sizeOfArray-2;counter>=0;counter--){
		rightProduct *= userInput[counter+1];
		productArray[counter] = rightProduct;
	}

	return productArray;
}

//
// If division operator is allowed
//
int *FindProductArrayWithDivOperator(int userInput[],int sizeOfArray){
	int productArray[sizeOfArray];
	int productOfNumber=1;

	for(int counter=0;counter< sizeOfArray;counter++){
		productOfNumber *= userInput[counter];
	}

	for(int counter=0;counter < sizeOfArray;counter++){
		productArray[counter] = (productOfNumber)/userInput[counter];
	}
}

int DivisionOperatorUsingRecursiveDifference(int dividend,int divisor){

}

int * ProductArrayWithRecursiveDivision(int userInput[],int sizeOfArray){

}

void ProductArrayWithRecursive(int userInput[],int sizeOfArray,int &productArray[],int index,int &rightSideProduct,int leftProduct){
	if(index >= sizeOfArray){
		return;
	}


}

//int main(){
//	return -1;
//}

