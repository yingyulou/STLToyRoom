/*
    EnableIf.hpp
    ============
        Class __EnableIf implementation.
*/

#pragma once

namespace Bind_
{

////////////////////////////////////////////////////////////////////////////////
// Class __EnableIf
////////////////////////////////////////////////////////////////////////////////

template <bool B, typename T>
struct __EnableIf;


template <typename T>
struct __EnableIf<true, T>
{
    typedef T __Type;
};


}  // End namespace Bind_
