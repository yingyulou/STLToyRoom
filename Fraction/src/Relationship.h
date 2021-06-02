/*
    Relationship.h
    ==============
        Fraction relationships operator define.
*/

#pragma once

#include "Fraction.h"
#include "CommonPoints.h"

namespace Fraction_
{

////////////////////////////////////////////////////////////////////////////////
// Class FractionEqual
////////////////////////////////////////////////////////////////////////////////

template <typename LHS, typename RHS>
struct FractionEqual
{
    static constexpr bool Value =
        LHS::Numerator * __CommonPoints<LHS::Denominator, RHS::Denominator>::__LValue ==
        RHS::Numerator * __CommonPoints<LHS::Denominator, RHS::Denominator>::__RValue;
};


////////////////////////////////////////////////////////////////////////////////
// Class FractionNotEqual
////////////////////////////////////////////////////////////////////////////////

template <typename LHS, typename RHS>
struct FractionNotEqual
{
    static constexpr bool Value =
        LHS::Numerator * __CommonPoints<LHS::Denominator, RHS::Denominator>::__LValue !=
        RHS::Numerator * __CommonPoints<LHS::Denominator, RHS::Denominator>::__RValue;
};


////////////////////////////////////////////////////////////////////////////////
// Class FractionLess
////////////////////////////////////////////////////////////////////////////////

template <typename LHS, typename RHS>
struct FractionLess
{
    static constexpr bool Value =
        LHS::Numerator * __CommonPoints<LHS::Denominator, RHS::Denominator>::__LValue <
        RHS::Numerator * __CommonPoints<LHS::Denominator, RHS::Denominator>::__RValue;
};


////////////////////////////////////////////////////////////////////////////////
// Class FractionLessEqual
////////////////////////////////////////////////////////////////////////////////

template <typename LHS, typename RHS>
struct FractionLessEqual
{
    static constexpr bool Value =
        LHS::Numerator * __CommonPoints<LHS::Denominator, RHS::Denominator>::__LValue <=
        RHS::Numerator * __CommonPoints<LHS::Denominator, RHS::Denominator>::__RValue;
};


////////////////////////////////////////////////////////////////////////////////
// Class FractionGreater
////////////////////////////////////////////////////////////////////////////////

template <typename LHS, typename RHS>
struct FractionGreater
{
    static constexpr bool Value =
        LHS::Numerator * __CommonPoints<LHS::Denominator, RHS::Denominator>::__LValue >
        RHS::Numerator * __CommonPoints<LHS::Denominator, RHS::Denominator>::__RValue;
};


////////////////////////////////////////////////////////////////////////////////
// Class FractionGreaterEqual
////////////////////////////////////////////////////////////////////////////////

template <typename LHS, typename RHS>
struct FractionGreaterEqual
{
    static constexpr bool Value =
        LHS::Numerator * __CommonPoints<LHS::Denominator, RHS::Denominator>::__LValue >=
        RHS::Numerator * __CommonPoints<LHS::Denominator, RHS::Denominator>::__RValue;
};


}  // End namespace Fraction_
