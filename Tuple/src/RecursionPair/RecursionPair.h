/*
    recursionPair.h
    ===============
        Class __RecursionPair header.
*/

#ifndef __TUPLE_RECURSION_PAIR_H
#define __TUPLE_RECURSION_PAIR_H

namespace Tuple_
{

////////////////////////////////////////////////////////////////////////////////
// Class __RecursionPair (Two Or More Elements Pair)
////////////////////////////////////////////////////////////////////////////////

template <typename T1, typename T2>
struct __RecursionPair
{
public:

    // Attribute
    T1 __first;
    T2 __second;


    // Constructor
    __RecursionPair();
    __RecursionPair(const T1 &first, const T2 &second);
};


////////////////////////////////////////////////////////////////////////////////
// Class __RecursionPair (One Element Pair)
////////////////////////////////////////////////////////////////////////////////

template <typename T1>
struct __RecursionPair<T1, void>
{
public:

    // Attribute
    T1 __first;


    // Constructor
    __RecursionPair();
    explicit __RecursionPair(const T1 &first);
};


}  // End namespace Tuple_


#endif  // __TUPLE_RECURSION_PAIR_H
