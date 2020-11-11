/*
    FunctionHelperBase.hpp
    ======================
        Class __FunctionHelperBase implementation.
*/

#ifndef __FUNCTION_FUNCTION_HELPER_BASE_HPP
#define __FUNCTION_FUNCTION_HELPER_BASE_HPP

////////////////////////////////////////////////////////////////////////////////
// Destructor
////////////////////////////////////////////////////////////////////////////////

template <typename Ret, typename... Types>
Function<Ret (Types...)>::__FunctionHelperBase::~__FunctionHelperBase() = default;


#endif  // __FUNCTION_FUNCTION_HELPER_BASE_HPP
