/*
    Tuple.h
    =======
        Class Tuple header.
*/

#ifndef __TUPLE_TUPLE_H
#define __TUPLE_TUPLE_H

#include "RecursionPair/RecursionPair.hpp"

namespace Tuple_
{

////////////////////////////////////////////////////////////////////////////////
// Class Tuple (Template)
////////////////////////////////////////////////////////////////////////////////

template <typename... Types>
struct Tuple;


////////////////////////////////////////////////////////////////////////////////
// Class Tuple (One Element Tuple)
////////////////////////////////////////////////////////////////////////////////

template <typename T1>
struct Tuple<T1>: __RecursionPair<T1, void>
{
    // typedef
    typedef __RecursionPair<T1, void> __PairType;


    // Constructor
    Tuple();
    Tuple(const T1 &first);
};


////////////////////////////////////////////////////////////////////////////////
// Class Tuple (Two Elements Tuple)
////////////////////////////////////////////////////////////////////////////////

template <typename T1, typename T2>
struct Tuple<T1, T2>: __RecursionPair<T1, T2>
{
    // typedef
    typedef __RecursionPair<T1, T2> __PairType;


    // Constructor
    Tuple();
    Tuple(const T1 &first, const T2 &second);
};


////////////////////////////////////////////////////////////////////////////////
// Class Tuple (More Elements Tuple)
////////////////////////////////////////////////////////////////////////////////

template <typename T1, typename... Types>
struct Tuple<T1, Types...>: __RecursionPair<T1, typename Tuple<Types...>::__PairType>
{
    // typedef
    typedef __RecursionPair<T1, typename Tuple<Types...>::__PairType> __PairType;


    // Constructor
    Tuple();
    Tuple(const T1 &first, const Types &... Args);
};


}  // End namespace Tuple_


#endif  // __TUPLE_TUPLE_H
