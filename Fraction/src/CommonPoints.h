/*
    CommonPoints.h
    ==============
        Class __CommonPoints header.
*/

#pragma once

#include "LeastCommonMultiple.h"

namespace Fraction_
{

////////////////////////////////////////////////////////////////////////////////
// Class __CommonPoints
////////////////////////////////////////////////////////////////////////////////

template <long long LHS, long long RHS>
struct __CommonPoints
{
    static constexpr long long __LValue = __LeastCommonMultiple<LHS, RHS>::__Value / LHS;
    static constexpr long long __RValue = __LeastCommonMultiple<LHS, RHS>::__Value / RHS;
};


}  // End namespace Fraction_
