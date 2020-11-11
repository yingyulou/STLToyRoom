/*
    AnyHelperBase.h
    ===============
        Class __AnyHelperBase header.
*/

#ifndef __ANY_ANY_HELPER_BASE_H
#define __ANY_ANY_HELPER_BASE_H

namespace Any_
{

////////////////////////////////////////////////////////////////////////////////
// Class __AnyHelperBase
////////////////////////////////////////////////////////////////////////////////

class __AnyHelperBase
{
public:

    // Copy
    virtual __AnyHelperBase *__Copy() const = 0;


    // Destructor
    virtual ~__AnyHelperBase();
};


}  // End namespace Any_


#endif  // __ANY_ANY_HELPER_BASE_H
