/*
    Bind.hpp
    ========
        Function Bind implementation.
*/

#pragma once

#include "BindHelper.h"

namespace Bind_
{

template <typename F, typename... FormalParameterTypes>
auto Bind(F bindFunction, const FormalParameterTypes &... formalParameters)
{
    return __BindHelper<F, FormalParameterTypes...>(bindFunction, formalParameters...);
}


}  // End namespace Bind_
