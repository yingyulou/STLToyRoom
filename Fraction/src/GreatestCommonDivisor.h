/*
    GreatestCommonDivisor.h
    =======================
        Class __GreatestCommonDivisor header.
*/

#ifndef __FRACTION_GREATEST_COMMON_DIVISOR_H
#define __FRACTION_GREATEST_COMMON_DIVISOR_H

namespace Fraction_
{

////////////////////////////////////////////////////////////////////////////////
// Class __GreatestCommonDivisor
////////////////////////////////////////////////////////////////////////////////

template <long long LHS, long long RHS>
struct __GreatestCommonDivisor
{
    static constexpr long long __Value = __GreatestCommonDivisor<RHS, LHS % RHS>::__Value;
};


template <long long LHS>
struct __GreatestCommonDivisor<LHS, 0>
{
    static constexpr long long __Value = LHS;
};


}  // End namespace Fraction_


#endif  // __FRACTION_GREATEST_COMMON_DIVISOR_H
