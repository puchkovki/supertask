# **Sorting numbers** [![Build Status](https://travis-ci.com/puchkovki/supertask.svg?branch=master)](https://travis-ci.com/puchkovki/supertask)

This tool provides function for sorting integer numbers.
## *Building*
```
$ cmake -H. -B_builds -DBUILD_TESTS=ON
$ cmake --build _builds
```
## *Archiving packages*
```
cmake --build _build --target package
```
## *Testing*
```
$ cmake -H. -B_builds -DBUILD_TESTS=ON
$ cmake --build _builds
$ cmake --build _builds --target test
```

## *Running DEMO*
```
./_builds/demo 
5 3 # Enter numbers
3 5 # Get sorted array
```
