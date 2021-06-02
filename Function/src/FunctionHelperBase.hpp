/*
    FunctionHelperBase.hpp
    ======================
        Class __FunctionHelperBase implementation.
*/

#pragma once

////////////////////////////////////////////////////////////////////////////////
// Destructor
////////////////////////////////////////////////////////////////////////////////

template <typename Ret, typename... Types>
Function<Ret (Types...)>::__FunctionHelperBase::~__FunctionHelperBase() = default;
