#include "PID.h"

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {
  /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   */
    p_error = 0;
	i_error = 0;
	d_error = 0;
	output = 0;
	acumulated_error = 0;
	counter = 0;
	(*this).Kp = Kp;
	(*this).Ki = Ki;
	(*this).Kd = Kd;
	dKp = 0.2;
	dKi = 0.001;
	dKd = 1;

}

void PID::UpdateError(double cte) {
  /**
   * TODO: Update PID errors based on cte.
   */
  
    i_error += cte;
	d_error = cte - p_error;
	p_error = cte;
	acumulated_error += cte * cte;
	counter += 1;

}

double PID::TotalError() {
  /**
   * TODO: Calculate and return the total error
   */
  	return acumulated_error;
  // TODO: Add your total error calc here!
}

double PID::UpdateOutput() {

	output = -Kp * p_error - Kd * d_error - Ki * i_error;
	return output;
}