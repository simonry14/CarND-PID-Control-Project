# CarND-Controls-PID
Self-Driving Car Engineer Nanodegree Program

---


## Reflection

### Describe the effect each of the P, I, D components had in your implementation.

The P component sets the steering angle of the car in proportion to CTE (Cross Track Error) with a proportional factor tau. (-tau * cte)
The P, or "proportional", component had the most directly observable effect on the car’s behaviour. It caused the car to steer proportional (and opposite) to the car’s distance from the lane center(CTE) - if the car was far to the right it steers hard to the left, if it’s slightly to the left it steers slightly to the right.

The D component is the  ts the differential component of the controller which helps to take temporal derivative of error. In other words, the D, or "differential", component counteracts the P component’s tendency to overshoot the center line. A properly tuned D parameter will cause the car to approach the center line smoothly without overshooting.

The I component is the integral or sum of error that helps in dealing with systematic biases by counteracting the bias in the CTE which prevents the P-D controller from reaching the center line. This bias can take several forms, such as a steering drift.

### Describe how the final hyperparameters were chosen.

The final hyperparameters (P, I, D coefficients) were chosen through manual tuning.

