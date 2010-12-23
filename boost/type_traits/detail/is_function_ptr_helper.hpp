
// Copyright (C) 2000 John Maddock (john_maddock@compuserve.com)
// Copyright (C) 2002 Aleksey Gurtovoy (agurtovoy@meta-comm.com)
//
// Permission to copy and use this software is granted, 
// provided this copyright notice appears in all copies. 
// Permission to modify the code and to distribute modified code is granted, 
// provided this copyright notice appears in all copies, and a notice 
// that the code was modified is included with the copyright notice.
//
// This software is provided "as is" without express or implied warranty, 
// and with no claim as to its suitability for any purpose.

#if !defined(BOOST_PP_IS_ITERATING)

///// header body

#ifndef BOOST_TT_DETAIL_IS_FUNCTION_PTR_HELPER_HPP_INCLUDED
#define BOOST_TT_DETAIL_IS_FUNCTION_PTR_HELPER_HPP_INCLUDED

#include "boost/type_traits/config.hpp"

#if defined(BOOST_TT_PREPROCESSING_MODE)
#   include "boost/preprocessor/iterate.hpp"
#   include "boost/preprocessor/enum_params.hpp"
#   include "boost/preprocessor/comma_if.hpp"
#endif

namespace boost {
namespace type_traits {

template <class R>
struct is_function_ptr_helper
{
    BOOST_STATIC_CONSTANT(bool, value = false);
};

#if !defined(BOOST_TT_PREPROCESSING_MODE)
// preprocessor-generated part, don't edit by hand!

template <class R>
struct is_function_ptr_helper<R (*)()> { BOOST_STATIC_CONSTANT(bool,value = true); };

template <class R,class T0>
struct is_function_ptr_helper<R (*)(T0)> { BOOST_STATIC_CONSTANT(bool,value = true); };

template <class R,class T0,class T1>
struct is_function_ptr_helper<R (*)(T0,T1)> { BOOST_STATIC_CONSTANT(bool,value = true); };

template <class R,class T0,class T1,class T2>
struct is_function_ptr_helper<R (*)(T0,T1,T2)> { BOOST_STATIC_CONSTANT(bool,value = true); };

template <class R,class T0,class T1,class T2,class T3>
struct is_function_ptr_helper<R (*)(T0,T1,T2,T3)> { BOOST_STATIC_CONSTANT(bool,value = true); };

template <class R,class T0,class T1,class T2,class T3,class T4>
struct is_function_ptr_helper<R (*)(T0,T1,T2,T3,T4)> { BOOST_STATIC_CONSTANT(bool,value = true); };

template <class R,class T0,class T1,class T2,class T3,class T4,class T5>
struct is_function_ptr_helper<R (*)(T0,T1,T2,T3,T4,T5)> { BOOST_STATIC_CONSTANT(bool,value = true); };

template <class R,class T0,class T1,class T2,class T3,class T4,class T5,class T6>
struct is_function_ptr_helper<R (*)(T0,T1,T2,T3,T4,T5,T6)> { BOOST_STATIC_CONSTANT(bool,value = true); };

template <class R,class T0,class T1,class T2,class T3,class T4,class T5,class T6,class T7>
struct is_function_ptr_helper<R (*)(T0,T1,T2,T3,T4,T5,T6,T7)> { BOOST_STATIC_CONSTANT(bool,value = true); };

template <class R,class T0,class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8>
struct is_function_ptr_helper<R (*)(T0,T1,T2,T3,T4,T5,T6,T7,T8)> { BOOST_STATIC_CONSTANT(bool,value = true); };

template <class R,class T0,class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9>
struct is_function_ptr_helper<R (*)(T0,T1,T2,T3,T4,T5,T6,T7,T8,T9)> { BOOST_STATIC_CONSTANT(bool,value = true); };

template <class R,class T0,class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10>
struct is_function_ptr_helper<R (*)(T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10)> { BOOST_STATIC_CONSTANT(bool,value = true); };

template <class R,class T0,class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,class T11>
struct is_function_ptr_helper<R (*)(T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11)> { BOOST_STATIC_CONSTANT(bool,value = true); };

template <class R,class T0,class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,class T11,class T12>
struct is_function_ptr_helper<R (*)(T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12)> { BOOST_STATIC_CONSTANT(bool,value = true); };

template <class R,class T0,class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,class T11,class T12,class T13>
struct is_function_ptr_helper<R (*)(T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13)> { BOOST_STATIC_CONSTANT(bool,value = true); };

template <class R,class T0,class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,class T11,class T12,class T13,class T14>
struct is_function_ptr_helper<R (*)(T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14)> { BOOST_STATIC_CONSTANT(bool,value = true); };

template <class R,class T0,class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,class T11,class T12,class T13,class T14,class T15>
struct is_function_ptr_helper<R (*)(T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15)> { BOOST_STATIC_CONSTANT(bool,value = true); };

template <class R,class T0,class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,class T11,class T12,class T13,class T14,class T15,class T16>
struct is_function_ptr_helper<R (*)(T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16)> { BOOST_STATIC_CONSTANT(bool,value = true); };

template <class R,class T0,class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,class T11,class T12,class T13,class T14,class T15,class T16,class T17>
struct is_function_ptr_helper<R (*)(T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16,T17)> { BOOST_STATIC_CONSTANT(bool,value = true); };

template <class R,class T0,class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,class T11,class T12,class T13,class T14,class T15,class T16,class T17,class T18>
struct is_function_ptr_helper<R (*)(T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16,T17,T18)> { BOOST_STATIC_CONSTANT(bool,value = true); };

template <class R,class T0,class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,class T11,class T12,class T13,class T14,class T15,class T16,class T17,class T18,class T19>
struct is_function_ptr_helper<R (*)(T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16,T17,T18,T19)> { BOOST_STATIC_CONSTANT(bool,value = true); };

template <class R,class T0,class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,class T11,class T12,class T13,class T14,class T15,class T16,class T17,class T18,class T19,class T20>
struct is_function_ptr_helper<R (*)(T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16,T17,T18,T19,T20)> { BOOST_STATIC_CONSTANT(bool,value = true); };

template <class R,class T0,class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,class T11,class T12,class T13,class T14,class T15,class T16,class T17,class T18,class T19,class T20,class T21>
struct is_function_ptr_helper<R (*)(T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16,T17,T18,T19,T20,T21)> { BOOST_STATIC_CONSTANT(bool,value = true); };

template <class R,class T0,class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,class T11,class T12,class T13,class T14,class T15,class T16,class T17,class T18,class T19,class T20,class T21,class T22>
struct is_function_ptr_helper<R (*)(T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16,T17,T18,T19,T20,T21,T22)> { BOOST_STATIC_CONSTANT(bool,value = true); };

template <class R,class T0,class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,class T11,class T12,class T13,class T14,class T15,class T16,class T17,class T18,class T19,class T20,class T21,class T22,class T23>
struct is_function_ptr_helper<R (*)(T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16,T17,T18,T19,T20,T21,T22,T23)> { BOOST_STATIC_CONSTANT(bool,value = true); };

template <class R,class T0,class T1,class T2,class T3,class T4,class T5,class T6,class T7,class T8,class T9,class T10,class T11,class T12,class T13,class T14,class T15,class T16,class T17,class T18,class T19,class T20,class T21,class T22,class T23,class T24>
struct is_function_ptr_helper<R (*)(T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15,T16,T17,T18,T19,T20,T21,T22,T23,T24)> { BOOST_STATIC_CONSTANT(bool,value = true); };

#else

#undef BOOST_STATIC_CONSTANT
#define BOOST_PP_ITERATION_PARAMS_1 \
    (0, 25, "boost/type_traits/detail/is_function_ptr_helper.hpp")
#include BOOST_PP_ITERATE()

#endif // BOOST_TT_PREPROCESSING_MODE

} // namespace type_traits
} // namespace boost

#endif // BOOST_TT_DETAIL_IS_FUNCTION_PTR_HELPER_HPP_INCLUDED

///// iteration

#else
#define i BOOST_PP_FRAME_ITERATION(1)

template <class R BOOST_PP_COMMA_IF(i) BOOST_PP_ENUM_PARAMS(i,class T)>
struct is_function_ptr_helper<R (*)(BOOST_PP_ENUM_PARAMS(i,T))> { BOOST_STATIC_CONSTANT(bool, value = true); };

#undef i
#endif // BOOST_PP_IS_ITERATING
