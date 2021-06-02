/*
    ArgsHelper.hpp
    ==============
        Class __ArgsHelper implementation.
*/

#pragma once

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
