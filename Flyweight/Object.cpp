#include "Object.h"

void Object::setType(string type)
{
	this->type = type;
	if (type == "circle")
	{
		size[0].type = "radius";
		size[1].type = "radius";
	}
	else if (type == "rectangle")
	{
		size[0].type = "length";
		size[1].type = "width";
	}
	else if (type == "triangle")
	{
		size[0].type = "base";
		size[1].type = "height";
	}
}

string Object::getType()
{
	return type;
}

void Object::draw()
{
	cout << "Draw [ "
		<< type << ", "
		<< size[0].type << " = " << size[0].size
		<< ", "
		<< size[1].type << " = " << size[1].size
		<< " - at Coordinate " << coor
		<< " ]"
		<< " is ";
	if (this->getBool())
	{
		cout << "enabled";
	}
	else {
		cout << "disabled";
	}
	cout << endl;
}
void Object::use()
{
	status = true;
}

void Object::setSize(int x, int y)
{
	size[0].size = x;
	size[1].size = y;
}

Size * Object::getSize()
{
	return size;
}

void Object::setBool(bool y)
{
	status = y;
}

bool Object::getBool()
{
	return status;
}

void Object::setCoor(int x)
{
	coor = x;
}

int Object::getCoor()
{
	return coor;
}