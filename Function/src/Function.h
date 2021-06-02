/*
    Function.h
    ==========
        Class Function header.
*/

#pragma once

namespace Function_
{

////////////////////////////////////////////////////////////////////////////////
// Class Function
////////////////////////////////////////////////////////////////////////////////

template <typename>
class Function;


template <typename Ret, typename... Types>
class Function<Ret (Types...)>
{
public:

    // Class __FunctionHelperBase header
    #include "FunctionHelperBase.h"


    // Class __FunctionHelper header
    #include "FunctionHelper.h"


    // Constructor
    template <typename F>
    Function(F functionObj);

    Function(const Function &rhs);
    Function(Function &&rhs);


    // operator=
    Function &operator=(const Function &rhs);
    Function &operator=(Function &&rhs);


    // operator()
    Ret operator()(const Types &... Args);


    // Destructor
    ~Function();


private:

    __FunctionHelperBase *__functionHelperBasePtr;
};


}  // End namespace Function_
