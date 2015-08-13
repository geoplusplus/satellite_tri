#include <windows.h>
#include <mex.h>
#include <matrix.h>


#include <Eigen/Core>
#include <Eigen/LU>
#include <Eigen/Eigenvalues>
//#include <unsupported/Eigen/MPRealSupport>
#include <algorithm>

#include <iostream>

using Eigen::Matrix;
using Eigen::Map;
using Eigen::EigenSolver;
using Eigen::MatrixXd;
//using mpfr::mpreal;

typedef double T;
//typedef mpreal T;
typedef Matrix<T,Eigen::Dynamic, Eigen::Dynamic>  MatrixXmp;


void computeCoefficients1x20_withNormCoeff(T imageCoordinates, const T
  in2[20], const T in3[20], const T in4[12], T output2[20])
{
  T t2;
  T t3;
  T t4;
  T t5;
  T t6;
  T t7;
  T t8;
  T t9;
  T t10;
  T t11;
  T t12;
  T t13;

  /* COMPUTECOEFFICIENTS1X20_WITHNORMCOEFF */
  /*     OUTPUT2 = COMPUTECOEFFICIENTS1X20_WITHNORMCOEFF(IMAGECOORDINATES,IN2,IN3,IN4) */
  /*     This function was generated by the Symbolic Math Toolbox version 6.1. */
  /*     13-Jan-2015 02:40:04 */
  t2 = in4[8] * in4[8];
  t3 = in4[11] * in4[11];
  t4 = in4[7] * in4[7];
  t5 = in4[10] * in4[10];
  t6 = in4[6] * in4[6];
  t7 = in4[9] * in4[9];
  t8 = in4[2] - in4[5];
  t9 = in4[1] - in4[4];
  t10 = in4[0] - in4[3];
  t11 = t8 * t8;
  t12 = t9 * t9;
  t13 = t10 * t10;
  output2[0] = in2[19] * in4[8] * in4[11] * t2 * t3 - in3[19] * in4[8] * in4[11]
    * imageCoordinates * t2 * t3;
  output2[1] = in2[16] * in4[7] * in4[10] * t2 * t3 - in3[16] * imageCoordinates
    * in4[7] * in4[10] * t2 * t3;
  output2[2] = in2[18] * in4[8] * in4[11] * t4 * t5 - in3[18] * in4[8] * in4[11]
    * imageCoordinates * t4 * t5;
  output2[3] = in2[15] * in4[7] * in4[10] * t4 * t5 - in3[15] * imageCoordinates
    * in4[7] * in4[10] * t4 * t5;
  output2[4] = in2[13] * in4[6] * in4[9] * t2 * t3 - in3[13] * imageCoordinates *
    in4[6] * in4[9] * t2 * t3;
  output2[5] = in2[10] * in4[8] * in4[11] * in4[7] * in4[10] * in4[6] * in4[9] -
    in3[10] * in4[8] * in4[11] * imageCoordinates * in4[7] * in4[10] * in4[6] *
    in4[9];
  output2[6] = in2[12] * in4[6] * in4[9] * t4 * t5 - in3[12] * imageCoordinates *
    in4[6] * in4[9] * t4 * t5;
  output2[7] = in2[17] * in4[8] * in4[11] * t6 * t7 - in3[17] * in4[8] * in4[11]
    * imageCoordinates * t6 * t7;
  output2[8] = in2[14] * in4[7] * in4[10] * t6 * t7 - in3[14] * imageCoordinates
    * in4[7] * in4[10] * t6 * t7;
  output2[9] = in2[11] * in4[6] * in4[9] * t6 * t7 - in3[11] * imageCoordinates *
    in4[6] * in4[9] * t6 * t7;
  output2[10] = (((-imageCoordinates * (((in3[9] * t2 * t3 + in3[19] * in4[11] *
    t2 * t3 * t8 * 3.0) + in3[16] * in4[10] * t2 * t3 * t9) + in3[13] * in4[9] *
    t2 * t3 * t10) + in2[9] * t2 * t3) + in2[19] * in4[11] * t2 * t3 * t8 * 3.0)
                 + in2[16] * in4[10] * t2 * t3 * t9) + in2[13] * in4[9] * t2 *
    t3 * t10;
  output2[11] = (((-imageCoordinates * (((in3[6] * in4[8] * in4[11] * in4[7] *
    in4[10] + in3[18] * in4[8] * in4[11] * in4[7] * t5 * t9 * 2.0) + in3[16] *
    in4[8] * in4[7] * in4[10] * t3 * t8 * 2.0) + in3[10] * in4[8] * in4[11] *
    in4[7] * in4[10] * in4[9] * t10) + in2[6] * in4[8] * in4[11] * in4[7] * in4
                   [10]) + in2[18] * in4[8] * in4[11] * in4[7] * t5 * t9 * 2.0)
                 + in2[16] * in4[8] * in4[7] * in4[10] * t3 * t8 * 2.0) + in2[10]
    * in4[8] * in4[11] * in4[7] * in4[10] * in4[9] * t10;
  output2[12] = (((-imageCoordinates * (((in3[8] * t4 * t5 + in3[18] * in4[11] *
    t4 * t5 * t8) + in3[15] * in4[10] * t4 * t5 * t9 * 3.0) + in3[12] * in4[9] *
    t4 * t5 * t10) + in2[8] * t4 * t5) + in2[18] * in4[11] * t4 * t5 * t8) +
                 in2[15] * in4[10] * t4 * t5 * t9 * 3.0) + in2[12] * in4[9] * t4
    * t5 * t10;
  output2[13] = (((-imageCoordinates * (((in3[5] * in4[8] * in4[11] * in4[6] *
    in4[9] + in3[17] * in4[8] * in4[11] * in4[6] * t7 * t10 * 2.0) + in3[13] *
    in4[8] * in4[6] * in4[9] * t3 * t8 * 2.0) + in3[10] * in4[8] * in4[11] *
    in4[10] * in4[6] * in4[9] * t9) + in2[5] * in4[8] * in4[11] * in4[6] * in4[9])
                  + in2[17] * in4[8] * in4[11] * in4[6] * t7 * t10 * 2.0) + in2
                 [13] * in4[8] * in4[6] * in4[9] * t3 * t8 * 2.0) + in2[10] *
    in4[8] * in4[11] * in4[10] * in4[6] * in4[9] * t9;
  output2[14] = (((-imageCoordinates * (((in3[4] * in4[7] * in4[10] * in4[6] *
    in4[9] + in3[14] * in4[7] * in4[10] * in4[6] * t7 * t10 * 2.0) + in3[12] *
    in4[7] * in4[6] * in4[9] * t5 * t9 * 2.0) + in3[10] * in4[11] * in4[7] *
    in4[10] * in4[6] * in4[9] * t8) + in2[4] * in4[7] * in4[10] * in4[6] * in4[9])
                  + in2[14] * in4[7] * in4[10] * in4[6] * t7 * t10 * 2.0) + in2
                 [12] * in4[7] * in4[6] * in4[9] * t5 * t9 * 2.0) + in2[10] *
    in4[11] * in4[7] * in4[10] * in4[6] * in4[9] * t8;
  output2[15] = (((-imageCoordinates * (((in3[7] * t6 * t7 + in3[17] * in4[11] *
    t6 * t7 * t8) + in3[14] * in4[10] * t6 * t7 * t9) + in3[11] * in4[9] * t6 *
    t7 * t10 * 3.0) + in2[7] * t6 * t7) + in2[17] * in4[11] * t6 * t7 * t8) +
                 in2[14] * in4[10] * t6 * t7 * t9) + in2[11] * in4[9] * t6 * t7 *
    t10 * 3.0;
  output2[16] = (((((((((-imageCoordinates * (((((((((in3[3] * in4[8] * in4[11]
    + in3[9] * in4[8] * t3 * t8 * 2.0) + in3[6] * in4[8] * in4[11] * in4[10] *
    t9) + in3[5] * in4[8] * in4[11] * in4[9] * t10) + in3[19] * in4[8] * in4[11]
    * t3 * t11 * 3.0) + in3[18] * in4[8] * in4[11] * t5 * t12) + in3[17] * in4[8]
    * in4[11] * t7 * t13) + in3[16] * in4[8] * in4[10] * t3 * t8 * t9 * 2.0) +
    in3[13] * in4[8] * in4[9] * t3 * t8 * t10 * 2.0) + in3[10] * in4[8] * in4[11]
    * in4[10] * in4[9] * t9 * t10) + in2[3] * in4[8] * in4[11]) + in2[9] * in4[8]
                        * t3 * t8 * 2.0) + in2[6] * in4[8] * in4[11] * in4[10] *
                       t9) + in2[5] * in4[8] * in4[11] * in4[9] * t10) + in2[19]
                     * in4[8] * in4[11] * t3 * t11 * 3.0) + in2[18] * in4[8] *
                    in4[11] * t5 * t12) + in2[17] * in4[8] * in4[11] * t7 * t13)
                  + in2[16] * in4[8] * in4[10] * t3 * t8 * t9 * 2.0) + in2[13] *
                 in4[8] * in4[9] * t3 * t8 * t10 * 2.0) + in2[10] * in4[8] *
    in4[11] * in4[10] * in4[9] * t9 * t10;
  output2[17] = (((((((((-imageCoordinates * (((((((((in3[2] * in4[7] * in4[10]
    + in3[8] * in4[7] * t5 * t9 * 2.0) + in3[6] * in4[11] * in4[7] * in4[10] *
    t8) + in3[4] * in4[7] * in4[10] * in4[9] * t10) + in3[16] * in4[7] * in4[10]
    * t3 * t11) + in3[15] * in4[7] * in4[10] * t5 * t12 * 3.0) + in3[14] * in4[7]
    * in4[10] * t7 * t13) + in3[18] * in4[11] * in4[7] * t5 * t8 * t9 * 2.0) +
    in3[12] * in4[7] * in4[9] * t5 * t9 * t10 * 2.0) + in3[10] * in4[11] * in4[7]
    * in4[10] * in4[9] * t8 * t10) + in2[2] * in4[7] * in4[10]) + in2[8] * in4[7]
                        * t5 * t9 * 2.0) + in2[6] * in4[11] * in4[7] * in4[10] *
                       t8) + in2[4] * in4[7] * in4[10] * in4[9] * t10) + in2[16]
                     * in4[7] * in4[10] * t3 * t11) + in2[15] * in4[7] * in4[10]
                    * t5 * t12 * 3.0) + in2[14] * in4[7] * in4[10] * t7 * t13) +
                  in2[18] * in4[11] * in4[7] * t5 * t8 * t9 * 2.0) + in2[12] *
                 in4[7] * in4[9] * t5 * t9 * t10 * 2.0) + in2[10] * in4[11] *
    in4[7] * in4[10] * in4[9] * t8 * t10;
  output2[18] = (((((((((-imageCoordinates * (((((((((in3[1] * in4[6] * in4[9] +
    in3[7] * in4[6] * t7 * t10 * 2.0) + in3[5] * in4[11] * in4[6] * in4[9] * t8)
    + in3[4] * in4[10] * in4[6] * in4[9] * t9) + in3[13] * in4[6] * in4[9] * t3 *
    t11) + in3[12] * in4[6] * in4[9] * t5 * t12) + in3[11] * in4[6] * in4[9] *
    t7 * t13 * 3.0) + in3[17] * in4[11] * in4[6] * t7 * t8 * t10 * 2.0) + in3[14]
    * in4[10] * in4[6] * t7 * t9 * t10 * 2.0) + in3[10] * in4[11] * in4[10] *
    in4[6] * in4[9] * t8 * t9) + in2[1] * in4[6] * in4[9]) + in2[7] * in4[6] *
                        t7 * t10 * 2.0) + in2[5] * in4[11] * in4[6] * in4[9] *
                       t8) + in2[4] * in4[10] * in4[6] * in4[9] * t9) + in2[13] *
                     in4[6] * in4[9] * t3 * t11) + in2[12] * in4[6] * in4[9] *
                    t5 * t12) + in2[11] * in4[6] * in4[9] * t7 * t13 * 3.0) +
                  in2[17] * in4[11] * in4[6] * t7 * t8 * t10 * 2.0) + in2[14] *
                 in4[10] * in4[6] * t7 * t9 * t10 * 2.0) + in2[10] * in4[11] *
    in4[10] * in4[6] * in4[9] * t8 * t9;
  output2[19] = (((((((((((((((((((in2[0] - imageCoordinates *
                                   (((((((((((((((((((in3[0] + in3[3] * in4[11] *
    t8) + in3[2] * in4[10] * t9) + in3[1] * in4[9] * t10) + in3[8] * t5 * t12) +
    in3[7] * t7 * t13) + in3[9] * t3 * t11) + in3[6] * in4[11] * in4[10] * t8 *
    t9) + in3[5] * in4[11] * in4[9] * t8 * t10) + in3[4] * in4[10] * in4[9] * t9
    * t10) + in3[19] * in4[11] * t3 * t8 * t11) + in3[18] * in4[11] * t5 * t8 *
    t12) + in3[17] * in4[11] * t7 * t8 * t13) + in3[16] * in4[10] * t3 * t9 *
    t11) + in3[15] * in4[10] * t5 * t9 * t12) + in3[14] * in4[10] * t7 * t9 *
    t13) + in3[13] * in4[9] * t3 * t10 * t11) + in3[12] * in4[9] * t5 * t10 *
    t12) + in3[11] * in4[9] * t7 * t10 * t13) + in3[10] * in4[11] * in4[10] *
    in4[9] * t8 * t9 * t10)) + in2[3] * in4[11] * t8) + in2[2] * in4[10] * t9) +
    in2[1] * in4[9] * t10) + in2[8] * t5 * t12) + in2[7] * t7 * t13) + in2[9] *
    t3 * t11) + in2[6] * in4[11] * in4[10] * t8 * t9) + in2[5] * in4[11] * in4[9]
    * t8 * t10) + in2[4] * in4[10] * in4[9] * t9 * t10) + in2[19] * in4[11] * t3
    * t8 * t11) + in2[18] * in4[11] * t5 * t8 * t12) + in2[17] * in4[11] * t7 *
                       t8 * t13) + in2[16] * in4[10] * t3 * t9 * t11) + in2[15] *
                     in4[10] * t5 * t9 * t12) + in2[14] * in4[10] * t7 * t9 *
                    t13) + in2[13] * in4[9] * t3 * t10 * t11) + in2[12] * in4[9]
                  * t5 * t10 * t12) + in2[11] * in4[9] * t7 * t10 * t13) + in2
    [10] * in4[11] * in4[10] * in4[9] * t8 * t9 * t10;
}

void computeCoefficients1x20(T imageCoordinates, const T in2[20],
	const T in3[20], T output[20])
{
	/* COMPUTECOEFFICIENTS1X20 */
	/*     OUTPUT = COMPUTECOEFFICIENTS1X20(IMAGECOORDINATES,IN2,IN3) */
	/*     This function was generated by the Symbolic Math Toolbox version 6.1. */
	/*     31-Dec-2014 02:57:38 */
	output[0] = in2[19] - in3[19] * imageCoordinates;
	output[1] = in2[16] - in3[16] * imageCoordinates;
	output[2] = in2[18] - in3[18] * imageCoordinates;
	output[3] = in2[15] - in3[15] * imageCoordinates;
	output[4] = in2[13] - in3[13] * imageCoordinates;
	output[5] = in2[10] - in3[10] * imageCoordinates;
	output[6] = in2[12] - in3[12] * imageCoordinates;
	output[7] = in2[17] - in3[17] * imageCoordinates;
	output[8] = in2[14] - in3[14] * imageCoordinates;
	output[9] = in2[11] - in3[11] * imageCoordinates;
	output[10] = in2[9] - in3[9] * imageCoordinates;
	output[11] = in2[6] - in3[6] * imageCoordinates;
	output[12] = in2[8] - in3[8] * imageCoordinates;
	output[13] = in2[5] - in3[5] * imageCoordinates;
	output[14] = in2[4] - in3[4] * imageCoordinates;
	output[15] = in2[7] - in3[7] * imageCoordinates;
	output[16] = in2[3] - in3[3] * imageCoordinates;
	output[17] = in2[2] - in3[2] * imageCoordinates;
	output[18] = in2[1] - in3[1] * imageCoordinates;
	output[19] = in2[0] - in3[0] * imageCoordinates;
}

/*void rref(mpreal tol, MatrixXmp &A)
{
	size_t m = A.rows();
	size_t n = A.cols();
	int i = 0; 
	int j = 0;
	while( i < m && j < n){				
		int k;
		int temp;
		mpreal p = A.block(i,j,m-i,1).cwiseAbs().maxCoeff(&k, &temp); 
		k += i;
		if(p <= tol){
			A.block(i,j,m-i,1).setZero();
			++j;
		}
		else{
			// swap ith row and kth row
			if(k != i)
				A.block(i,j,1,n-j).swap( A.block(k,j,1,n-j) );
			// Divide the pivot row 
			A.block(i,j,1,n-j).array() /= A(i,j);
			// Subtract multiples of the pivot row from all the other rows
			for(int k = 0; k < m; ++k){
				if(k != i){
					A.block(k,j,1,n-j) -= (A.block(i,j,1,n-j).array()*A(k,j)).matrix();
					A(k,j) = 0.0;
				}
			}			
			++i;
			++j;
		}
	}
}*/

void constructionFinalMatrix(const Matrix<T, 20, 3> &coefficients, MatrixXmp &finalMatrix){

	int multiplier[20 * 80]	= {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
		85, 86, 87, 88, 90, 91, 92, 94, 95, 97, 100, 101, 102, 104, 105, 107, 110, 111, 113, 116,
		86, 87, 88, 89, 91, 92, 93, 95, 96, 98, 101, 102, 103, 105, 106, 108, 111, 112, 114, 117,
		90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 104, 105, 106, 107, 108, 109, 113, 114, 115, 118,
		64, 65, 66, 67, 70, 71, 72, 75, 76, 79, 85, 86, 87, 90, 91, 94, 100, 101, 104, 110,
		66, 67, 68, 69, 72, 73, 74, 77, 78, 81, 87, 88, 89, 92, 93, 96, 102, 103, 106, 112,
		75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 94, 95, 96, 97, 98, 99, 107, 108, 109, 115,
		65, 66, 67, 68, 71, 72, 73, 76, 77, 80, 86, 87, 88, 91, 92, 95, 101, 102, 105, 111,
		71, 72, 73, 74, 76, 77, 78, 80, 81, 83, 91, 92, 93, 95, 96, 98, 105, 106, 108, 114,
		70, 71, 72, 73, 75, 76, 77, 79, 80, 82, 90, 91, 92, 94, 95, 97, 104, 105, 107, 113,
		44, 45, 46, 47, 50, 51, 52, 55, 56, 59, 71, 72, 73, 76, 77, 80, 91, 92, 95, 105,
		37, 38, 39, 40, 44, 45, 46, 50, 51, 55, 65, 66, 67, 71, 72, 76, 86, 87, 91, 101,
		43, 44, 45, 46, 49, 50, 51, 54, 55, 58, 70, 71, 72, 75, 76, 79, 90, 91, 94, 104,
		50, 51, 52, 53, 55, 56, 57, 59, 60, 62, 76, 77, 78, 80, 81, 83, 95, 96, 98, 108,
		49, 50, 51, 52, 54, 55, 56, 58, 59, 61, 75, 76, 77, 79, 80, 82, 94, 95, 97, 107,
		38, 39, 40, 41, 45, 46, 47, 51, 52, 56, 66, 67, 68, 72, 73, 77, 87, 88, 92, 102,
		45, 46, 47, 48, 51, 52, 53, 56, 57, 60, 72, 73, 74, 77, 78, 81, 92, 93, 96, 106,
		36, 37, 38, 39, 43, 44, 45, 49, 50, 54, 64, 65, 66, 70, 71, 75, 85, 86, 90, 100,
		39, 40, 41, 42, 46, 47, 48, 52, 53, 57, 67, 68, 69, 73, 74, 78, 88, 89, 93, 103,
		54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 79, 80, 81, 82, 83, 84, 97, 98, 99, 109,
		90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 104, 105, 106, 107, 108, 109, 113, 114, 115, 118,
		70, 71, 72, 73, 75, 76, 77, 79, 80, 82, 90, 91, 92, 94, 95, 97, 104, 105, 107, 113,
		71, 72, 73, 74, 76, 77, 78, 80, 81, 83, 91, 92, 93, 95, 96, 98, 105, 106, 108, 114,
		75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 94, 95, 96, 97, 98, 99, 107, 108, 109, 115,
		43, 44, 45, 46, 49, 50, 51, 54, 55, 58, 70, 71, 72, 75, 76, 79, 90, 91, 94, 104,
		45, 46, 47, 48, 51, 52, 53, 56, 57, 60, 72, 73, 74, 77, 78, 81, 92, 93, 96, 106,
		54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 79, 80, 81, 82, 83, 84, 97, 98, 99, 109,
		44, 45, 46, 47, 50, 51, 52, 55, 56, 59, 71, 72, 73, 76, 77, 80, 91, 92, 95, 105,
		50, 51, 52, 53, 55, 56, 57, 59, 60, 62, 76, 77, 78, 80, 81, 83, 95, 96, 98, 108,
		49, 50, 51, 52, 54, 55, 56, 58, 59, 61, 75, 76, 77, 79, 80, 82, 94, 95, 97, 107,
		16, 17, 18, 19, 22, 23, 24, 27, 28, 31, 50, 51, 52, 55, 56, 59, 76, 77, 80, 95,
		9, 10, 11, 12, 16, 17, 18, 22, 23, 27, 44, 45, 46, 50, 51, 55, 71, 72, 76, 91,
		15, 16, 17, 18, 21, 22, 23, 26, 27, 30, 49, 50, 51, 54, 55, 58, 75, 76, 79, 94,
		22, 23, 24, 25, 27, 28, 29, 31, 32, 34, 55, 56, 57, 59, 60, 62, 80, 81, 83, 98,
		21, 22, 23, 24, 26, 27, 28, 30, 31, 33, 54, 55, 56, 58, 59, 61, 79, 80, 82, 97,
		10, 11, 12, 13, 17, 18, 19, 23, 24, 28, 45, 46, 47, 51, 52, 56, 72, 73, 77, 92,
		17, 18, 19, 20, 23, 24, 25, 28, 29, 32, 51, 52, 53, 56, 57, 60, 77, 78, 81, 96,
		8, 9, 10, 11, 15, 16, 17, 21, 22, 26, 43, 44, 45, 49, 50, 54, 70, 71, 75, 90,
		11, 12, 13, 14, 18, 19, 20, 24, 25, 29, 46, 47, 48, 52, 53, 57, 73, 74, 78, 93,
		26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 58, 59, 60, 61, 62, 63, 82, 83, 84, 99,
		86, 87, 88, 89, 91, 92, 93, 95, 96, 98, 101, 102, 103, 105, 106, 108, 111, 112, 114, 117,
		65, 66, 67, 68, 71, 72, 73, 76, 77, 80, 86, 87, 88, 91, 92, 95, 101, 102, 105, 111,
		66, 67, 68, 69, 72, 73, 74, 77, 78, 81, 87, 88, 89, 92, 93, 96, 102, 103, 106, 112,
		71, 72, 73, 74, 76, 77, 78, 80, 81, 83, 91, 92, 93, 95, 96, 98, 105, 106, 108, 114,
		37, 38, 39, 40, 44, 45, 46, 50, 51, 55, 65, 66, 67, 71, 72, 76, 86, 87, 91, 101,
		39, 40, 41, 42, 46, 47, 48, 52, 53, 57, 67, 68, 69, 73, 74, 78, 88, 89, 93, 103,
		50, 51, 52, 53, 55, 56, 57, 59, 60, 62, 76, 77, 78, 80, 81, 83, 95, 96, 98, 108,
		38, 39, 40, 41, 45, 46, 47, 51, 52, 56, 66, 67, 68, 72, 73, 77, 87, 88, 92, 102,
		45, 46, 47, 48, 51, 52, 53, 56, 57, 60, 72, 73, 74, 77, 78, 81, 92, 93, 96, 106,
		44, 45, 46, 47, 50, 51, 52, 55, 56, 59, 71, 72, 73, 76, 77, 80, 91, 92, 95, 105,
		10, 11, 12, 13, 17, 18, 19, 23, 24, 28, 45, 46, 47, 51, 52, 56, 72, 73, 77, 92,
		2, 3, 4, 5, 10, 11, 12, 17, 18, 23, 38, 39, 40, 45, 46, 51, 66, 67, 72, 87,
		9, 10, 11, 12, 16, 17, 18, 22, 23, 27, 44, 45, 46, 50, 51, 55, 71, 72, 76, 91,
		17, 18, 19, 20, 23, 24, 25, 28, 29, 32, 51, 52, 53, 56, 57, 60, 77, 78, 81, 96,
		16, 17, 18, 19, 22, 23, 24, 27, 28, 31, 50, 51, 52, 55, 56, 59, 76, 77, 80, 95,
		3, 4, 5, 6, 11, 12, 13, 18, 19, 24, 39, 40, 41, 46, 47, 52, 67, 68, 73, 88,
		11, 12, 13, 14, 18, 19, 20, 24, 25, 29, 46, 47, 48, 52, 53, 57, 73, 74, 78, 93,
		1, 2, 3, 4, 9, 10, 11, 16, 17, 22, 37, 38, 39, 44, 45, 50, 65, 66, 71, 86,
		4, 5, 6, 7, 12, 13, 14, 19, 20, 25, 40, 41, 42, 47, 48, 53, 68, 69, 74, 89,
		22, 23, 24, 25, 27, 28, 29, 31, 32, 34, 55, 56, 57, 59, 60, 62, 80, 81, 83, 98,
		85, 86, 87, 88, 90, 91, 92, 94, 95, 97, 100, 101, 102, 104, 105, 107, 110, 111, 113, 116,
		64, 65, 66, 67, 70, 71, 72, 75, 76, 79, 85, 86, 87, 90, 91, 94, 100, 101, 104, 110,
		65, 66, 67, 68, 71, 72, 73, 76, 77, 80, 86, 87, 88, 91, 92, 95, 101, 102, 105, 111,
		70, 71, 72, 73, 75, 76, 77, 79, 80, 82, 90, 91, 92, 94, 95, 97, 104, 105, 107, 113,
		36, 37, 38, 39, 43, 44, 45, 49, 50, 54, 64, 65, 66, 70, 71, 75, 85, 86, 90, 100,
		38, 39, 40, 41, 45, 46, 47, 51, 52, 56, 66, 67, 68, 72, 73, 77, 87, 88, 92, 102,
		49, 50, 51, 52, 54, 55, 56, 58, 59, 61, 75, 76, 77, 79, 80, 82, 94, 95, 97, 107,
		37, 38, 39, 40, 44, 45, 46, 50, 51, 55, 65, 66, 67, 71, 72, 76, 86, 87, 91, 101,
		44, 45, 46, 47, 50, 51, 52, 55, 56, 59, 71, 72, 73, 76, 77, 80, 91, 92, 95, 105,
		43, 44, 45, 46, 49, 50, 51, 54, 55, 58, 70, 71, 72, 75, 76, 79, 90, 91, 94, 104,
		9, 10, 11, 12, 16, 17, 18, 22, 23, 27, 44, 45, 46, 50, 51, 55, 71, 72, 76, 91,
		1, 2, 3, 4, 9, 10, 11, 16, 17, 22, 37, 38, 39, 44, 45, 50, 65, 66, 71, 86,
		8, 9, 10, 11, 15, 16, 17, 21, 22, 26, 43, 44, 45, 49, 50, 54, 70, 71, 75, 90,
		16, 17, 18, 19, 22, 23, 24, 27, 28, 31, 50, 51, 52, 55, 56, 59, 76, 77, 80, 95,
		15, 16, 17, 18, 21, 22, 23, 26, 27, 30, 49, 50, 51, 54, 55, 58, 75, 76, 79, 94,
		2, 3, 4, 5, 10, 11, 12, 17, 18, 23, 38, 39, 40, 45, 46, 51, 66, 67, 72, 87,
		10, 11, 12, 13, 17, 18, 19, 23, 24, 28, 45, 46, 47, 51, 52, 56, 72, 73, 77, 92,
		0, 1, 2, 3, 8, 9, 10, 15, 16, 21, 36, 37, 38, 43, 44, 49, 64, 65, 70, 85,
		3, 4, 5, 6, 11, 12, 13, 18, 19, 24, 39, 40, 41, 46, 47, 52, 67, 68, 73, 88,
		21, 22, 23, 24, 26, 27, 28, 30, 31, 33, 54, 55, 56, 58, 59, 61, 79, 80, 82, 97};

	/*bool usefulPolynomialId[240] = { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 0, 0, 1, 0, 0, 1, 
		0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1,
		1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0};*/
	bool usefulPolynomialId[240] = {1,1,1,1,1,1,1,0,0,0,0,0,1,1,1,0,1,1,0,0,1,0,0,1,0,0,0,0,0,0,1,0,1,1,1,1,0,1,1,1,0,0,0,1,1,1,1,0,0,1,1,1,1,1,1,1,0,0,1,1,0,1,1,
		0,1,1,0,0,0,0,1,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,
		0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0};

	int finalMatrixColIdx = 0;
	for (int i = 0; i < 240; ++i) {
		if (usefulPolynomialId[i]) {
			int multiplier_baseId = i / 3;
			int equationId = i % 3;
			for (int j = 0; j < 20; ++j){
				finalMatrix(multiplier[multiplier_baseId * 20+ j], finalMatrixColIdx) = static_cast<T>( coefficients(j, equationId) );		
			}
			++finalMatrixColIdx;
		}
	}	

/*	MatrixXmp finalMatrix_temp = finalMatrix.transpose();
	rref(7e-14, finalMatrix_temp);
	finalMatrix = finalMatrix_temp.transpose(); */

	 //compute echelon form of the final matrix	
//	int permuteStart[] =  { 63, 82, 83, 84};
//	int permuteEnd[] = { 93, 100, 101, 102};
	int permuteStart[30] = {64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,85,86,87,88,89,90,91,92,93, 100, 101, 102 };
	Eigen::PermutationMatrix<120> perm; perm.setIdentity();
	for (int i = 0; i < 30; ++i){
		perm.applyTranspositionOnTheRight(permuteStart[i], 63+i );
	}	
	finalMatrix = (finalMatrix.transpose() * perm).transpose();
	Eigen::PartialPivLU<MatrixXmp> lu_93_93(finalMatrix.topRows(93).transpose());
	finalMatrix.bottomRows<27>() = (lu_93_93.solve(finalMatrix.bottomRows<27>().transpose())).transpose();
	finalMatrix = (finalMatrix.transpose() * perm.inverse()).transpose();
	
}

void constructionActionMatrix(const MatrixXmp &finalMatrix, MatrixXmp &actionMatrix){

	int colId[20] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 20, 21, 22, 25 };
	int rowId[20] = { 3, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26};
	for (int i = 0; i < 20; ++i){
		actionMatrix(rowId[i], colId[i]) = static_cast<T>(1.0);
	}
		
	int col_ids_finalmatrix_for_action_matrix[27] = { 63, 82, 83, 84, 94, 95, 96, 97, 98, 99, 103, 104, 
		105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119 };
	int row_ids_finalmatrix_for_action_matrix[7] = { 35, 61, 62, 78, 79, 80, 89 };
	int row_ids_in_action_matrix[7] = { 0, 1, 2, 4, 5, 6, 10 };

	for (int i = 0; i < 7; ++i){
		for (int j = 0; j < 27; ++j){			
			actionMatrix(row_ids_in_action_matrix[i], j) = -finalMatrix(col_ids_finalmatrix_for_action_matrix[j], row_ids_finalmatrix_for_action_matrix[i]);
		}
	}
}

//double eval_rpc(const double C[20],  double lat,  double lon,  double alt){
//	return C[0] + C[1]*lon + C[2]*lat + C[3]*alt + C[4]*lon*lat + C[5]*lon*alt + C[6]*lat*alt + C[7]*lon*lon + 
//		C[8]*lat*lat + C[9]*alt*alt + C[10]*lat*lon*alt + C[11]*lon*lon*lon + C[12]*lon*lat*lat + C[13]*lon*alt*alt +
//		C[14]*lon*lon*lat + C[15]*lat*lat*lat + C[16]*lat*alt*alt + C[17]*lon*lon*alt + C[18]*lat*lat*alt + C[19]*alt*alt*alt;
//}

//bool isConditionSatisfied( double imageCoordinates, const double coeffs7[20], const double coeffs8[20], const Eigen::Vector3d &result){
//
//	//double *X3D[3]	// alt, lat, lon
//	const double &alt = result(0);
//	const double &lat = result(1);
//	const double &lon = result(2);
//	double projectedRowCoord = eval_rpc(coeffs7, lat, lon, alt) / eval_rpc(coeffs8, lat, lon, alt);
//	if (abs(projectedRowCoord - imageCoordinates) < 1e-3)
//		return true;
//	else
//		return false;
//}

int computePosition(const MatrixXmp &actionMatrix,  const T coeffs7[20], const T coeffs8[20], double X3D[3*27]){

	const EigenSolver<MatrixXmp> eigen_solver(actionMatrix);
	const EigenSolver<MatrixXmp>::EigenvectorsType &eigen_vectors = eigen_solver.eigenvectors();
	const EigenSolver<MatrixXmp>::EigenvalueType &eigen_values = eigen_solver.eigenvalues();
	Eigen::Map< Matrix<double, 3, 27> > X3D_matrix(X3D); 
	X3D_matrix.setZero();

	int solutionIdx = 0;
	for (int i = 0; i < eigen_vectors.cols(); ++i)	{
		if (eigen_values[i].imag() == 0) {	// real solutions
			Matrix<T, 27, 1> eigen_vector = eigen_vectors.col(i).real();
			Eigen::Vector3d result = (eigen_vector.middleRows<3>(23) / eigen_vector(26)).cast<double>();

			//if (result(0) >= -1.0 &&  result(0) <= 1.0 && result(1) >= -1.0 &&  result(1) <= 1.0){				
			//if (isConditionSatisfied(imageCoordinates, coeffs7, coeffs8, result)){
			//	X3D[0] = result(0);
			//	X3D[1] = result(1);
			//	X3D[2] = result(2);
			//	return true;
			//}
			X3D_matrix.col(solutionIdx) = result;
			solutionIdx++;
		}
	}
	
	//X3D[0] = X3D[1] = X3D[2] = 123.0;
	return solutionIdx;	// return number of solutions

}



void triangulation(const double coeffs1[20], const double coeffs2[20], const double coeffs3[20], const double coeffs4[20], const double coeffs5[20], const double coeffs6[20], 
	const double coeffs7[20], const double coeffs8[20], const double long_lat_height_param[12], const double imageCoordinates[4], double X3D[3*27]){
	
	//mpreal::set_default_prec(64);

	T coeffs1_newType[20]; std::copy(coeffs1, coeffs1 + 20, coeffs1_newType);
	T coeffs2_newType[20]; std::copy(coeffs2, coeffs2 + 20, coeffs2_newType);
	T coeffs3_newType[20]; std::copy(coeffs3, coeffs3 + 20, coeffs3_newType);
	T coeffs4_newType[20]; std::copy(coeffs4, coeffs4 + 20, coeffs4_newType);
	T coeffs5_newType[20]; std::copy(coeffs5, coeffs5 + 20, coeffs5_newType);
	T coeffs6_newType[20]; std::copy(coeffs6, coeffs6 + 20, coeffs6_newType);
	T coeffs7_newType[20]; std::copy(coeffs7, coeffs7 + 20, coeffs7_newType);
	T coeffs8_newType[20]; std::copy(coeffs8, coeffs8 + 20, coeffs8_newType);
	T long_lat_height_param_newType[12]; std::copy(long_lat_height_param, long_lat_height_param + 12, long_lat_height_param_newType);
	T imageCoordinates_newType[3];  std::copy(imageCoordinates, imageCoordinates + 3, imageCoordinates_newType);

	Matrix<T, 20, 3> coefficients;
	computeCoefficients1x20(imageCoordinates_newType[0], coeffs1_newType, coeffs2_newType, coefficients.col(0).data());
	computeCoefficients1x20(imageCoordinates_newType[1], coeffs3_newType, coeffs4_newType, coefficients.col(1).data());
	

	computeCoefficients1x20_withNormCoeff(imageCoordinates_newType[2], coeffs5_newType, coeffs6_newType, long_lat_height_param_newType, coefficients.col(2).data());
	
	// do the multiplications and also remove unnecessary polynomials and monomials, and put in a new matrix
	MatrixXmp finalMatrix = Matrix<T, 120, 93>::Zero();
	constructionFinalMatrix(coefficients, finalMatrix);
	

	// extract action matrix
	//Matrix<double, 27, 27> actionMatrix = Matrix<double, 27, 27>::Zero();
	MatrixXmp actionMatrix = Matrix<T, 27, 27>::Zero();
	constructionActionMatrix(finalMatrix, actionMatrix);
	
	int numOfSolutions = computePosition(actionMatrix, coeffs7_newType, coeffs8_newType, X3D);

	// denormalize X3D back to object space (real world) coordinate system
	
	for(int i = 0; i<numOfSolutions; ++i){
		X3D[i*3+0] = X3D[i*3+0] * long_lat_height_param[8] + long_lat_height_param[2];
		X3D[i*3+1] = X3D[i*3+1] * long_lat_height_param[7] + long_lat_height_param[1];
		X3D[i*3+2] = X3D[i*3+2] * long_lat_height_param[6] + long_lat_height_param[0];
	}
	/*printf("%f,%f,%f,%f,%f,%f\n",long_lat_height_param[8], long_lat_height_param[2], long_lat_height_param[7], 
		long_lat_height_param[1], long_lat_height_param[6], long_lat_height_param[0]);*/

}


double get_wall_time(){
	LARGE_INTEGER time, freq;
	if (!QueryPerformanceFrequency(&freq)){
		//  Handle error
		return 0;
	}
	if (!QueryPerformanceCounter(&time)){
		//  Handle error
		return 0;
	}
	return (double)time.QuadPart / freq.QuadPart;
}
double get_cpu_time(){
	FILETIME a, b, c, d;
	if (GetProcessTimes(GetCurrentProcess(), &a, &b, &c, &d) != 0){
		//  Returns total user time.
		//  Can be tweaked to include kernel times as well.
		return
			(double)(d.dwLowDateTime |
			((unsigned long long)d.dwHighDateTime << 32)) * 0.0000001;
	}
	else{
		//  Handle error
		return 0;
	}
}



void mexFunction(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]){

	/*printf("The output of the function is altitude, latitude and longtitude in the object space (real world)\n");
	printf("The unit for altitude is meter, and for latitude and longtitude is degree\n");*/

	if (nrhs != 10){
		printf("The number of parameters is wrong");
		return;
	}
	double *coeffs1 = mxGetPr(prhs[0]);
	double *coeffs2 = mxGetPr(prhs[1]);
	double *coeffs3 = mxGetPr(prhs[2]);
	double *coeffs4 = mxGetPr(prhs[3]);
	double *coeffs5 = mxGetPr(prhs[4]);
	double *coeffs6 = mxGetPr(prhs[5]);
	double *coeffs7 = mxGetPr(prhs[6]);
	double *coeffs8 = mxGetPr(prhs[7]);
	double *long_lat_height_param = mxGetPr(prhs[8]);

	double *imageCoordinates = mxGetPr(prhs[9]);	// row1, col1, row2, col2
	

	mxArray *AA = mxCreateDoubleMatrix(3, 27, mxREAL);
	double *X3D = mxGetPr(AA);	// alt, lat, lon
	plhs[0] = AA;		
	
	double wall1 = get_wall_time();
	triangulation(coeffs1, coeffs2, coeffs3, coeffs4, coeffs5, coeffs6, coeffs7, coeffs8, long_lat_height_param, imageCoordinates, X3D);

	double elapsed = get_wall_time() - wall1;
	printf("timing: %f\n", elapsed);

	//	printf( "timing: %f\n", GetCounter() );


}