# **Sorting numbers** [![Build Status](https://travis-ci.com/puchkovki/suptertask.svg?token=Ux37jVUbGCZXFoXn5mcW&branch=master)](https://travis-ci.com/puchkovki/suptertask)

This tool provides function for converting numbers into binary representation.
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