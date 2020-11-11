/*
    Bind.hpp
    ========
        Function Bind implementation.
*/

#ifndef __BIND_BIND_HPP
#define __BIND_BIND_HPP

#include "BindHelper.h"

namespace Bind_
{

template <typename F, typename... FormalParameterTypes>
auto Bind(F bindFunction, const FormalParameterTypes &... formalParameters)
{
    return __BindHelper<F, FormalParameterTypes...>(bindFunction, formalParameters...);
}


}  // End namespace Bind_


#endif  // __BIND_BIND_HPP
