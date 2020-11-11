/*
    LeastCommonMultiple.h
    =====================
        Class __LeastCommonMultiple header.
*/

#ifndef __FRACTION_LEAST_COMMON_MULTIPLE_H
#define __FRACTION_LEAST_COMMON_MULTIPLE_H

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


#endif  // __FRACTION_LEAST_COMMON_MULTIPLE_H
