#include <iostream>

using namespace std;

class Shape
{
    public:
        void setWidth(int w)
        {
            width = w;
        }
        void setHeight(int h)
        {
            height = h;
        }
    protected:
        int width;
        int height;
};


class Rectangle: public Shape
{
    public:
        int getArea()
        {
            return (width*height);
        }
};

int main(void) {
    //Rectangle Rect;
    //Rect.setWidth(5);
    //Rect.setHeight(7);
    //std::cout << "Total area: " << Rect.getArea() << std::endl;
    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << isCodingFun << endl;  // Outputs 1 (true)
    cout << isFishTasty << endl;  // Outputs 0 (false)
    return 0;
}
