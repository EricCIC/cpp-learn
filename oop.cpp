#include <iostream>

using namespace std;

// 基类
class Shape
{
protected:
    int width;
    int height;

public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
    int getArea()
    {
        return (this->width * this->height);
    }
};

// 派生类
class Rectangle : public Shape
{
};
class Triangle : public Shape
{
private:
    /* data */
public:
    int getArea()
    {
        return (this->width * this->height / 2);
    }
};
class Circle : public Shape{
    private:
        int radius;
    public:
        Circle(int r){
            this->radius = r;
        }
        float getArea()
        {
            return (this->radius * this->radius * 3.14);
        }
};


int main(void)
{
    Rectangle Rect;
    Triangle Tri;
    Rect.setWidth(6);
    Rect.setHeight(7);
    Tri.setWidth(6);
    Tri.setHeight(7);
    // 输出对象的面积
    cout << "Total area: " << Rect.getArea() << endl;
    cout << "Total area: " << Tri.getArea() << endl;
    Circle C(5);
    cout << "Total area: " << C.getArea() << endl;

    return 0;
}