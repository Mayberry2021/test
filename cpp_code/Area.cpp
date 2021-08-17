#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;


class Shape{
public:
    Shape() {cin >> r;}
    virtual double area() = 0;
public:
    double r=0.0; 
};

class Circle: public Shape{
public:
    Circle():Shape() {}
    double area() { return r*r*(atan(1)*4.0); }
};

class Rectangle: public Shape{
public:
    Rectangle():Shape() {cin >> r2;}
    double area() { return r*r2; }
private:
double r2 = 0.0;
};

class Triangle : public Shape{
public:
    Triangle():Shape() {}
    double area() {return sqrt(3)/4 * pow(r,2); }
};


int main(){
    int input_num;
    int num1, num2;
    char shape_name;
    double result=0.0;

    cin >> input_num;

    for(int i=0; i<input_num; i++){
        cin >> shape_name;
        if(shape_name == 'C'){
            Circle A;
            result += A.area();
           }
        else if(shape_name == 'T'){
            Triangle B;
            result += B.area();
            }
        else if(shape_name == 'R'){
            Rectangle C;
            result += C.area();
            }
        else {
            break;
            }
    }

    cout << fixed << setprecision(2) << result << endl;

    return 0;
}