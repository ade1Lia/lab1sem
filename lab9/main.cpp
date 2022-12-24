#include <iostream>
#include <math.h>
#define PI 3.14


class Circle {
private:
	double m_circleRadius = 0;

public:
	Circle() {};
	~Circle() {};
	bool setCircleRadius(double circleRadius) {
		if (circleRadius <= 0) {
			std::cout << "Wrong radius of circle\n";
			return false;
		}
		m_circleRadius = circleRadius;
	}
	double circleLenght() {
		double len = m_circleRadius*2*PI;
		return len;
	}
	void circleInfo() {
		std::cout << "Radius of circle is " << m_circleRadius << std::endl;
		std::cout << "Circle lenght is " << circleLenght() << std::endl;
	}
};




int main() {

	Circle circle;
	double radius;

	std::cout << "Input radius\n";
	std::cin >> radius;


	if (circle.setCircleRadius(radius)) {
		circle.circleInfo();
	}
	return 0;
}
