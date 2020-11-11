/*
    FunctionHelperBase.h
    ====================
        Class __FunctionHelperBase header.
*/

#ifndef __FUNCTION_FUNCTION_HELPER_BASE_H
#define __FUNCTION_FUNCTION_HELPER_BASE_H

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


#endif  // __FUNCTION_FUNCTION_HELPER_BASE_H
