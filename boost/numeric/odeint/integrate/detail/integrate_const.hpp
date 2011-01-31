/*
 * integrate_const_stepper.hpp
 *
 *  Created on: Jan 31, 2011
 *      Author: karsten
 */

#ifndef BOOST_NUMERIC_ODEINT_INTEGRATE_DETAIL_INTEGRATE_CONST_HPP_
#define BOOST_NUMERIC_ODEINT_INTEGRATE_DETAIL_INTEGRATE_CONST_HPP_


namespace boost {
namespace numeric {
namespace odeint {
namespace detail {

template< class Stepper , class System , class State , class Time , class Observer >
size_t integrate_const( Stepper stepper , System system , State &start_state , const Time &start_time , const Time &end_time , const Time &dt , Observer observer , stepper_tag )
{
	return 0;
}

template< class Stepper , class System , class State , class Time , class Observer >
size_t integrate_const( Stepper stepper , System system , State &start_state , const Time &start_time , const Time &end_time , const Time &dt , Observer observer , error_stepper_tag )
{
	return 0;
}

template< class Stepper , class System , class State , class Time , class Observer >
size_t integrate_const( Stepper stepper , System system , State &start_state , const Time &start_time , const Time &end_time , const Time &dt , Observer observer , controlled_stepper_tag )
{
	return 0;
}

template< class Stepper , class System , class State , class Time , class Observer >
size_t integrate_const( Stepper stepper , System system , State &start_state , const Time &start_time , const Time &end_time , const Time &dt , Observer observer , dense_output_stepper_tag )
{
	return 0;
}


} // namespace detail
} // namespace odeint
} // namespace numeric
} // namespace boost

#endif /* BOOST_NUMERIC_ODEINT_INTEGRATE_DETAIL_INTEGRATE_CONST_HPP_ */
