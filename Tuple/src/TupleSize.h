/*
    TupleSize.h
    ===========
        Class TupleSize header.
*/

#ifndef __TUPLE_TUPLE_SIZE_H
#define __TUPLE_TUPLE_SIZE_H

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


#endif  // __TUPLE_TUPLE_SIZE_H
