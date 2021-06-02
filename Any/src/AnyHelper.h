/*
    AnyHelper.h
    ===========
        Class __AnyHelper header.
*/

#pragma once

#include "AnyHelperBase.h"

namespace Any_
{

////////////////////////////////////////////////////////////////////////////////
// Class __AnyHelper
////////////////////////////////////////////////////////////////////////////////

template <typename T>
class __AnyHelper: public __AnyHelperBase
{
public:

    // Constructor
    __AnyHelper(const T &val);


    // Copy
    virtual __AnyHelper *__Copy() const;


    // Get
    T __Get() const
    {
        return __val;
    }


private:

    // Attribute
    T __val;
};


}  // End namespace Any_
