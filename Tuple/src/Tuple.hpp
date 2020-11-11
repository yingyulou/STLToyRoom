/*
    Tuple.hpp
    =========
        CLass Tuple implementation.
*/

#ifndef __TUPLE_TUPLE_HPP
#define __TUPLE_TUPLE_HPP

#include "Tuple.h"

namespace Tuple_
{

////////////////////////////////////////////////////////////////////////////////
// Constructor (One Element Tuple)
////////////////////////////////////////////////////////////////////////////////

template <typename T1>
Tuple<T1>::Tuple() = default;


template <typename T1>
Tuple<T1>::Tuple(const T1 &first): __PairType(first) {}


////////////////////////////////////////////////////////////////////////////////
// Constructor (Two Elements Tuple)
////////////////////////////////////////////////////////////////////////////////

template <typename T1, typename T2>
Tuple<T1, T2>::Tuple() = default;


template <typename T1, typename T2>
Tuple<T1, T2>::Tuple(const T1 &first, const T2 &second): __PairType(first, second) {}


////////////////////////////////////////////////////////////////////////////////
// Constructor (More Elements Tuple)
////////////////////////////////////////////////////////////////////////////////

template <typename T1, typename... Types>
Tuple<T1, Types...>::Tuple() = default;


template <typename T1, typename... Types>
Tuple<T1, Types...>::Tuple(const T1 &first, const Types &... Args):
    __PairType(first, Tuple<Types...>(Args...)) {}


}  // End namespace Tuple_


#endif  // __TUPLE_TUPLE_HPP
