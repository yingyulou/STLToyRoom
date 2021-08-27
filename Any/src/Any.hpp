/*
    Any.hpp
    =======
        Class Any implementation.
*/

#pragma once

namespace Any_
{

namespace __detail
{

////////////////////////////////////////////////////////////////////////////////
// Class __AnyHelperBase
////////////////////////////////////////////////////////////////////////////////

class __AnyHelperBase
{
public:

    // Destructor
    virtual ~__AnyHelperBase() = default;
};


////////////////////////////////////////////////////////////////////////////////
// Class __AnyHelperBase
////////////////////////////////////////////////////////////////////////////////

template <typename T>
class __AnyHelper: public __AnyHelperBase
{
public:

    // Constructor
    explicit __AnyHelper(const T &val):
        __val(val) {}


    // operator()
    const T &operator()() const
    {
        return __val;
    }


private:

    // Attribute
    T __val;
};


}  // End namespace __detail


////////////////////////////////////////////////////////////////////////////////
// Class Any
////////////////////////////////////////////////////////////////////////////////

class Any
{
public:

    // Constructor
    template <typename T>
    explicit Any(const T &val):
        __val(new __detail::__AnyHelper<T>(val)) {}


    // Get
    template <typename T>
    const T &get() const
    {
        return (*dynamic_cast<__detail::__AnyHelper<T> *>(__val))();
    }


    // Destructor
    ~Any()
    {
        delete __val;
    }


private:

    // Attribute
    __detail::__AnyHelperBase *__val;
};


}  // End namespace Any_
