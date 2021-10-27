#ifndef CPP_2021_POINT_H
#define CPP_2021_POINT_H
#define M 2000


class Point {
private:
    int x, y;
public:
    Point(int x = 0, int y = 0);

    int getX() const;

    int getY() const;

    double distanceTo(const Point &point) const;
};


#endif //CPP_2021_POINT_H
