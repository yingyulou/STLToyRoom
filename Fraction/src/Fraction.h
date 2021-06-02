/*
    Fraction.h
    ==========
        Class Fraction header.
*/

#pragma once

#include "GreatestCommonDivisor.h"

namespace Fraction_
{

////////////////////////////////////////////////////////////////////////////////
// Class Fraction
////////////////////////////////////////////////////////////////////////////////

template <long long OriNumerator, long long OriDenominator>
struct Fraction
{
    static constexpr long long Numerator = OriNumerator /
        __GreatestCommonDivisor<OriNumerator, OriDenominator>::__Value;

    static constexpr long long Denominator = OriDenominator /
        __GreatestCommonDivisor<OriNumerator, OriDenominator>::__Value;
};


}  // End namespace Fraction_
