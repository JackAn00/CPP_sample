#pragma once
#ifndef _CALCULATE_H_
#define _CALCULATE_H_

class Matrix {

public :
	double calcalute(double [][3], const int ,const int ) ;
	void setMatrix(double [][3], const int,const int ) ;
	private:
		double matrix[3][3];
};
#endif // !_CALCULATE_H_

