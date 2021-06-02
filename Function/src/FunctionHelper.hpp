/*
    FunctionHelper.hpp
    ==================
        Class __FunctionHelper implementation.
*/

#pragma once

////////////////////////////////////////////////////////////////////////////////
// Constructor
////////////////////////////////////////////////////////////////////////////////

template <typename Ret, typename... Types>
template <typename F>
Function<Ret (Types...)>::__FunctionHelper<F>::__FunctionHelper(F functionObj):
    __functionObj(functionObj) {}


////////////////////////////////////////////////////////////////////////////////
// operator()
////////////////////////////////////////////////////////////////////////////////

template <typename Ret, typename... Types>
template <typename F>
Ret Function<Ret (Types...)>::__FunctionHelper<F>::operator()(const Types &... Args)
{
    return __functionObj(Args...);
}


////////////////////////////////////////////////////////////////////////////////
// Copy
////////////////////////////////////////////////////////////////////////////////

template <typename Ret, typename... Types>
template <typename F>
Function<Ret (Types...)>::__FunctionHelper<F> *
Function<Ret (Types...)>::__FunctionHelper<F>::__Copy() const
{
    return new __FunctionHelper(__functionObj);
}
