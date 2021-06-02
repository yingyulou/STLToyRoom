/*
    Function.hpp
    ============
        Class Function implementation.
*/

#pragma once

#include "Function.h"

namespace Function_
{

////////////////////////////////////////////////////////////////////////////////
// Constructor
////////////////////////////////////////////////////////////////////////////////

template <typename Ret, typename... Types>
template <typename F>
Function<Ret (Types...)>::Function(F functionObj):
    __functionHelperBasePtr(new __FunctionHelper<F>(functionObj)) {}


template <typename Ret, typename... Types>
Function<Ret (Types...)>::Function(const Function &rhs):
    __functionHelperBasePtr(rhs.__functionHelperBasePtr->__Copy) {}


template <typename Ret, typename... Types>
Function<Ret (Types...)>::Function(Function &&rhs):
    __functionHelperBasePtr(rhs.__functionHelperBasePtr)
{
    rhs.__functionHelperBasePtr = nullptr;
}


////////////////////////////////////////////////////////////////////////////////
// operator=
////////////////////////////////////////////////////////////////////////////////

template <typename Ret, typename... Types>
Function<Ret (Types...)> &Function<Ret (Types...)>::operator=(const Function &rhs)
{
    if (this != &rhs)
    {
        this->~Function();

        __functionHelperBasePtr = rhs.__functionHelperBasePtr->__Copy();
    }

    return *this;
}


template <typename Ret, typename... Types>
Function<Ret (Types...)> &Function<Ret (Types...)>::operator=(Function &&rhs)
{
    this->~Function();

    __functionHelperBasePtr = rhs.__functionHelperBasePtr;
    rhs.__functionHelperBasePtr = nullptr;

    return *this;
}


////////////////////////////////////////////////////////////////////////////////
// operator()
////////////////////////////////////////////////////////////////////////////////

template <typename Ret, typename... Types>
Ret Function<Ret (Types...)>::operator()(const Types &... Args)
{
    return (*__functionHelperBasePtr)(Args...);
}


////////////////////////////////////////////////////////////////////////////////
// Destructor
////////////////////////////////////////////////////////////////////////////////

template <typename Ret, typename... Types>
Function<Ret (Types...)>::~Function()
{
    delete __functionHelperBasePtr;
}


////////////////////////////////////////////////////////////////////////////////
// Class __FunctionHelperBase implementation
////////////////////////////////////////////////////////////////////////////////

#include "FunctionHelperBase.hpp"


////////////////////////////////////////////////////////////////////////////////
// Class __FunctionHelper implementation
////////////////////////////////////////////////////////////////////////////////

#include "FunctionHelper.hpp"


}  // End namespace Function_
