#include <iostream>
using namespace std;

class Point {
public:
    Point();
    Point(double x, double y);
    void set_x(double new_x);
    void set_y(double new_y);
    double get_x() const {return x;}
    double get_y() const {return y;}
    void move(double dx, double dy);
    void print() const;
    const Point operator -() const {return {-x, -y};}
    bool operator ==(const Point& point) const {return x==point.x && y==point.y;}
    friend ostream& operator <<(ostream& outputStream, Point& point);
    friend istream& operator >>(istream& inputStream, Point& point);
private:
    double x{0.0};
    double y{0.0};
};

Point operator +(const Point& point1, const Point& point2) {
    return {point1.get_x() + point2.get_x(), point1.get_y() + point2.get_y()};
}

Point operator -(const Point& point1, const Point& point2) {
    return {point1.get_x() - point2.get_x(), point1.get_y() - point2.get_y()};
}

double operator *(const Point& point1, const Point& point2) {
    return (point1.get_x() * point2.get_x())+(point1.get_y() * point2.get_y());
}

class Rectangle{
public:
    Rectangle();
    Rectangle(double w, double h);
    Rectangle(int w, int h): width((double)w), height((double)h) {};
    void set_width(double w);
    void set_height(double h);
    double get_width() const;
    double get_height() const;
    double size() const;
    double biggersize(const Rectangle& rec) const {
        return size() < rec.size()? size() : rec.size();
    }
    bool operator <(const Rectangle& rec) const {
        return (size() < rec.size());
    }
    bool operator ==(const Rectangle& rec) const {
        return size() == rec.size();
    }
private:
    double width{5.0};
    double height{5.0};
};

Rectangle pointToRectangle (Point& point) {
    return {point.get_x(), point.get_y()};
}

class HotDogStand {
public:
    HotDogStand() = default;
    explicit HotDogStand(int id) : id(id) {}
    HotDogStand(int id, int sold) : id(id), sold(sold) {total += sold;}
    void set_id(int new_id) {id = new_id;}
    void JustSold() {++total; ++sold;}
    int getSold() const {return sold;}
    static int getTotalSold() {return total;}
private:
    static int total;
    int sold{0}, id{0};
};
int HotDogStand::total = 0;

void circle() {
    double rad;
    double area;
    printf("Enter radius of the circle:");
    scanf_s("%lf", &rad, sizeof(rad));

    area = rad*rad*3.14159265358979f;
    printf("Area of circle: %f\n", area);
}

void rectangle_exec() {
    Rectangle r1(5.0, 5.0), r2;
    r1.set_height(10.0);
    cout << "The width of the rectangle is " << r1.get_width() << endl
         << "The height of the rectangle is " << r1.get_height() << endl
         << "The size of the rectangle is " << r1.size() << endl;
}

void point_exec() {
    Point p1, p2(10.0, 5.0), p3;
    p3 = p1 - (-p2);
    p2 = (-(-p2));
    p2.move(-10.0, -5.0);
    cout << "p1: " << p1 << endl
         << "p2: " << p2 << endl
         << "p3: " << p3 << endl;
    // Rectangle rec = pointToRectangle(p3);
    // cout << rec.size() << endl;
}

void HotDog_exec() {
    HotDogStand h1(1), h2(2, 1);
    h1.JustSold();
    h2.JustSold();
    h2.JustSold();
    cout << h1.getSold() << ' ' << h2.getSold() << ' ' << HotDogStand::getTotalSold() << endl;
}


int& Example(int& pref) {
    pref++;
    return pref;
}

int main() {
    point_exec();
    int num = 20;
    int& ref = Example(num); // num++; int& ref = pref++;
    printf("%d\n", ref);
    return 0;
}


// Point::Point(): x(0.), y(0.) {/* body intentionally empty */}
Point::Point() = default;

Point::Point(double x, double y) : x(x), y(y) {}

void Point::set_x(double new_x) {x = new_x;}

void Point::set_y(double new_y) {y = new_y;}

void Point::move(double dx, double dy) {x += dx; y += dy;}

void Point::print() const{cout << '(' << x << ',' << y << ')';}

ostream& operator <<(ostream& outputStream, Point& point) {
    outputStream << '(' << point.x << ',' << point.y << ')';
    return outputStream;
}

istream& operator >>(istream& inputStream, Point& point) {
    inputStream >> point.x >> point.y;
    return inputStream;
}

Rectangle::Rectangle() = default;

Rectangle::Rectangle(double w, double h) : width(w), height(h) {}

void Rectangle::set_width(double w) {width = w;}

void Rectangle::set_height(double h) {height = h;}

double Rectangle::get_height() const{return height;}

double Rectangle::get_width() const{return width;}

double Rectangle::size() const{return height * width;}
