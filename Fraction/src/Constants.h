/*
    Constants.h
    ===========
        Constants define.
*/

#pragma once

#include "Fraction.h"

namespace Fraction_
{

////////////////////////////////////////////////////////////////////////////////
// Constants
////////////////////////////////////////////////////////////////////////////////

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


}  // // End namespace Fraction_
