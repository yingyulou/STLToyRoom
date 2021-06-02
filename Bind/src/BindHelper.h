/*
    BindHelper.h
    ============
        Class __BindHelper header.
*/

#pragma once

#include <cstddef>
#include <tuple>
#include "IndexSequence.hpp"

namespace Bind_
{

////////////////////////////////////////////////////////////////////////////////
// Using
////////////////////////////////////////////////////////////////////////////////

using std::tuple;


////////////////////////////////////////////////////////////////////////////////
// Class __BindHelper
////////////////////////////////////////////////////////////////////////////////

template <typename F, typename... FormalParameterTypes>
class __BindHelper
{
public:

    // Constructor
    __BindHelper(F bindFunction, const FormalParameterTypes &... formalParameters);


    // operator()
    template <typename... ActualParameterTypes>
    auto operator()(const ActualParameterTypes &... actualParameters);


private:

    // Function
    F __bindFunction;

    // Parameters
    tuple<FormalParameterTypes...> __formalParameterTuple;


    // Call Helper
    template <size_t... Ints, typename... ActualParameterTypes>
    auto __callHelper(__IndexSequence<Ints...>, const ActualParameterTypes &... actualParameters);
};


}  // End namespace Bind_
