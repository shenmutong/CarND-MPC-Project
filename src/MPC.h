#ifndef MPC_H
#define MPC_H

#include <vector>
#include "Eigen-3.3/Eigen/Core"

using namespace std;

class MPC {
 public:
  MPC();

  virtual ~MPC();

  // Solve the model given an initial state and polynomial coefficients.
  // Return the first actuatotions.
  vector<double> Solve(Eigen::VectorXd state, Eigen::VectorXd coeffs);

  Eigen::VectorXd GetDelayState(Eigen::VectorXd coeffs ,double cte0 ,double v,double a,double delta,double psi);
  double delay_ms = 100;
};

#endif /* MPC_H */
