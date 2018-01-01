#include <bits/stdc++.h>

using namespace std;

#define MAX(a, b) ( (a > b ) ? a : b )
#define MIN(a, b) ( (a < b ) ? a : b )
#define EPS 1e-9
#define PI 3.141592653589793

#define LIMIT 100

double DEG_TO_RAD(double a){
  return (a * PI)/180.00;
}

class Point{
  public:
    double x;
    double y;
    Point() :  x(0), y(0) {}
    Point(int _x, int _y) : x(_x), y(_y) {}

    bool operator < (Point p){
      if (fabs(this->x - p.x) > EPS){
        return this->x < p.x;
      }
      else {
        return this->y < p.y;
      }
    }

    bool operator == (Point p){
      return fabs(this->x - p.x) < EPS && fabs(this->y == p.y) < EPS;
    }

    double dist(){
      return hypot(this->x, this->y);
    }

    double dist(Point p){
      return hypot(this->x - p.x, this->y - p.y);
    }

    Point rotate(Point p, double theta){
      double rad = DEG_TO_RAD(theta);
      return Point(p.x*cos(rad) - p.y*sin(rad), p.x*sin(rad) + p.y*cos(rad));
    }

};

class Line{
  public:
    double a;
    double b;
    double c;
    Line() : a(0), b(0), c(0) {}
    Line(double _a, double _b, double _c) : a(_a), b(_b), c(_c) {}
    Line(Point p1, Point p2){
      if (fabs(p1.x-p2.x) < EPS){
        a = 1.0;
        b = 0.0;
        c = -p1.x;
      }
      else {
        a = -(p1.y-p2.y)/(p1.x - p2.x);
        b = 1.0;
        c = -(a*p1.x)- p1.y;
      }
    }
    bool isParallel(Line l){
      return fabs(this->a - l.a) < EPS && fabs(this->b - l.b) < EPS;
    }

    bool isSame(Line l){
      return this->isParallel(l) && fabs(this->c - l.c) < EPS;
    }
    bool isIntesect(Line l, Point &p){
      if(this->isParallel(l)) return false;
      p.x = (l.b * this->c - this->b*l.c)/(l.a*this->b + l.b*this->a);
      if (fabs(this->b) > EPS)  p.y = -(this->a*p.x + this->c);
      else                      p.y = -(l.a*p.x + l.c);
      return true;
    }
};

//  ***** MAIN *****
int main(){
  //ios::sync_with_stdio(false);
  cin.tie(NULL);

  return 0;
}
