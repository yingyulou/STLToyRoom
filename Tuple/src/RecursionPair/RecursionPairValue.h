/*
    recursionPairValue.h
    ====================
        Class __RecursionPairValue header.
*/

#pragma once

#include "RecursionPair.h"
#include "RecursionPairType.h"

namespace Tuple_
{

////////////////////////////////////////////////////////////////////////////////
// Class __RecursionPairValue (Template)
////////////////////////////////////////////////////////////////////////////////

template <int N, typename T>
struct __RecursionPairValue;


////////////////////////////////////////////////////////////////////////////////
// Class __RecursionPairValue (One Element Pair)
////////////////////////////////////////////////////////////////////////////////

template <typename T1>
struct __RecursionPairValue<0, __RecursionPair<T1, void>>
{
    typedef __RecursionPair<T1, void> __PairType;
    typedef T1 __ValueType;

    static __ValueType &__Get(__PairType &pairObj) { return pairObj.__first; }
    static const __ValueType &__Get(const __PairType &pairObj) { return pairObj.__first; }
};


////////////////////////////////////////////////////////////////////////////////
// Class __RecursionPairValue (Two Elements Pair)
////////////////////////////////////////////////////////////////////////////////

template <typename T1, typename T2>
struct __RecursionPairValue<0, __RecursionPair<T1, T2>>
{
    typedef __RecursionPair<T1, T2> __PairType;
    typedef T1 __ValueType;

    static __ValueType &__Get(__PairType &pairObj) { return pairObj.__first; }
    static const __ValueType &__Get(const __PairType &pairObj) { return pairObj.__first; }
};


template <typename T1, typename T2>
struct __RecursionPairValue<1, __RecursionPair<T1, T2>>
{
    typedef __RecursionPair<T1, T2> __PairType;
    typedef T2 __ValueType;

    static __ValueType &__Get(__PairType &pairObj) { return pairObj.__second; }
    static const __ValueType &__Get(const __PairType &pairObj) { return pairObj.__second; }
};


////////////////////////////////////////////////////////////////////////////////
// Class __RecursionPairValue (Recursion Pair)
////////////////////////////////////////////////////////////////////////////////

template <typename T1, typename T2, typename T3>
struct __RecursionPairValue<0, __RecursionPair<T1, __RecursionPair<T2, T3>>>
{
    typedef __RecursionPair<T1, __RecursionPair<T2, T3>> __PairType;
    typedef T1 __ValueType;

    static __ValueType &__Get(__PairType &pairObj) { return pairObj.__first; }
    static const __ValueType &__Get(const __PairType &pairObj) { return pairObj.__first; }
};


template <typename T1, typename T2, typename T3>
struct __RecursionPairValue<1, __RecursionPair<T1, __RecursionPair<T2, T3>>>
{
    typedef __RecursionPair<T1, __RecursionPair<T2, T3>> __PairType;
    typedef T2 __ValueType;

    static __ValueType &__Get(__PairType &pairObj) { return pairObj.__second.__first; }
    static const __ValueType &__Get(const __PairType &pairObj) { return pairObj.__second.__first; }
};


template <int N, typename T1, typename T2, typename T3>
struct __RecursionPairValue<N, __RecursionPair<T1, __RecursionPair<T2, T3>>>
{
    typedef __RecursionPair<T1, __RecursionPair<T2, T3>> __PairType;
    typedef typename __RecursionPairType<N, __PairType>::__ValueType __ValueType;

    static __ValueType &__Get(__PairType &pairObj)
    {
        return __RecursionPairValue<N - 1, __RecursionPair<T2, T3>>::__Get(pairObj.__second);
    }


    static const __ValueType &__Get(const __PairType &pairObj)
    {
        return __RecursionPairValue<N - 1, __RecursionPair<T2, T3>>::__Get(pairObj.__second);
    }
};


}  // End namespace Tuple_
