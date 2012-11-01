/*
 [auto_generated]
 boost/numeric/odeint/stepper/symplectic_euler.hpp

 [begin_description]
 Implementation of the symplectic Euler for separable Hamiltonian systems.
 [end_description]

 Copyright 2009-2011 Karsten Ahnert
 Copyright 2009-2011 Mario Mulansky

 Distributed under the Boost Software License, Version 1.0.
 (See accompanying file LICENSE_1_0.txt or
 copy at http://www.boost.org/LICENSE_1_0.txt)
 */


#ifndef BOOST_NUMERIC_ODEINT_STEPPER_SYMPLECTIC_EULER_HPP_INCLUDED
#define BOOST_NUMERIC_ODEINT_STEPPER_SYMPLECTIC_EULER_HPP_INCLUDED


#include <boost/numeric/odeint/stepper/base/symplectic_rkn_stepper_base.hpp>

#include <boost/numeric/odeint/algebra/range_algebra.hpp>
#include <boost/numeric/odeint/algebra/default_operations.hpp>

#include <boost/array.hpp>

namespace boost {
namespace numeric {
namespace odeint {


#ifndef DOXYGEN_SKIP
namespace detail {
namespace symplectic_euler_coef {

template< class Value >
struct coef_a_type : public boost::array< Value , 1 >
{
    coef_a_type( void )
    {
        (*this)[0] = static_cast< Value >( 1 );
    }
};

template< class Value >
struct coef_b_type : public boost::array< Value , 1 >
{
    coef_b_type( void )
    {
        (*this)[0] = static_cast< Value >( 1 );
    }
};

} // namespace symplectic_euler_coef
} // namespace detail
#endif



/**
 * \class symplectic_euler
 * \brief Implementation of the symplectic Euler method.
 *
 * ToDo: add reference to paper.
 */
template<
class Coor ,
class Momentum = Coor ,
class Value = double ,
class CoorDeriv = Coor ,
class MomentumDeriv = Coor ,
class Time = Value ,
class Algebra = range_algebra ,
class Operations = default_operations ,
class Resizer = initially_resizer
>
class symplectic_euler :
public symplectic_nystroem_stepper_base
<
1 , 1 ,
Coor , Momentum , Value , CoorDeriv , MomentumDeriv , Time , Algebra , Operations , Resizer
>
{
public:

    #ifndef DOXYGEN_SKIP
    typedef symplectic_nystroem_stepper_base<
    1 , 1 , Coor , Momentum , Value , CoorDeriv , MomentumDeriv , Time , Algebra , Operations , Resizer > stepper_base_type;

    typedef typename stepper_base_type::algebra_type algebra_type;
    typedef typename stepper_base_type::value_type value_type;
    #endif


    /**
     * \brief Constructs the symplectic_euler. This constructor can be used as a default
     * constructor if the algebra has a default constructor.
     * \param algebra A copy of algebra is made and stored inside explicit_stepper_base.
     */
    symplectic_euler( const algebra_type &algebra = algebra_type() )
    : stepper_base_type( detail::symplectic_euler_coef::coef_a_type< value_type >() ,
            detail::symplectic_euler_coef::coef_b_type< value_type >() ,
            algebra )
    { }
};



} // namespace odeint
} // namespace numeric
} // namespace boost


#endif // BOOST_NUMERIC_ODEINT_STEPPER_SYMPLECTIC_EULER_HPP_INCLUDED
