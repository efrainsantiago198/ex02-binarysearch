/**
* CS V15 Data Structures and Algorithms
* CRN: 70342
* Assignment: ex02-binarysearch
*
* Statement of code ownership: I hereby state that I have written all of this
* code and I have not copied this code from any other person or source.
*
* @author Efrain Santiago
*
*/
#include <iostream>
#include "binarysearch.h"

using std::cout;
using std::endl;

int main(int argc, char *argv[]) {
	int array[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int64_t index = edu::vcccd::vc::csv15::binarysearch(2, array, 11);
	cout << "Index = " << index << endl;
	system("pause");
}