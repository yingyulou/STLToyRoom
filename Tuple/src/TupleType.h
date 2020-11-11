/*
    TupleType.h
    ===========
        Class TupleType header.
*/

#ifndef __TUPLE_TUPLE_TYPE_H
#define __TUPLE_TUPLE_TYPE_H

#include "Tuple.h"
#include "RecursionPair/RecursionPairType.h"

namespace Tuple_
{

////////////////////////////////////////////////////////////////////////////////
// Class TupleType
////////////////////////////////////////////////////////////////////////////////

template <int N, typename T>
struct TupleType;


template <int N, typename... Types>
struct TupleType<N, Tuple<Types...>>
{
    typedef typename __RecursionPairType<N, typename Tuple<Types...>::__PairType>::__ValueType Type;
};


}  // End namespace Tuple_


#endif  // __TUPLE_TUPLE_TYPE_H
