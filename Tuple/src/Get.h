/*
    Get.h
    =====
        Function Get header.
*/

#pragma once

#include "Tuple.h"
#include "TupleType.h"
#include "RecursionPair/RecursionPairValue.h"

namespace Tuple_
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Get
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <int N, typename... Types>
inline typename TupleType<N, Tuple<Types...>>::Type &Get(Tuple<Types...> &tupleObj)
{
    return __RecursionPairValue<N, typename Tuple<Types...>::__PairType>::__Get(tupleObj);
}


template <int N, typename... Types>
inline const typename TupleType<N, Tuple<Types...>>::Type &Get(const Tuple<Types...> &tupleObj)
{
    return __RecursionPairValue<N, typename Tuple<Types...>::__PairType>::__Get(tupleObj);
}


}  // End namespace Tuple_
