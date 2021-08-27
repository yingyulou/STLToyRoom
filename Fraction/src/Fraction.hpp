/*
    Fraction.hpp
    ============
        Class Fraction implementation.
*/

#pragma once

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


////////////////////////////////////////////////////////////////////////////////
// Class __LeastCommonMultiple
////////////////////////////////////////////////////////////////////////////////

template <long long LHS, long long RHS>
struct __LeastCommonMultiple
{
    static constexpr long long __Value = LHS * RHS /
        __GreatestCommonDivisor<LHS, RHS>::__Value;
};


////////////////////////////////////////////////////////////////////////////////
// Class __CommonPoints
////////////////////////////////////////////////////////////////////////////////

template <long long LHS, long long RHS>
struct __CommonPoints
{
    static constexpr long long __LValue = __LeastCommonMultiple<LHS, RHS>::__Value / LHS;
    static constexpr long long __RValue = __LeastCommonMultiple<LHS, RHS>::__Value / RHS;
};


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