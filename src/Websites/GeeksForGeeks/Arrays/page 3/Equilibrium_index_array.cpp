/*
 * Equilibrium_index_array.cpp
 *
 *  Created on: Feb 11, 2013
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


int FindEquilibriumIndexUsingAuxTwoArrays(int userInput[],int sizeOfArray){
	int sumFromLeft[sizeOfArray];
	int sumFromRight[sizeOfArray];

	//For the first element the left side sum will be zero since there are no elements on left side
	sumFromLeft[0] = 0;
	//For the last element the rigt side sum will be zero since there are no elements on the right side
	sumFromRight[sizeOfArray-1] = 0;

	//setting the left sums
	for(int arrayCounter=1;arrayCounter < sizeOfArray;arrayCounter++){
		sumFromLeft[arrayCounter] = sumFromLeft[arrayCounter-1] + userInput[arrayCounter];
	}

	//setting the right sums
	for(int arrayCounter=sizeOfArray-2;arrayCounter >= 0;arrayCounter--){
		sumFromRight[arrayCounter] = sumFromRight[arrayCounter+1] + userInput[arrayCounter];
	}

	for(int arrayCounter=0;arrayCounter < sizeOfArray;arrayCounter++){
		if(sumFromLeft[arrayCounter] == sumFromRight[arrayCounter]){
			return arrayCounter;
		}
	}
}

int FindEquilibriumIndexUsingOneAuxArray(int userInput[],int sizeOfArray){
	int sumFromRight[sizeOfArray];
	//For the last element the rigt side sum will be zero since there are no elements on the right side
	sumFromRight[sizeOfArray-1] = 0;

	//setting the right sums
	for(int arrayCounter=sizeOfArray-2;arrayCounter >= 0;arrayCounter--){
		sumFromRight[arrayCounter] = sumFromRight[arrayCounter+1] + userInput[arrayCounter];
	}

	int sumFromLeft=0;

	for(int arrayCounter = 0;arrayCounter < sizeOfArray;arrayCounter++){
		if(sumFromLeft == sumFromRight[arrayCounter]){
			return arrayCounter;
		}
		sumFromLeft += userInput[arrayCounter];
	}
}


int FindEquilibriumIndexRecursion(int userInput[],int sizeOfArray,int currentIndex,int sumFromLeft,int &sumFromRight,int &EquilibriumIndex){
	if(currentIndex > sizeOfArray){
		return 0;
	}
	sumFromRight = FindEquilibriumIndexRecursion(userInput,sizeOfArray,currentIndex+1,sumFromLeft+userInput[currentIndex],sumFromRight);
	if(sumFromLeft == sumFromRight){
		EquilibriumIndex= currentIndex;
	}
	sumFromRight += userInput[currentIndex];
}

int DriverForRecursiveEquilibrium(int userInput[],int sizeOfArray){
	int equi_index =-1;
	FindEquilibriumIndexRecursion(userInput,sizeOfArray,0,0,0,equi_index);
	if(equi_index == -1){
		printf("Equilibrium index is not found");
	}else{
		printf("Equilibrium index is %d",equi_index);
	}
}

//For the last index we are considering the sum of elements in the right side as zero
//we can also take this the boundary case and can be escaped appropriately
int FindEquilibriumIndex(int userInput[],int sizeOfArray){
	int innerCounter;
	for(int outerCounter=0;outerCounter < sizeOfArray;outerCounter++){
		int sumLeft=0,sumRight=0;
		for(innerCounter = 0 ; innerCounter < outerCounter;innerCounter++){
			sumLeft += userInput[innerCounter];
		}
		for(innerCounter = outerCounter+1;innerCounter < sizeOfArray;innerCounter++){
			sumRight += userInput[outerCounter];
		}
		if(sumLeft == sumRight){
			return outerCounter;
		}
	}
}


int FindEquilibriumIndexStack(int userInput[],int sizeOfArray){
	//for(int crawler=0;)
}

//int main(){
//	return -1;
//}

