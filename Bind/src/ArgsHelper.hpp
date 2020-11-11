/*
    ArgsHelper.hpp
    ==============
        Class __ArgsHelper implementation.
*/

#ifndef __BIND_ARGS_HELPER_HPP
#define __BIND_ARGS_HELPER_HPP

#include "ArgsHelper.h"

namespace Bind_
{

////////////////////////////////////////////////////////////////////////////////
// Constructor
////////////////////////////////////////////////////////////////////////////////

template <typename FormalParameterTupleType, typename ActualParameterTupleType>
__ArgsHelper<FormalParameterTupleType, ActualParameterTupleType>::__ArgsHelper(
    const FormalParameterTupleType &formalParameterTuple,
    const ActualParameterTupleType &actualParameterTuple):
    __formalParameterTuple(formalParameterTuple),
    __actualParameterTuple(actualParameterTuple) {}


}  // End namespace Bind_


#endif  // __BIND_ARGS_HELPER_HPP
