/*
    Placeholders.hpp
    ================
        Placeholders implementation.
*/

#pragma once

#include <cstddef>

namespace Bind_
{


namespace Placeholders
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Class __Placeholder
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

template <size_t N>
struct __Placeholder
{
    static constexpr size_t __Value = N;
};


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Placeholders
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

constexpr __Placeholder<1>  _1;
constexpr __Placeholder<2>  _2;
constexpr __Placeholder<3>  _3;
constexpr __Placeholder<4>  _4;
constexpr __Placeholder<5>  _5;
constexpr __Placeholder<6>  _6;
constexpr __Placeholder<7>  _7;
constexpr __Placeholder<8>  _8;
constexpr __Placeholder<9>  _9;
constexpr __Placeholder<10> _10;
constexpr __Placeholder<11> _11;
constexpr __Placeholder<12> _12;
constexpr __Placeholder<13> _13;
constexpr __Placeholder<14> _14;
constexpr __Placeholder<15> _15;
constexpr __Placeholder<16> _16;
constexpr __Placeholder<17> _17;
constexpr __Placeholder<18> _18;
constexpr __Placeholder<19> _19;
constexpr __Placeholder<20> _20;


}  // End namespace Placeholders


}  // End namespace Bind_
