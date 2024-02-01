#include<iostream>
using namespace std;

class Shape 

{
protected:
    int length;
    int width;

public:
    void values(int x, int y) {
        length = x;
        width = y;
    }
};

class Rectangle : public Shape {
public:
    void res() {
        int area = length * width;
        cout << "Area: " << area << endl;
    }
};

int main() {
    Rectangle rect;
    rect.values(10, 2);
    rect.res();

    return 0;
}