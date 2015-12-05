## Fizzbuzz test project
[![Build Status](https://travis-ci.org/gburgett/fizzbuzz.svg?branch=master)](https://travis-ci.org/gburgett/fizzbuzz)

I made this project using biicode to learn a bit of how C++ dependency management is done.  I'm sure it's a lot harder than this normally, but biicode made it easy.

### Getting started!

* Install Biicode https://www.biicode.com/
* In this folder, run `bii init`

### Building the executable

`bii build`

now you have `gordonb_fizzbuzz_main.exe` in the bin/ directory.  Run it with:

`bin/gordonb_fizzbuzz_main.exe [number of lines to print]`

### Run the tests

`bii test`

fizzbuzz runs with google's "googletest" framework: https://github.com/google/googletest
