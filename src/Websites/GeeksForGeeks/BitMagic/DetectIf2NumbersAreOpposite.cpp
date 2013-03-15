/*
 * DetectIf2NumbersAreOpposite.cpp
 *
 *  Created on: Jan 22, 2013
 *      Author: AVINASH
 */
//
// Testing Status - Done
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

bool AreTwoIntegersHaveOppositeSigns(int number1,int number2){
	int XORResult = number1 ^ number2;
	if(XORResult>> 31){
		return true;
	}else{
		return false;
	}
}

bool AreTwoIntergersHaveOppositeSignsAriExp(int number1,int number2){
	if((number1 < 0 && number2 >0) || (number1 >0 && number2<0)){
		return true;
	}
	return false;
}

bool DetectOppositeSignsBitset(int number1,int number2){
	bitset<32> bitRepNumber1(number1);
	bitset<32> bitRepNumber2(number2);
	if((bitRepNumber1[31]||bitRepNumber2[31])){
		return true;
	}
	return false;
}

bool DetectOppositeSignsMultiplication(int number1,int number2){
	if(number1*number2 < 0){
		return true;
	}
	return false;
}

//int main(){
//	cout << bool(AreTwoIntegersHaveOppositeSigns(5,-3)) << endl;
//	cout << bool(AreTwoIntegersHaveOppositeSigns(5,3)) << endl;
//	cout << bool(AreTwoIntergersHaveOppositeSignsAriExp(5,-3)) << endl;
//	cout << bool(AreTwoIntergersHaveOppositeSignsAriExp(5,3)) << endl;
//	cout << bool(DetectOppositeSignsBitset(5,-3)) << endl;
//	cout << bool(DetectOppositeSignsBitset(5,3)) << endl;
//	cout << bool(DetectOppositeSignsMultiplication(5,-3)) << endl;
//	cout << bool(DetectOppositeSignsMultiplication(5,3)) << endl;
//	return -1;
//}
