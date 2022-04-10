#include <iostream>

using namespace std;

struct Size {
	string type;
	int size = 0;
};

class Object {
private:
	string type;
	Size size[2];
	int coor = 0;
	bool status = false;
public:
	void setType(string type);
	string getType();
	void draw();
	void setSize(int x, int y);
	Size* getSize();
	void use();
	void setBool(bool y);
	bool getBool();
	void setCoor(int x);
	int getCoor();
};