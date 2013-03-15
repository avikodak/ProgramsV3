/*
 * RemoveSpaces.cpp
 *
 *  Created on: Jan 25, 2013
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

char *RemovesSpacesFromString(char *userInput){
	char *ptrToSpace = userInput;
	char *inputCrawler = userInput;
	while(*ptrToSpace != ' '&& *ptrToSpace != '\0'){
		ptrToSpace++;
	}

	inputCrawler = ptrToSpace+1;

	while(*inputCrawler != '\0'){
		if(*inputCrawler != ' '){
			*ptrToSpace = *inputCrawler;
			ptrToSpace++;
		}
		inputCrawler++;
	}

	*ptrToSpace='\0';
	return userInput;
}

char *RemoveSpacesFromStringQueue(char *userInput){
	queue<char> charactersFromString;
	char *crawlerUserInput = userInput;
	while(*crawlerUserInput != '\0'){
		if(*crawlerUserInput != ' '){
			charactersFromString.push(char(*crawlerUserInput));
		}
		crawlerUserInput++;
	}
	crawlerUserInput= userInput;
	char topChar;
	while(!charactersFromString.empty()){
		topChar = charactersFromString.front();
		*crawlerUserInput = topChar;
		charactersFromString.pop();
		crawlerUserInput++;
	}
	crawlerUserInput='\0';
	printf("%s",userInput);
	return userInput;
}

int main(){
	char inputArray[]="This sentence has no spaces after the process";
	char *ptr = inputArray;
	RemovesSpacesFromString(ptr);
	RemoveSpacesFromStringQueue(ptr);
	return -1;
}




