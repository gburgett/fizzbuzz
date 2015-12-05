/*	fizzbuzz.cpp
 *	 implements fizzbuzz algorithm
 */

#include <string>
#include <sstream>
#include "fizzbuzz.h"



/* not exported (because it doesn't exist in fizzbuzz.h) */
std::string to_string(int n) {
	std::string Result;

	std::ostringstream convert;
	convert << n;
	Result = convert.str();
	return Result;
}

std::string Fizz_Buzz(int line) {

	if (line % 3 == 0 && line % 5 == 0) {
		return "fizzbuzz";
	}
	
	if (line % 5 == 0) {
		return "buzz";
	}
	
	if (line % 3 == 0) {
		return "fizz";
	}

	return to_string(line);
}