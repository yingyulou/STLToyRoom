/*
    LeastCommonMultiple.h
    =====================
        Class __LeastCommonMultiple header.
*/

#pragma once

#include "GreatestCommonDivisor.h"

namespace Fraction_
{

////////////////////////////////////////////////////////////////////////////////
// Class __LeastCommonMultiple
////////////////////////////////////////////////////////////////////////////////

template <long long LHS, long long RHS>
struct __LeastCommonMultiple
{
    static constexpr long long __Value = LHS * RHS /
        __GreatestCommonDivisor<LHS, RHS>::__Value;
};


}  // End namespace Fraction_
