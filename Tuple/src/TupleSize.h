/*
    TupleSize.h
    ===========
        Class TupleSize header.
*/

#pragma once

#include "Tuple.h"

namespace Tuple_
{

////////////////////////////////////////////////////////////////////////////////
// Class TupleSize
////////////////////////////////////////////////////////////////////////////////

template <typename T>
struct TupleSize;


template <typename... Types>
struct TupleSize<Tuple<Types...>>
{
    static constexpr int Size = sizeof...(Types);
};


}  // End namespace Tuple_
