/*
    recursionPairType.h
    ===================
        Class __RecursionPairType header.
*/

#ifndef __TUPLE_RECURSION_PAIR_TYPE_H
#define __TUPLE_RECURSION_PAIR_TYPE_H

#include "RecursionPair.h"

namespace Tuple_
{

////////////////////////////////////////////////////////////////////////////////
// Class __RecursionPairType (Template)
////////////////////////////////////////////////////////////////////////////////

template <int N, typename T>
struct __RecursionPairType;


////////////////////////////////////////////////////////////////////////////////
// Class __RecursionPairType (One Element Pair)
////////////////////////////////////////////////////////////////////////////////

template <typename T1>
struct __RecursionPairType<0, __RecursionPair<T1, void>>
{
    typedef T1 __ValueType;
};


////////////////////////////////////////////////////////////////////////////////
// Class __RecursionPairType (Two Elements Pair)
////////////////////////////////////////////////////////////////////////////////

template <typename T1, typename T2>
struct __RecursionPairType<0, __RecursionPair<T1, T2>>
{
    typedef T1 __ValueType;
};


template <typename T1, typename T2>
struct __RecursionPairType<1, __RecursionPair<T1, T2>>
{
    typedef T2 __ValueType;
};


////////////////////////////////////////////////////////////////////////////////
// Class __RecursionPairType (Recursion Pair)
////////////////////////////////////////////////////////////////////////////////

template <typename T1, typename T2, typename T3>
struct __RecursionPairType<0, __RecursionPair<T1, __RecursionPair<T2, T3>>>
{
    typedef T1 __ValueType;
};


template <typename T1, typename T2, typename T3>
struct __RecursionPairType<1, __RecursionPair<T1, __RecursionPair<T2, T3>>>
{
    typedef T2 __ValueType;
};


template <int N, typename T1, typename T2, typename T3>
struct __RecursionPairType<N, __RecursionPair<T1, __RecursionPair<T2, T3>>>
{
    typedef typename __RecursionPairType<N - 1, __RecursionPair<T2, T3>>::__ValueType __ValueType;
};


}  // End namespace Tuple_


#endif  // __TUPLE_RECURSION_PAIR_TYPE_H
