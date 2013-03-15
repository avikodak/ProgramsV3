/*
 * CheckForPairWithSumToX.cpp
 *
 *  Created on: Feb 2, 2013
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

//Tested
void PrintPairsForGivenSum(int userInput[],int sizeOfArray,int targetSum){
	set<int> setOfUserInputs;
	set<int>::iterator keyIterator;
	for(int counter=0;counter < sizeOfArray;counter++){
		if((keyIterator = setOfUserInputs.find(targetSum - userInput[counter])) != setOfUserInputs.end()){
			cout << "(" << userInput[counter] << ","<<targetSum - userInput[counter]<< ")" << endl;
			cout << "("<<targetSum - userInput[counter]<<","<<userInput[counter]<< ")" << endl;
			setOfUserInputs.erase(keyIterator);
		}else{
			setOfUserInputs.insert(userInput[counter]);
		}
	}
}

void FindPairsForGivenSum(int userInput[],int sizeOfArray,int targetSum){
	int innerCounter;
	for(int outerCounter=0;outerCounter < sizeOfArray;outerCounter++){
		for(innerCounter=0;innerCounter < sizeOfArray;innerCounter++){
			if(outerCounter == innerCounter){
				continue;
			}
			if(userInput[outerCounter] + userInput[innerCounter] == targetSum){
				cout << "("<<userInput[outerCounter]<<","<<userInput[innerCounter]<< ")" << endl;
				//cout << "("<<userInput[innerCounter]<<","<<userInput[outerCounter]<< ")" << endl;
			}
		}
	}
}

int FindPairsGivenSumBinarySearch(int userInput[],int startOfArray,int endOfArray,int key){
	if(startOfArray >endOfArray){
		return INT_MAX;
	}else{
		int middle = (startOfArray + endOfArray)/2;
		if(userInput[middle] == key){
			return key;
		}
		if(userInput[middle] > key){
			return FindPairsGivenSumBinarySearch(userInput,startOfArray,middle-1,key);
		}else{
			return FindPairsGivenSumBinarySearch(userInput,middle+1,endOfArray,key);
		}
	}
}

void FindPairsBigOhNLogN(int userInput[],int sizeOfArray,int targetSum){
	//sorting the user input array
	sort(userInput,userInput+sizeOfArray);
	int opFromBS;
	for(int counter=0;counter < sizeOfArray;counter++){
		if(targetSum - userInput[counter] < userInput[counter]){
			opFromBS = FindPairsGivenSumBinarySearch(userInput,0,counter,targetSum-userInput[counter]);
		}else{
			opFromBS = FindPairsGivenSumBinarySearch(userInput,counter,sizeOfArray,targetSum-userInput[counter]);
		}

		if(opFromBS!=INT_MAX){
			cout << "(" << userInput[counter] << "," << opFromBS << ")" << endl;
			//cout << "("<<opFromBS<<","<< userInput[counter]<<  ")" << endl;
		}
	}
}

int main(){
	int A[] = {16,0, 4, 45, 6, 10, 9,7};
	int n = 16;
	int arr_size = 9;

	FindPairsBigOhNLogN(A, arr_size, n);


	return -1;
}

