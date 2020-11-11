/*
    AnyHelper.h
    ===========
        Class __AnyHelper header.
*/

#ifndef __ANY_ANY_HELPER_H
#define __ANY_ANY_HELPER_H

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


#endif  // __ANY_ANY_HELPER_H
