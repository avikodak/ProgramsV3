/*
 * CountWordsInString.cpp
 *
 *  Created on: Jan 26, 2013
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

/*
 *This doesn't take care if there are more than 2 spaces consecutively
 */
int CountWordsInSentence(char *userInput){
	char *ptrToUserString = userInput;
	int wordCount=0;
	while(*ptrToUserString != '\0'){
		if(*ptrToUserString==' '){
			wordCount++;
		}
		ptrToUserString++;
	}
	return wordCount+1;
}

int CountWordsInSentenceUniversal(char *userInput){
	char *ptrToUserString = userInput;
	int wordCount=0;
	while(*ptrToUserString != '\0'){
		if(*(ptrToUserString+1) != '\0'){
			if(*ptrToUserString == ' '&& *(ptrToUserString+1) != ' '){
				wordCount++;
			}
			ptrToUserString++;
		}else{
			break;
		}
	}
	printf("%d",wordCount+1);
	return wordCount+1;
}


int main(){
	char inputArray[]="This sentence has no       spaces after the process";
	char *ptr = inputArray;
	CountWordsInSentenceUniversal(ptr);
	return -1;
}




