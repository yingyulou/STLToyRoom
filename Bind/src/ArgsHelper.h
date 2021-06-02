/*
    ArgsHelper.h
    ============
        Class __ArgsHelper header.
*/

#pragma once

#include <tuple>
#include "EnableIf.hpp"
#include "IndexSequence.hpp"
#include "Placeholders.hpp"
#include "IsPlaceholder.hpp"

namespace Bind_
{

////////////////////////////////////////////////////////////////////////////////
// Using
////////////////////////////////////////////////////////////////////////////////

using std::tuple;
using std::tuple_element;
using std::get;


////////////////////////////////////////////////////////////////////////////////
// Class __ArgsHelper
////////////////////////////////////////////////////////////////////////////////

template <typename FormalParameterTupleType, typename ActualParameterTupleType>
class __ArgsHelper
{
public:

    // Constructor
    __ArgsHelper(
        const FormalParameterTupleType &formalParameterTuple,
        const ActualParameterTupleType &actualParameterTuple);


    // Get-1 (type(__formalParameterTuple[N]) == __Placeholder)
    template <size_t N>
    auto Get(

        // SFINAE: type(__formalParameterTuple[N]) == __Placeholder
        typename __EnableIf<

            static_cast<bool>(__IsPlaceholder<

                // type(__formalParameterTuple[N])
                typename tuple_element<N, FormalParameterTupleType>::type

            >::__Value),

            void

        >::__Type * = nullptr

    ) const
    {
        return get<

            // Index
            // Pay attention to the "-1"
            __IsPlaceholder<

                // type(__formalParameterTuple[N])
                typename tuple_element<N, FormalParameterTupleType>::type

            >::__Value - 1

        >(__actualParameterTuple);
    }


    // Get-2 (type(__formalParameterTuple[N]) != __Placeholder)
    template <size_t N>
    auto Get(

        // SFINAE: type(__formalParameterTuple[N]) != __Placeholder
        typename __EnableIf<

            // Index
            !static_cast<bool>(__IsPlaceholder<

                // type(__formalParameterTuple[N])
                typename tuple_element<N, FormalParameterTupleType>::type

            >::__Value),

            void

        >::__Type * = nullptr

    ) const
    {
        return get<N>(__formalParameterTuple);
    }


private:

    FormalParameterTupleType __formalParameterTuple;
    ActualParameterTupleType __actualParameterTuple;
};


}  // End namespace Bind_
