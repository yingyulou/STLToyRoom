/*
    MakeTuple.h
    ===========
        Function MakeTuple header.
*/

#ifndef __TUPLE_MAKE_TUPLE_H
#define __TUPLE_MAKE_TUPLE_H

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


#endif  // __TUPLE_MAKE_TUPLE_H
