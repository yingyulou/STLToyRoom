/*
    EnableIf.hpp
    ============
        Class __EnableIf implementation.
*/

#ifndef __BIND_ENABLE_IF_HPP
#define __BIND_ENABLE_IF_HPP

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


#endif  // __BIND_ENABLE_IF_HPP
