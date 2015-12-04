# Automatically generated file, do not edit
SET(BII_IS_DEP False)


# LIBRARY gordonb_fizzbuzz ##################################
# with interface gordonb_fizzbuzz_interface

# Source code files of the library
SET(BII_LIB_SRC  fizzbuzz.cpp
			fizzbuzz.h)
# STATIC by default if empty, or SHARED
SET(BII_LIB_TYPE )
# Dependencies to other libraries (user2_block2, user3_blockX)
SET(BII_LIB_DEPS gordonb_fizzbuzz_interface )
# System included headers
SET(BII_LIB_SYSTEM_HEADERS sstream string)
# Required include paths
SET(BII_LIB_INCLUDE_PATHS )


# Executables to be created
SET(BII_BLOCK_EXES main
			test_suites_fizzbuzz_test)

SET(BII_BLOCK_TESTS test_suites_fizzbuzz_test)


# EXECUTABLE test_suites_fizzbuzz_test ##################################

SET(BII_test_suites_fizzbuzz_test_SRC test_suites/fizzbuzz_test.cpp)
SET(BII_test_suites_fizzbuzz_test_DEPS gordonb_fizzbuzz_interface google_gtest gordonb_fizzbuzz)
# System included headers
SET(BII_test_suites_fizzbuzz_test_SYSTEM_HEADERS stdio.h string)
# Required include paths
SET(BII_test_suites_fizzbuzz_test_INCLUDE_PATHS ${BII_PROJECT_ROOT}/deps/google/gtest/include)


# EXECUTABLE main ##################################

SET(BII_main_SRC main.cpp)
SET(BII_main_DEPS gordonb_fizzbuzz_interface gordonb_fizzbuzz)
# System included headers
SET(BII_main_SYSTEM_HEADERS climits cstdlib cstring iostream stdio.h stdlib.h)
# Required include paths
SET(BII_main_INCLUDE_PATHS )
