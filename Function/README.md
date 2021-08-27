# Function

## Introduction

The STL std::function implementation. For learning only.

To use this module, simply include the ```Function``` herader file:

``` Cpp
#include <Function/Function>
```

All classes and functions are located under the namespace ```Function_```.

## Example

``` Cpp
Function_::Function<int (int, int)> funcObj([] (int lhs, int rhs) { return lhs + rhs; });

cout << funcObj(1, 2);  // 3
```
