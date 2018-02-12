/*
 * matrix_base.hpp
 *
 *  Created on: Jun 21, 2017
 *      Author: gonzalo
 */

#ifndef MATRIX_BASE_HPP_
#define MATRIX_BASE_HPP_

#include <Eigen/Dense>

// Definition of squared matrices
typedef Eigen::Matrix<double, 2,2> Mat2;
typedef Eigen::Matrix<double, 3,3> Mat3;
typedef Eigen::Matrix<double, 4,4> Mat4;
typedef Eigen::Matrix<double, 5,5> Mat5;
typedef Eigen::Matrix<double, 6,6> Mat6;


// Definition of column matrices (vectors)
typedef Eigen::Matrix<double, 2,1> Mat21;
typedef Eigen::Matrix<double, 3,1> Mat31;
typedef Eigen::Matrix<double, 4,1> Mat41;
typedef Eigen::Matrix<double, 5,1> Mat51;
typedef Eigen::Matrix<double, 6,1> Mat61;






#endif /* MATRIX_BASE_HPP_ */
