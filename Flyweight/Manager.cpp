#include "Manager.h"

void Manager::generateObject()
{
	srand(time(0));

	for (int i = 0; i < 9; i++)
	{
		array[i] = factory.getObject(randomType(0 + rand() % 3));
		array[i].setCoor(i);
		array[i].setSize(rand(), rand());
	}
}

void Manager::printArray()
{
	for (int i = 0; i < 9; i++)
	{
		array[i].draw();
	}
	cout << endl;
}

void Manager::useObject()
{
	int i;
	cout << "in which coordinate?" << endl;
	cout << "input coordinate : ";
	cin >> i;
	array[i].use();
	cout << endl;
	cout << "Object typed " << array[i].getType() << " at " << i << " is used";
}

void Manager::printVectorSize()
{
	cout << "Object type created : ";
	for (auto i = factory.listOf.begin(); i != factory.listOf.end(); ++i)
	{
		cout << i->getType() << ", ";
	}
	cout << "Therefore size of vector is " << factory.listOf.size() << endl;
}

string Manager::randomType(int index)
{
	return type[index];
}