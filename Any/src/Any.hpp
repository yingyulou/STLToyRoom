/*
    Any.hpp
    =======
        Class Any implementation.
*/

#ifndef __ANY_ANY_HPP
#define __ANY_ANY_HPP

#include "Any.h"
#include "AnyHelper.h"

namespace Any_
{

////////////////////////////////////////////////////////////////////////////////
// Constructor
////////////////////////////////////////////////////////////////////////////////

template <typename T>
Any::Any(const T &val): __anyHelperBasePtr(new __AnyHelper<T>(val)) {}


Any::Any(const Any &rhs): __anyHelperBasePtr(rhs.__anyHelperBasePtr->__Copy()) {}


Any::Any(Any &&rhs): __anyHelperBasePtr(rhs.__anyHelperBasePtr)
{
    rhs.__anyHelperBasePtr = nullptr;
}


////////////////////////////////////////////////////////////////////////////////
// operator=
////////////////////////////////////////////////////////////////////////////////

template <typename T>
Any &Any::operator=(const T &rhs)
{
    this->~Any();

    __anyHelperBasePtr = new __AnyHelper<T>(rhs);

    return *this;
}


Any &Any::operator=(const Any &rhs)
{
    if (this != &rhs)
    {
        this->~Any();

        __anyHelperBasePtr = rhs.__anyHelperBasePtr->__Copy();
    }

    return *this;
}


Any &Any::operator=(Any &&rhs)
{
    this->~Any();

    __anyHelperBasePtr = rhs.__anyHelperBasePtr;
    rhs.__anyHelperBasePtr = nullptr;

    return *this;
}


////////////////////////////////////////////////////////////////////////////////
// Destructor
////////////////////////////////////////////////////////////////////////////////

Any::~Any()
{
    delete __anyHelperBasePtr;
}


}  // End namespace Any_


#endif  // __ANY_ANY_HPP
