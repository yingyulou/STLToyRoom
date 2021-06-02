/*
    AnyHelperBase.h
    ===============
        Class __AnyHelperBase header.
*/

#pragma once

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
