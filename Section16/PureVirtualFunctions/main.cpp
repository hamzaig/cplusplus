#include<iostream>
#include<vector>
using namespace std;
class Shape{
private:
    //attributes common to all shapes 
public:
    virtual void draw() = 0 ; //pure virtual function
    virtual void rotate() = 0; //pure virtual function
    virtual ~Shape(){};
};
class Open_Shape : public Shape { //abstract class
public:    
    virtual ~Open_Shape() {};
};

class Closed_Shape : public Shape { //abstract class
public:
    virtual ~Closed_Shape() {};
};

class Line : public Open_Shape {
public:
    virtual void draw() override {
        cout<<"Drawing A Line"<<endl;
    }
    virtual void rotate() override {
        cout<<"Rotating A Line"<<endl;
    }
    virtual ~Line(){}
};

class Circle : public Closed_Shape {
public:
    virtual void draw() override {
        cout<<"Drawing A Circle"<<endl;
    }
    virtual void rotate() override {
        cout<<"Rotating A Circle"<<endl;
    }
    virtual ~Circle(){}
};

class Square : public Closed_Shape {
public:
    virtual void draw() override {
        cout<<"Drawing A Square"<<endl;
    }
    virtual void rotate() override {
        cout<<"Rotating A Square"<<endl;
    }
    virtual ~Square() {
        
    }
};

void screen_refreshing(const vector<Shape*> &shapes){
    cout<<"Refresing"<<endl;
    for(auto s:shapes){
        s->draw();
    }
}

int main(){
//    Shape s;
//    Shape* p = new Shape();
    
//    Circle c;
//    c.draw();
    
//    Shape *ptr = new Circle();
//    ptr->draw();
//    ptr->rotate();

    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();
    
    vector<Shape*> shapes {s1,s2,s3};
//    for(auto s:shapes){
//       s->draw(); 
//    }

    screen_refreshing(shapes);
    
    return 0;
}