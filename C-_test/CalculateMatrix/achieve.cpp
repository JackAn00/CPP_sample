#include<iostream>
#include "Calculate.h"

void Matrix::setMatrix(double m[][3],const int len=3,const int len2=3) {
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len; j++) {
			std::cin >> m[i][j];
			matrix[i][j] = m[i][j];
		}
	}
}

double Matrix::calcalute(double matrix[][3], const int len = 3,const int len2=3) {
	double temp1 = matrix[0][0]*(matrix[1][1] * matrix[2][2] - matrix[2][1] * matrix[1][2]);
	double temp2 =-matrix[0][1]*( matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]);
	double temp3 = matrix[0][2]*(matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);

	return temp1 + temp2 + temp3;
}
