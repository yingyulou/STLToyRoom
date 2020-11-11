/*
    FunctionHelper.h
    ================
        Class __FunctionHelper header.
*/

#ifndef __FUNCTION_FUNCTION_HELPER_H
#define __FUNCTION_FUNCTION_HELPER_H

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


#endif  // __FUNCTION_FUNCTION_HELPER_H
