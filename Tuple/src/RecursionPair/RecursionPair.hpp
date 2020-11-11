/*
    recursionPair.hpp
    =================
        Class __RecursionPair implementation.
*/

#ifndef __TUPLE_RECURSION_PAIR_HPP
#define __TUPLE_RECURSION_PAIR_HPP

#include "RecursionPair.h"

namespace Tuple_
{

////////////////////////////////////////////////////////////////////////////////
// Constructor (Two Or More Elements Pair)
////////////////////////////////////////////////////////////////////////////////

template <typename T1, typename T2>
__RecursionPair<T1, T2>::__RecursionPair() = default;


template <typename T1, typename T2>
__RecursionPair<T1, T2>::__RecursionPair(const T1 &first, const T2 &second):
    __first(first), __second(second) {}


////////////////////////////////////////////////////////////////////////////////
// Constructor (One Element Pair)
////////////////////////////////////////////////////////////////////////////////

template <typename T1>
__RecursionPair<T1, void>::__RecursionPair() = default;


template <typename T1>
__RecursionPair<T1, void>::__RecursionPair(const T1 &first): __first(first) {}


}  // End namespace Tuple_


#endif  // __TUPLE_RECURSION_PAIR_HPP
