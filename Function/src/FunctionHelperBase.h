/*
    FunctionHelperBase.h
    ====================
        Class __FunctionHelperBase header.
*/

#pragma once

class __FunctionHelperBase
{
public:

    // operator()
    virtual Ret operator()(const Types &... Args) = 0;


    // Copy
    virtual __FunctionHelperBase *__Copy() const = 0;


    // Destructor
    virtual ~__FunctionHelperBase();
};
