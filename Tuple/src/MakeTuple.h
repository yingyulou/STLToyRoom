/*
    MakeTuple.h
    ===========
        Function MakeTuple header.
*/

#pragma once

#include "Tuple.h"

namespace Tuple_
{

////////////////////////////////////////////////////////////////////////////////
// MakeTuple
////////////////////////////////////////////////////////////////////////////////

template <typename... Types>
inline Tuple<Types...> MakeTuple(const Types &... Args)
{
    return Tuple<Types...>(Args...);
}


}  // End namespace Tuple_
