/**
* CS V15 Data Structures and Algorithms
* CRN: 70342
* Assignment: ex02-binarysearch
*
* Statement of code ownership: I hereby state that I have written all of this
* code and I have not copied this code from any other person or source.
*
* @author Efrain Santiago
*/
#include <iostream>
using std::cout;
using std::endl;

namespace edu {
	namespace vcccd {
		namespace vc {
			namespace csv15 {
				template <class T>
				int64_t binarysearch(T value, T array[], size_t size) {
					if (size == 0) return -1;
					size_t guess = size / 2;
					if (value == array[guess]) {
						return guess;
					}
					if (value < array[guess]) {
						return binarysearch(value, array, guess);
					}
					else if (value > array[guess]) {
						int64_t index = binarysearch(value, array + guess + 1, guess);
						if (index == -1) return -1;
						return guess + 1 + index;
					}
				}
			}
		}
	}
}