/*
    Operator.h
    ==========
        Fraction operators define.
*/

#ifndef __FRACTION_OPERATOR_H
#define __FRACTION_OPERATOR_H

#include "Fraction.h"
#include "CommonPoints.h"
#include "LeastCommonMultiple.h"

namespace Fraction_
{

////////////////////////////////////////////////////////////////////////////////
// typedef FractionAdd
////////////////////////////////////////////////////////////////////////////////

template <typename LHS, typename RHS>
using FractionAdd = Fraction<

    // Numerator
    LHS::Numerator * __CommonPoints<LHS::Denominator, RHS::Denominator>::__LValue +
    RHS::Numerator * __CommonPoints<LHS::Denominator, RHS::Denominator>::__RValue,

    // Denominator
    __LeastCommonMultiple<LHS::Denominator, RHS::Denominator>::__Value
>;


////////////////////////////////////////////////////////////////////////////////
// typedef FractionMinus
////////////////////////////////////////////////////////////////////////////////

template <typename LHS, typename RHS>
using FractionMinus = Fraction<

    // Numerator
    LHS::Numerator * __CommonPoints<LHS::Denominator, RHS::Denominator>::__LValue -
    RHS::Numerator * __CommonPoints<LHS::Denominator, RHS::Denominator>::__RValue,

    // Denominator
    __LeastCommonMultiple<LHS::Denominator, RHS::Denominator>::__Value
>;


////////////////////////////////////////////////////////////////////////////////
// typedef FractionMultiply
////////////////////////////////////////////////////////////////////////////////

template <typename LHS, typename RHS>
using FractionMultiply = Fraction<

    // Numerator
    LHS::Numerator * RHS::Numerator,

    // Denominator
    LHS::Denominator * RHS::Denominator
>;


////////////////////////////////////////////////////////////////////////////////
// typedef FractionDivide
////////////////////////////////////////////////////////////////////////////////

template <typename LHS, typename RHS>
using FractionDivide = Fraction<

    // Numerator
    LHS::Numerator * RHS::Denominator,

    // Denominator
    LHS::Denominator * RHS::Numerator
>;


}  // End namespace Fraction_


#endif  // __FRACTION_OPERATOR_H
