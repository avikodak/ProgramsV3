/*
 * temp.cpp
 *
 *  Created on: Feb 15, 2013
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

int main(){
	int scores[]={2,1,2,2,5,3,2,20,5,20,15,2,2,1,2,2,2,2,2,2,2,2,2};
	int values[21];
	values[0] = 2;
	values[1] = 108;
	values[2] = 200;
	values[3] = 201;
	values[5] = 1;
	values[15] = 203;
	values[20] = 202;

	int NA[21];
	NA[1] = 205;
	NA[2] = 206;
	NA[3] = 207;
	NA[5] = 210;
	NA[15] = 209;
	NA[20] = 208;

		int sum = 0;
		for(unsigned int counter=2000;counter<2000+(sizeof(scores)/sizeof(scores[0]));counter++){
			printf("(%d,%d),\n",counter,values[scores[counter%2000]]);
			printf("(%d,%d),\n",counter,2);
			printf("(%d,%d),\n",counter,NA[scores[counter%2000]]);
			sum += scores[counter%2000];
		}
	//	printf("\nSum = %d",sum);
	//
		int scores2[] ={2,1,2,2,3,3,2,20,5,20,15,1,1,1,2,2,2,2,1,2,2,2,2,5};
		//int sum =0;
		for(unsigned int counter=2025;counter<2025+(sizeof(scores2)/sizeof(scores2[0]));counter++){
			printf("(%d,%d),\n",counter,values[scores2[counter%2025]]);
			printf("(%d,%d),\n",counter,2);
			printf("(%d,%d),\n",counter,NA[scores2[counter%2025]]);
			sum += scores2[counter%2025];
		}
	//	printf("\nSum = %d",sum);
	//for(int counter=2000;counter<=2050)

	int scores3[]={3,2,2,5,3,2,20,5,20,15,2,2,1,2,2,2,2,2,2,2,2,2};
	//int sum=0;
	for(unsigned int counter=2051;counter<2051+(sizeof(scores3)/sizeof(scores3[0]));counter++){
		printf("(%d,%d),\n",counter,values[scores3[counter%2051]]);
		printf("(%d,%d),\n",counter,2);
		printf("(%d,%d),\n",counter,NA[scores3[counter%2051]]);
		sum += scores3[counter%2051];
	}
//	printf("\n%d",sum);
}



//int main(){
//	return -1;
//}

