# Any

## Introduction

The std::any implementation. For learning only.

To use this module, simply include the ```Any``` herader file:

``` Cpp
#include <Any/Any>
```

All classes and functions are located under the namespace ```Any_```.

## Example

``` Cpp
Any_::Any anyVal(0);

cout << anyVal.get<int>() << endl;  // 0
```
