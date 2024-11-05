#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Point {
public:
    float x;
    float y;

    Point(int x,int y) {
        this->x = x;
        this->y = y;
    }

    bool operator< (const Point& p2) const {
        float c1 = sqrt(x * x + y * y);
        float c2 = sqrt(p2.x * p2.x + p2.y * p2.y);
        return c1 < c2;
    }

    friend std::ostream& operator<< (std::ostream &out, const Point &p);
};

std::ostream& operator<< (std::ostream &out, const Point &p) {
    out << "(" << p.x << ", " << p.y << ")\n";
    return out;
}

int main()
{
    std::vector<Point> v;
    v.push_back(Point(1, 2));
    v.push_back(Point(10, 12));
    v.push_back(Point(21, 7));
    v.push_back(Point(4, 8));
    std::sort(v.begin(), v.end());

    for (auto& point : v)
        std::cout << point << '\n';

    return 0;
}


