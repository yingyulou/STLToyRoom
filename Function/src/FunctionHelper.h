/*
    FunctionHelper.h
    ================
        Class __FunctionHelper header.
*/

#pragma once

template <typename F>
class __FunctionHelper: public __FunctionHelperBase
{
public:

    // Constructor
    __FunctionHelper(F functionObj);


    // operator()
    virtual Ret operator()(const Types &... Args);


    // Copy
    virtual __FunctionHelper *__Copy() const;


private:

    F __functionObj;
};
