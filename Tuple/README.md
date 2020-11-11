# Tuple

## Introduction

The std::tuple implementation. For learning only.

To use this module, simply include the ```Tuple``` herader file:

``` Cpp
#include <Tuple/Tuple>
```

All classes and functions are located under the namespace ```Tuple_```.

## Construction

Simply use the following code to construct a tuple:

``` Cpp
Tuple<int, double, char, string, vector<int>> sampleTuple(1, 2., 'c', "abc", {1, 2, 3});
```

## Get

Use ```Get<N>(Tuple)``` to get a tuple value:

``` Cpp
cout << Get<3>(sampleTuple);  // abc
```

## Make Tuple

Use ```MakeTuple(Args...)``` to construct a tuple:

``` Cpp
auto sampleMakedTuple = MakeTuple(1, 2., 'c');
```

## Tuple Size

Use ```TupleSize<Type>::Size``` to get the size of a tuple:

``` Cpp
cout << TupleSize<decltype(sampleTuple)>::Size;  // 5
```

## Tuple Type

Use ```TupleType<N, Type>::Type``` to get the type of a tuple value:

``` Cpp
TupleType<3, decltype(sampleTuple)>::Type sampleStr = "abc";  // string
```
