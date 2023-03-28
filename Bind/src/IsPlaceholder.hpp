/*
    IsPlaceholder.hpp
    =================
        Class __IsPlaceholder implementation.
*/

#pragma once

#include <cstddef>
#include "Placeholders.hpp"

namespace Bind_
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Class __IsPlaceholder
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <typename T>
struct __IsPlaceholder
{
    static constexpr size_t __Value = 0;
};


template <size_t N>
struct __IsPlaceholder<Placeholders::__Placeholder<N>>
{
    static constexpr size_t __Value = N;
};


}  // End namespace Bind_
