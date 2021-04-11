#include <iostream>

using namespace std;

class A
{
    public:
        void Answer()
        {
            cout << "This is a nested class" << endl;
        }
        class B
        {
            public:
                void Answer()
                {
                    cout << "This is a nested class" << endl;
                }
        };
};

class C
{
    public:
        class D
        {
            public:
                void Answer()
                {
                    cout << "This is a nested class" << endl;
                }
                class E
                {
                    public:
                        void Answer()
                        {
                            cout << "This is a nested class" << endl;
                        }
                };
        };
};

int main(void)
{
    A obj1;
    obj1.Answer();
    A :: B obj2;
    obj2.Answer();
    C :: D obj3;
    obj3.Answer();
    C :: D :: E obj4;
    obj4.Answer();
}