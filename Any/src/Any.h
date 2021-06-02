/*
    Any.h
    =====
        Class Any header.
*/

#pragma once

#include "AnyHelperBase.h"
#include "AnyHelper.h"

namespace Any_
{

////////////////////////////////////////////////////////////////////////////////
// Class Any
////////////////////////////////////////////////////////////////////////////////

class Any
{
public:

    // Constructor
    template <typename T>
    Any(const T &val);

    Any(const Any &rhs);
    Any(Any &&rhs);


    // operator=
    template <typename T>
    Any &operator=(const T &rhs);

    Any &operator=(const Any &rhs);
    Any &operator=(Any &&rhs);


    // AnyCast
    template <typename T>
    T AnyCast() const
    {
        return dynamic_cast<__AnyHelper<T> *>(__anyHelperBasePtr)->__Get();
    }


    // Destructor
    ~Any();


private:

    // Attribute
    __AnyHelperBase *__anyHelperBasePtr;
};


}  // End namespace Any_
