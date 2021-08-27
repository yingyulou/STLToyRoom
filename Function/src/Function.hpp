/*
    Function.hpp
    ============
        Class Function implementation.
*/

#pragma once

namespace Function_
{

namespace __detail
{

////////////////////////////////////////////////////////////////////////////////
// Class __FunctionHelperBase
////////////////////////////////////////////////////////////////////////////////

template <typename Ret, typename... Types>
class __FunctionHelperBase
{
public:

    // operator()
    virtual Ret operator()(const Types &... Args) = 0;
};


////////////////////////////////////////////////////////////////////////////////
// Class __FunctionHelper
////////////////////////////////////////////////////////////////////////////////

template <typename F, typename Ret, typename... Types>
class __FunctionHelper: public __FunctionHelperBase<Ret, Types...>
{
public:

    // Constructor
    explicit __FunctionHelper(F f):
        __f(f) {}


    // operator()
    virtual Ret operator()(const Types &... Args)
    {
        return __f(Args...);
    }


private:

    // Attribute
    F __f;
};


}  // End namespace __detail


////////////////////////////////////////////////////////////////////////////////
// Class Function
////////////////////////////////////////////////////////////////////////////////

template <typename>
class Function;


template <typename Ret, typename... Types>
class Function<Ret (Types...)>
{
public:

    // Constructor
    template <typename F>
    explicit Function(F f):
        __val(new __detail::__FunctionHelper<F, Ret, Types...>(f)) {}


    // operator()
    Ret operator()(const Types &...Args)
    {
        return (*__val)(Args...);
    }


private:

    // Attribute
    __detail::__FunctionHelperBase<Ret, Types...> *__val;
};


}  // End namespace Function_
