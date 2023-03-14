//#include <iostream>
//
//struct Point {
//	int x;
//	int y;
//	int z;
//public:
//	Point() : x(0) ,y(0), z(0)
//	{
//		//std::cout << "\nin Point's default constructor";
//
//	}
//	Point(int a, int b, int c)
//	{
//		x = a;
//		y = b;
//		z = c;
//		//std::cout << "\nin Point constructor";
//	}
//	~Point() {
//		//std::cout << "\nin Point's destructor\n";
//	}
//	//copy constructor
//	Point(const Point& pt)
//	{
//		x = pt.x;
//		y = pt.y;
//		z = pt.z;
//		//std::cout << "\nin Point's copy constructor";
//	}
//	//move constructor
//	Point(Point&& pt)
//	{
//		x = pt.x;
//		y = pt.y;
//		z = pt.z;
//		//std::cout << "\nin Point's Move constructor";
//	}
//	Point& operator*() {
//
//		std::cout << "\nin \"*\" operator ";
//		return *this;
//
//	}
//	Point& operator=(Point pt) {
//		std::cout << "\nin \"=\" operator ";
//		x = pt.x;
//		y = pt.y;
//		z = pt.z;
//		return *this;
//	}
//	bool operator== (Point pt)
//	{
//		std::cout << "\nin \"==\" operator ";
//		if (this->x == pt.x && this->y == pt.y && this->z == pt.z)
//			return true;
//		else
//			return false;
//	}
//	bool operator!= (Point pt)
//	{
//		std::cout << "\nin \"!=\" operator ";
//		if (this->x == pt.x && this->y == pt.y && this->z == pt.z)
//			return false;
//		else
//			return true;
//	}
//	Point& operator+(Point pt)
//	{
//		std::cout << "\nin \"+\" operator ";
//		return *Point((this->x + pt.x), (this->y + pt.y), (this->z + pt.z) );
//		
//		/*std::cout << this->x + pt.x;
//	 int tempz= this->z + pt.z;
//	 std::cout << tempz;
//		Point temp((this->x + pt.x) , (this->y + pt.y), tempz);
//		return temp;*/
//	}
//	void* operator new(size_t size)
//	{
//		std::cout << "\nOverloading new operator with size: " << size << std::endl;
//		void* p = ::operator new(size);
//		return p;
//	}
//	void operator delete(void* p)
//	{
//		std::cout << "\nOverloading delete operator " << std::endl;
//		free(p);
//	}
//
//	void PrintX() {
//		std::cout << "\nX:" << this->x;
//	}
//	int getX() {
//		return this->x;
//	}
//	int getY() {
//		return this->y;
//	}
//	int getZ() {
//		return this->z;
//	}
//	
//};
//
//std::ostream& operator<<(std::ostream& os, const Point& pt)
//{
//	os << "(" << pt.x << ", " << pt.y << ", " << pt.z << ")";
//	return os;
//}
//
//std::istream& operator>>(std::istream& is, Point& pt)
//{
//	// read obj from stream
//	std::cout << "\nEnter new Point's values: ";
//	is >> pt.x >> pt.y >> pt.z;
//	return is;
//}
//
//
//int main()
//{
//	Point P1(3, 4, 5);
//	Point P2(2, 2, 33);
//
//	Point P3;
//	std::cout << P1.getZ();
//	std::cout << "\n" << P2.getZ();
//	P3 = P1 + P2;
//	
//	std::cout << "\n" << P3.getX();
//	std::cout << "\n" << P3.getZ();
//
//
//	std::cout << "\nP3 : " << P3;
//
//	Point P4;
//	std::cin >> P4;
//
//	std::cout << "\nP4 : " << P4;
//
//	if (P4 == P3) 
//		std::cout << "\nP4 & P3 are equal";
//	else
//		std::cout << "\nP4 & P3 are NOT equal";
//
//	if (P4 != P3)
//		std::cout << "\nP4 & P3 are NOT equal";
//	else
//		std::cout << "\nP4 & P3 are equal";
//
//	Point* P5 = new Point(1, 1, 1);
//
//	std::cout << *P5;
//
//	delete P5;
//	
//	//std::cout << *P5;
//
//
//	std::cout << "\n\n";
//	return 0;
//}