//............For Type casting..........
#include <iostream>

struct Point {
	int x;
	std::string name;
	//int y;
	//int z;
public:
	Point() : x(0)
	{
		//std::cout << "\nin Point's default constructor";

	}
	explicit Point(int a)
	{
		x = a;
		
		//std::cout << "\nin Point constructor";
	}
	Point(std::string na)
	{
		name = na;

		//std::cout << "\nin Point constructor";
	}
	~Point() {
		//std::cout << "\nin Point's destructor\n";
	}
	//copy constructor
	Point(const Point& pt)
	{
		x = pt.x;
		
		//std::cout << "\nin Point's copy constructor";
	}
	//move constructor
	Point(Point&& pt)
	{
		x = pt.x;
		//std::cout << "\nin Point's Move constructor";
	}
	
	
};
// For Type casting
void PrintPoint(Point pt)
{
	std::cout << "\nPrint function\n";
	std::cout << "(" << pt.x << ")";
}




int main()
{
	Point P1(5);
	Point P2(33);

	

	//..........Checking implicit & Explicit casting


	Point P;
	std::string str = "p3";
	PrintPoint(P2);
	
	PrintPoint(str); // Implicit conversion
	
	// Error because of Explicit/Converting Constructor
	PrintPoint(3);

	// Error because of Explicit/Converting Constructor
	Point p6 = 3;


	std::cout << "\n\n";
	return 0;
}