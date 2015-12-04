/* Test suite for fizzbuzz.cpp */
#include "stdio.h"
#include <string>

#include "gtest/gtest.h"

#include "../fizzbuzz.h"

// Tests Fizz_Buzz()
// Tests that the number 1 prints out the string representation of 1
TEST(Fizz_Buzz, In_1_Out_1) {

	std::string out = Fizz_Buzz(3);

    EXPECT_STREQ("3", out.c_str());
}

// Tests Fizz_Buzz()
// Tests that several numbers not divisible by 3 or 5 
// print the string representation of that number
TEST(Fizz_Buzz, In_Not3Or5_Out_Numeral) {

	EXPECT_STREQ("17", Fizz_Buzz(17).c_str());
	EXPECT_STREQ("19", Fizz_Buzz(19).c_str());
	EXPECT_STREQ("22", Fizz_Buzz(22).c_str());

	EXPECT_STREQ("1111", Fizz_Buzz(1111).c_str());
	EXPECT_STREQ("1112", Fizz_Buzz(1112).c_str());
	EXPECT_STREQ("9202", Fizz_Buzz(9202).c_str());

	EXPECT_STREQ("5555554", Fizz_Buzz(5555554).c_str());

	EXPECT_STREQ("294967294", Fizz_Buzz(294967294).c_str());
}


// Tests Fizz_Buzz()
// Tests that 3 prints fizz
TEST(Fizz_Buzz, In_3_Out_Fizz) {

	std::string out = Fizz_Buzz(3);

    EXPECT_STREQ("fizz", out.c_str());
}

// Tests Fizz_Buzz()
// Tests that the number 5 prints out buzz
TEST(Fizz_Buzz, In_5_Out_buzz) {

	std::string out = Fizz_Buzz(5);

    EXPECT_STREQ("buzz", out.c_str());
}


// Tests Fizz_Buzz()
// Tests that the number 5 prints out buzz
TEST(Fizz_Buzz, In_15_Out_FizzBuzz) {

	std::string out = Fizz_Buzz(15);

    EXPECT_STREQ("fizzbuzz", out.c_str());
}


// Tests Fizz_Buzz()
// Tests that several numbers divisible by 3 but not 5 print fizz
TEST(Fizz_Buzz, In_DivBy3_Out_Fizz) {

	EXPECT_STREQ("fizz", Fizz_Buzz(18).c_str());
	EXPECT_STREQ("fizz", Fizz_Buzz(21).c_str());
	EXPECT_STREQ("fizz", Fizz_Buzz(27).c_str());

	EXPECT_STREQ("fizz", Fizz_Buzz(1113).c_str());
	EXPECT_STREQ("fizz", Fizz_Buzz(99999).c_str());
	EXPECT_STREQ("fizz", Fizz_Buzz(457626).c_str());

	EXPECT_STREQ("fizz", Fizz_Buzz(6366966).c_str());

	EXPECT_STREQ("fizz", Fizz_Buzz(394937292).c_str());
}



// Tests Fizz_Buzz()
// Tests that several numbers divisible by 5 but not 3 print buzz
TEST(Fizz_Buzz, In_DivBy5_Out_Buzz) {

	EXPECT_STREQ("buzz", Fizz_Buzz(10).c_str());
	EXPECT_STREQ("buzz", Fizz_Buzz(25).c_str());
	EXPECT_STREQ("buzz", Fizz_Buzz(35).c_str());

	EXPECT_STREQ("buzz", Fizz_Buzz(1235).c_str());
	EXPECT_STREQ("buzz", Fizz_Buzz(10000).c_str());
	EXPECT_STREQ("buzz", Fizz_Buzz(845245).c_str());

	EXPECT_STREQ("buzz", Fizz_Buzz(1259275).c_str());

	EXPECT_STREQ("buzz", Fizz_Buzz(394937300).c_str());
}

// Tests Fizz_Buzz()
// Tests that several numbers divisible by 5 and 3 print fizzbuzz
TEST(Fizz_Buzz, In_DivBy5And3_Out_Buzz) {

	EXPECT_STREQ("fizzbuzz", Fizz_Buzz(15).c_str());
	EXPECT_STREQ("fizzbuzz", Fizz_Buzz(30).c_str());
	EXPECT_STREQ("fizzbuzz", Fizz_Buzz(45).c_str());

	EXPECT_STREQ("fizzbuzz", Fizz_Buzz(1230).c_str());
	EXPECT_STREQ("fizzbuzz", Fizz_Buzz(10005).c_str());
	EXPECT_STREQ("fizzbuzz", Fizz_Buzz(18510).c_str());

	EXPECT_STREQ("fizzbuzz", Fizz_Buzz(1473510).c_str());

	EXPECT_STREQ("fizzbuzz", Fizz_Buzz(488191935).c_str());
}

int main(int argc, char **argv) {
  printf("Running main() from sample1\n");
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}