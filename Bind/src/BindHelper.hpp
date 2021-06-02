/*
    BindHelper.hpp
    ==============
        Class __BindHelper implementation.
*/

#pragma once

#include <tuple>
#include "BindHelper.h"
#include "ArgsHelper.h"
#include "IndexSequence.hpp"

namespace Bind_
{

////////////////////////////////////////////////////////////////////////////////
// Using
////////////////////////////////////////////////////////////////////////////////

using std::tuple;


////////////////////////////////////////////////////////////////////////////////
// Constructor
////////////////////////////////////////////////////////////////////////////////

template <typename F, typename... FormalParameterTypes>
__BindHelper<F, FormalParameterTypes...>::__BindHelper(
    const F bindFunction,
    const FormalParameterTypes &... formalParameters):
    __bindFunction(bindFunction),
    __formalParameterTuple(formalParameters...) {}


////////////////////////////////////////////////////////////////////////////////
// operator()
////////////////////////////////////////////////////////////////////////////////

template <typename F, typename... FormalParameterTypes>
template <typename... ActualParameterTypes>
auto __BindHelper<F, FormalParameterTypes...>::operator()(
    const ActualParameterTypes &... actualParameters)
{
    return __callHelper(__IndexSequenceFor<FormalParameterTypes...>(),
        actualParameters...);
}


////////////////////////////////////////////////////////////////////////////////
// Call Helper
////////////////////////////////////////////////////////////////////////////////

template <typename F, typename... FormalParameterTypes>
template <size_t... Ints, typename... ActualParameterTypes>
auto __BindHelper<F, FormalParameterTypes...>::__callHelper(
    __IndexSequence<Ints...>,
    const ActualParameterTypes &... actualParameters)
{
    return __bindFunction(

        // Template parameter
        __ArgsHelper<
            tuple<FormalParameterTypes...>,
            tuple<ActualParameterTypes...>
        >

        // Constructor parameter
        (
            __formalParameterTuple,
            tuple<ActualParameterTypes...>(actualParameters...)
        ).template Get<Ints>()

    ...);
}


}  // End namespace Bind_
