# Bind

## Introduction

The std::bind implementation. For learning only.

To use this module, simply include the ```Bind``` herader file:

``` Cpp
#include <Bind/Bind>
```

All classes and functions are located under the namespace ```Bind_``` and ```Bind_::Placeholders```.

## Example

``` Cpp
cout

    // 5.
    << Bind_::Bind(divides<double>(), 10., 2.)()
    << endl

    // 5.
    << Bind_::Bind(divides<double>(), Bind_::Placeholders::_1, 2.)(10.)
    << endl

    // 0.2
    << Bind_::Bind(divides<double>(), Bind_::Placeholders::_2, Bind_::Placeholders::_1)(10., 2.)
    << endl;
```
