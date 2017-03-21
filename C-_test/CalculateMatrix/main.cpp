#include<iostream>
#include "Calculate.h"

int main() {

	int testNum;
	std::cin >> testNum;
	while(testNum--) {
		double mat[3][3];
		Matrix m;
		m.setMatrix(mat,3,3);
		std::cout << m.calcalute(mat, 3, 3) << std::endl;	

	}

	return 0;
}
