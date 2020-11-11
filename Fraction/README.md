# Fraction

## Introduction

The std::ratio implementation. For learning only.

To use this module, simply include the ```Fraction``` herader file:

``` Cpp
#include <Fraction/Fraction>
```

All classes and functions are located under the namespace ```Fraction_```.

## Construction

Use ```Fraction<Numerator, Denominator>``` with the ```::Numerator``` and ```::Denominator``` static ```long long``` member to represent a fraction:

``` Cpp
// 1/2
typedef Fraction<1, 2> OneTwo;

// 1/2
cout << OneTwo::Numerator << '/' << OneTwo::Denominator << endl;
```

Any fraction will be automatically approximate:

``` Cpp
// 2/4 => 1/2
typedef Fraction<2, 4> OneTwo;

// 1/2
cout << OneTwo::Numerator << '/' << OneTwo::Denominator << endl;
```

## Fraction Arithmetic

Use the ```FractionAdd```, ```FractionMinus```, ```FractionMultiply```, and ```FractionDivide``` to do fraction calculation:

``` Cpp
// 1/2
typedef Fraction<1, 2> OneTwo;

// 2/3
typedef Fraction<2, 3> TwoThree;

// 2/3 + 1/2 => 7/6
typedef FractionAdd<TwoThree, OneTwo> TwoThreeAddOneTwo;

// 2/3 - 1/2 => 1/6
typedef FractionMinus<TwoThree, OneTwo> TwoThreeMinusOneTwo;

// 2/3 * 1/2 => 1/3
typedef FractionMultiply<TwoThree, OneTwo> TwoThreeMultiplyOneTwo;

// 2/3 / 1/2 => 4/3
typedef FractionDivide<TwoThree, OneTwo> TwoThreeDivideOneTwo;

// 7/6
cout << TwoThreeAddOneTwo::Numerator << '/' << TwoThreeAddOneTwo::Denominator << endl;

// 1/6
cout << TwoThreeMinusOneTwo::Numerator << '/' << TwoThreeMinusOneTwo::Denominator << endl;

// 1/3
cout << TwoThreeMultiplyOneTwo::Numerator << '/' << TwoThreeMultiplyOneTwo::Denominator << endl;

// 4/3
cout << TwoThreeDivideOneTwo::Numerator << '/' << TwoThreeDivideOneTwo::Denominator << endl;
```

## Fraction Comparison

Use the ```FractionEqual```, ```FractionNotEqual```, ```FractionLess```, ```FractionLessEqual```, ```FractionGreater``` and ```FractionGreaterEqual``` with the ```::Value``` static ```bool``` member to do fraction comparison:

``` Cpp
// 1/2
typedef Fraction<1, 2> OneTwo;

// 2/3
typedef Fraction<2, 3> TwoThree;

// 1/2 == 2/3 => false
cout << FractionEqual<OneTwo, TwoThree>::Value << endl;

// 1/2 != 2/3 => true
cout << FractionNotEqual<OneTwo, TwoThree>::Value << endl;

// 1/2 < 2/3 => true
cout << FractionLess<OneTwo, TwoThree>::Value << endl;

// 1/2 <= 2/3 => true
cout << FractionLessEqual<OneTwo, TwoThree>::Value << endl;

// 1/2 > 2/3 => false
cout << FractionGreater<OneTwo, TwoThree>::Value << endl;

// 1/2 >= 2/3 => false
cout << FractionGreaterEqual<OneTwo, TwoThree>::Value << endl;
```

## Constants

The library defines lots of fraction constants:

``` Cpp
typedef Fraction<1, 1000000000000000000000000> YOCTO;
typedef Fraction<1, 1000000000000000000000>    ZEPTO;
typedef Fraction<1, 1000000000000000000>       ATTO;
typedef Fraction<1, 1000000000000000>          FEMTO;
typedef Fraction<1, 1000000000000>             PICO;
typedef Fraction<1, 1000000000>                NANO;
typedef Fraction<1, 1000000>                   MICRO;
typedef Fraction<1, 1000>                      MILLI;
typedef Fraction<1, 100>                       CENTI;
typedef Fraction<1, 10>                        DECI;
typedef Fraction<10, 1>                        DECA;
typedef Fraction<100, 1>                       HECTO;
typedef Fraction<1000, 1>                      KILO;
typedef Fraction<1000000, 1>                   MEGA;
typedef Fraction<1000000000, 1>                GIGA;
typedef Fraction<1000000000000, 1>             TERA;
typedef Fraction<1000000000000000, 1>          PETA;
typedef Fraction<1000000000000000000, 1>       EXA;
typedef Fraction<1000000000000000000000, 1>    ZETTA;
typedef Fraction<1000000000000000000000000, 1> YOTTA;
```
