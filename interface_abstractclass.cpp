#include <iostream>

using namespace std;

class Initial
{
    public:
        virtual double GetArea() = 0;
        void setWidth(int w)
        {
            width = w;
        }
        void setLenght(int l)
        {
            lenght = l;
        }
        void setHeight(int h)
        {
            height = h;
        }
    protected:
        double width;
        double lenght;
        double height;
};

class Rectangle : public Initial
{
    public:
        double GetArea()
        {
            return width * lenght;
        }
};

class Triangle : public Initial
{
    public:
        double GetArea()
        {
            return (width*height)/2;
        }
};

int main(void)
{
    /* Rectangle Class */
    Rectangle Object;
    Object.setWidth(12.02);
    Object.setLenght(13.12);
    cout << Object.GetArea() << endl;
    /* Triangle Class */
    Triangle Objct;
    Objct.setWidth(10.02);
    Objct.setHeight(12.12);
    cout << Objct.GetArea() << endl;
}
