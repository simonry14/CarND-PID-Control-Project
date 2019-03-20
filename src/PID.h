#ifndef PID_H
#define PID_H

class PID {
 public:
  /**
   * Constructor
   */
  PID();

  /**
   * Destructor.
   */
  virtual ~PID();

  /**
   * Initialize PID.
   * @param (Kp_, Ki_, Kd_) The initial PID coefficients
   */
  void Init(double Kp_, double Ki_, double Kd_);

  /**
   * Update the PID error variables given cross track error.
   * @param cte The current cross track error
   */
  void UpdateError(double cte);

  /**
   * Calculate the total PID error.
   * @output The total PID error
   */
  double TotalError();
  
  double UpdateOutput();

  
  //ALSO public for simplicity
  
  int counter;
  int twiddle_counter;
  /**
   * PID Errors
   */
  double p_error;
  double i_error;
  double d_error;
  double acumulated_error;
  double best_acumulated_error;


  /**
   * PID Coefficients
   */ 
  double Kp;
  double Ki;
  double Kd;
  //___________
  double best_Kp;
  double best_Ki;
  double best_Kd;
  double dKp;
  double dKi;
  double dKd;
  
  //Output
  
  double output;

};

#endif  // PID_H