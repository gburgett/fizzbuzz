PROJECT( fizzbuzz )
cmake_minimum_required(VERSION 3.0)

# Set project layout variables
SET(BII_PROJECT_ROOT "C:/Users/Gordon/Documents/projects/cpp/fizzbuzz")
SET(BII_BLOCKS_DIR blocks)
SET(BII_DEPS_DIR deps)
SET(BII_LIB_DIR lib)
SET(BII_CMAKE_DIR cmake)
SET(BII_BIN_DIR bin)
set(CMAKE_MODULE_PATH "${BII_PROJECT_ROOT}/blocks"
					  "${BII_PROJECT_ROOT}/deps")

# inclusion of general biicode macros, biicode.cmake 
INCLUDE(biicode.cmake) 
IF (${CMAKE_SYSTEM_NAME} STREQUAL "Arduino")
	OPTION(BII_DEPS_SYSTEM "Handle deps as SYSTEM, avoiding warnings" OFF)
ELSE()
	OPTION(BII_DEPS_SYSTEM "Handle deps as SYSTEM, avoiding warnings" ON)
ENDIF()
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BII_PROJECT_ROOT}/bin)
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${BII_PROJECT_ROOT}/bin)
SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${BII_PROJECT_ROOT}/bin)

SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${BII_PROJECT_ROOT}/lib)
SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE ${BII_PROJECT_ROOT}/lib)
SET(CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG ${BII_PROJECT_ROOT}/lib)

# Including /blocks and /deps directories
INCLUDE_DIRECTORIES(${BII_PROJECT_ROOT}/blocks)
IF(BII_DEPS_SYSTEM)
	INCLUDE_DIRECTORIES(SYSTEM ${BII_PROJECT_ROOT}/deps)
ELSE()
	INCLUDE_DIRECTORIES(${BII_PROJECT_ROOT}/deps)
ENDIF()
ADD_DEFINITIONS(-DBIICODE)
SET(BIICODE_ENV_DIR "C:/Users/Gordon/.biicode")

#artifact to allow upstream configurations
BII_PREBUILD_STEP(deps/google/gtest)
BII_PREBUILD_STEP(blocks/gordonb/fizzbuzz)

# Enable tests with CTest
enable_testing()
# Creating a custom target which will bring associated
# all the test targets
add_custom_target(biitest)

# Inclusion of the blocks affected by the build
BII_INCLUDE_BLOCK(deps/google/gtest)
BII_INCLUDE_BLOCK(blocks/gordonb/fizzbuzz)
