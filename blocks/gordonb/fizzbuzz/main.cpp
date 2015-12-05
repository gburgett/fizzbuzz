/* main.cpp
 *  main program to run fizzbuzz
 */

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <climits>
#include <cerrno>
#include <cstring>
#include "fizzbuzz.h"

using namespace std;

bool tryParseInt(char* str, int& result);


int main (int argc,      // Number of strings in array argv
          char *argv[],   // Array of command-line argument strings
          char *envp[]) 
{
  // debug program inputs
  /*for (int j = 0; j < argc; j++){
    cout << argv[j] << "\n";
  }*/

  char* templ = "Usage: %s [number of lines]\n"
   "  Prints fizzbuzz up to the given number of lines.\n";
  int len = strlen(templ) + strlen(argv[0]);

  char usage [len];
  int cx;
  cx = snprintf(usage, len, templ, argv[0]);


 	if (argc < 2) {
 		cout << usage;
 		return -1;
 	}

 	if (argc > 2) {
 		cout << "Please specify only one argument.\n" << usage;
 		return -1;
 	}

 	int numFizzBuzz = 0;
  if (!tryParseInt(argv[1], numFizzBuzz)) {
    
      cout << "input was not a number: '" << argv[1] << "'\n" << usage;
    
    return -1;
  }

  if (numFizzBuzz < 1) {
    cout << "Please enter a number greater than zero \n";
  }

  for (int i = 1; i <= numFizzBuzz; i++) {
  	cout << Fizz_Buzz(i) << "\n";
  }
}



// http://www.kumobius.com/2013/08/c-string-to-int/
bool tryParseInt(char* str, int& result)
{
    char* endPtr = 0;
    errno = 0;
 
    const long longval = std::strtol(str, &endPtr, 10);
 
    if ((longval == LONG_MIN || longval == LONG_MAX) && errno == ERANGE)
    {
        return false;
    }
 
    if (sizeof(long) > sizeof(int)) // let the optimizer do its job
    {
        if (longval > INT_MAX || longval < INT_MIN) // needed for example on linux x64
            return false;
    }
 
    result = static_cast<int>(longval);
    return endPtr == str + strlen(str); // ensure the whole string was parsed
}