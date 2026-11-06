#include <iostream>
using namespace std;

class Shape
{
	public:
		virtual void calculateArea() const
		{
			cout<<"Area calculation for a general shape.\n";
		}

		virtual ~Shape() = default;
};

class Rectangle : public Shape
{
	private:
		double length;
		double width;

	public:
		Rectangle(double l, double w)
		{
			length = l;
			width = w;
		}

		void calculateArea() const override 
		{
			cout<<"Rectangle Area: "<<length*width<<endl;
		}
};

class Circle : public Shape
{
	private:
		double radius;

	public:
		Circle(double r)
		{
			radius = r;
		}

		void calculateArea() const override 
		{
			cout << "Circle Area: "<<3.12159*radius*radius<<endl;
		}
};

int main()
{
	Rectangle rectangle(10, 5);
	Circle circle(7);

	Shape* shape;

	shape = &rectangle;
	shape->calculateArea();

	shape = &circle;
	shape->calculateArea();

	return 0;
}