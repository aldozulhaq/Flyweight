#include "Factory.h"
#include "Manager.h"

int main()
{
	Factory factory;
	Manager manager;
	cout << "Generating Objects..." << endl;
	manager.generateObject();
	cout << "Displaying Objects..." << endl;
	manager.printArray();
	manager.printVectorSize();

	int opt = 0;
	while (opt != 99)
	{
		cout << endl;
		cout << "1. Use Object" << endl;
		cout << "2. Display All Objects" << endl;
		cout << "3. List of Object Created On Vector" << endl;
		cout << "99. exit" << endl;
		cout << "[] : "; cin >> opt;

		switch (opt)
		{
		case 1:
			manager.useObject();
			break;
		case 2:
			manager.printArray();
			break;
		case 3:
			manager.printVectorSize();
			break;
		}
	}
}