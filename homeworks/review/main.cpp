#include <iostream>
#include <vector>


class Shape
{
public:
	virtual void draw() {}
};

class Line : public Shape
{
public:
	void draw() { std::cout << "Line"; }
};

class Circle : public Shape
{
public:
	void draw() { std::cout << "Circle"; }

};

int main()
{

	/*Line line;
	Shape& shape = line;
	shape.draw();
	Circle c;
	Shape& shape_c = c;
	shape_c.draw();*/

	std::vector<std::reference_wrapper<Shape>> shapes;
	Line line;
	Circle c;
	shapes.push_back(line);
	shapes.push_back(c);

	for (auto wrsshape : shapes) {
		wrsshape.get().draw();
	}

}
