/*
 * MergeTwoArraysOfSizesMN.cpp
 *
 *  Created on: Feb 6, 2013
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

void MergeTwoArrays(int userInput1[],int sizeOfArray1,int userInput2[],int sizeOfArray2){
	int *ptr ;
	ptr=(int *)malloc((sizeOfArray1+sizeOfArray2)*sizeof(int));
	int *headArray =ptr;
	int counterAuxArray = sizeOfArray1+sizeOfArray2;
	int counterArray1 =0,counterArray2=0;
	while(counter){
		if(userInput1[counterArray1] == userInput2[counterArray2]){
			*ptr = userInput1[counterArray1];
			counterArray1++;
		}else{
			if(userInput1<userInput2){
				*ptr = userInput1[counterArray1];
				counterArray1++;
			}else{
				*ptr = userInput2[counterArray2];
				counterArray2++;
			}
		}
		ptr++;
	}
	return headArray;
}

/*
 * Algorithm:
 * As described in geeks for geeks
 */
void MergeTwoArrays(int userInput1[],int sizeOfArray1,int userInput2[],int sizeOfArray2){

	int indexFromEnd = sizeOfArray1-1;
	for(int crawlerFirstArray =sizeOfArray1-1;crawlerFirstArray>=0;crawlerFirstArray--){
		if(userInput1[crawlerFirstArray] != -1){
			userInput1[indexFromEnd] = userInput1[crawlerFirstArray];
			userInput1[crawlerFirstArray]=-1;
		}
	}

	int headOfFirstArray = indexFromEnd;
	int headOfSecondArray = 0;
	int counter = 0;
	while(counter < sizeOfArray1+sizeOfArray2){
		if(userInput1[counterArray1] == userInput2[counterArray2]){
			userInput1[counter] = userInput1[counterArray1];
			headOfFirstArray++;
		}else{
			if(userInput1<userInput2){
				userInput1[counter] = userInput1[counterArray1];
				headOfFirstArray++;
			}else{
				userInput1[counter] = userInput2[counterArray2];
				headOfSecondArray++;
			}
		}
		counter++;
	}
}



//int main(){
//	return -1;
//}

