/* $COPYRIGHT_SKOLTECH
 * $LICENSE_LGPL
 *
 * factor2Poses3d.cpp
 *
 *  Created on: Feb 28, 2018
 *      Author: Gonzalo Ferrer
 *              g.ferrer@skoltech.ru
 *              Mobile Robotics Lab, Skoltech 
 */


#include "factor2Poses3d.hpp"
#include <iostream>

using namespace fg;


Factor2Poses3d::Factor2Poses3d(const Mat61 &observation, std::shared_ptr<Node> &n1,
        std::shared_ptr<Node> &n2, const Mat6 &obsCov):
        Factor(), Tobs_(observation)
{
    neighbourNodes_.push_back(n1);
    neighbourNodes_.push_back(n2);
    obs_ = observation;
}

Factor2Poses3d::~Factor2Poses3d()
{
}

void Factor2Poses3d::evaluate()
{
    // residuals
    this->evaluateError();

    // TODO Jacobians
}
matData_t Factor2Poses3d::evaluateError()
{
    // TODO Evaluation of residuals
    r_ = Mat61::Random();
    return 0.0;
}

void Factor2Poses3d::print() const
{
    std::cout << "Printing Factor of 2 Poses, obs= \n" <<
                obs_ << "\nrepresenting the transformation\n" <<
                Tobs_ << " \nand covariance\n" <<
                W_ << "\n Chi2 error = " <<
                chi2_ << " and neighbour Nodes " <<
                neighbourNodes_.size() << std::endl;
}

