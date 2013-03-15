/*
 * ReverseString.cpp
 *
 *  Created on: Jan 21, 2013
 *      Author: AVINASH
 */
//
// Testing Status - Checked All Methods except the last method which is commented
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

string ReverseString(string userInput){
	int lengthOfString = userInput.length();
	if(lengthOfString == 1){
		return userInput;
	}
	string leftString = userInput.substr(0,lengthOfString/2);
	string rightString = userInput.substr(lengthOfString/2,lengthOfString);
	return ReverseString(rightString)+ReverseString(leftString);
}

string ReverseString(char *userInput){
	if(*userInput != '\0'){
		string ResultingReverseString = ReverseString(++userInput);
		userInput--;
		char temp = *userInput;
		ResultingReverseString.push_back(temp);
		return ResultingReverseString;
	}
	return "$";
}

string ReverseStringIterator(char *userInput){
	string reverseString;
	int count=0;
	while(*userInput!='\0'){
		userInput++;
		count++;
	}
	char *endOfString = --userInput;
	char temp;
	while(count--){
		temp = *endOfString;
		reverseString.push_back(temp);
		endOfString--;
	}
	return reverseString;
}

string ReverseStringStack(char *userInput){
	stack<char> auxillaySpace;
	string reverseString;
	while(*userInput!='\0'){
		auxillaySpace.push(*userInput);
		userInput++;
	}
	while(!auxillaySpace.empty()){
		reverseString.push_back(auxillaySpace.top());
		auxillaySpace.pop();
	}
	return reverseString;
}

string ReverseStringIndexes(string userInput){
	int userInputLength = userInput.length();
	char temp;
	for(int counter=0;counter<userInputLength/2;counter++){
		temp = userInput[userInputLength-counter-1];
		userInput[userInputLength-counter-1] = userInput[counter];
		userInput[counter] = temp;
	}
	return userInput;
}

string ReverseStringIterator(string userInput){
	string reverseString;
	for(string::reverse_iterator reverseCrawler = userInput.rbegin();reverseCrawler != userInput.rend();reverseCrawler++){
		reverseString.push_back(*reverseCrawler);
	}
	return reverseString;
}

//int main(){
//	string userInput = "hello world";
//	char *userInput2 = "hello world";
//	string Result = ReverseString(userInput);
//	cout << Result << endl;
//	cout << ReverseString(userInput2).erase(0,1) << endl;
//	cout << ReverseStringIterator(userInput2) << endl;
//	cout << ReverseStringStack(userInput2) << endl;
//	cout << ReverseStringIndexes(userInput2) << endl;
//	cout << ReverseStringIterator(userInput) << endl;
//}


//char *ReverseStringUsingEnd(char *userInput){
//	int userInputLength = strlen(userInput);
//	char *startPtr = userInput;
//	char *endPtr = userInput + userInputLength -1;
//	int counter = 0;
//	char temp;
//	while(counter < userInputLength/2){
//		temp = *endPtr;
//		*endPtr = *startPtr;
//		*startPtr = temp;
//		counter++;
//	}
//	return userInput;
//}
