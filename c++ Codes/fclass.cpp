// friend class
#include <iostream>
using namespace std;
class CSquare;//Declaration of class name

class CRectangle {
    int width, height;
  public:
    int area ()
      {return (width * height);}
      //void convert(int a)
      //void display(int a)
      //Passing object as a parameter
    void convert (CSquare a);


};

class CSquare {
  private:
    int side;
  public:
    void set_side (int a)
      {side=a;}//side=4;
    friend class CRectangle;
};

void CRectangle::convert (CSquare a) {
  width = a.side;
  height = a.side;
}

int main () {
  CSquare sqr;//object of Csquare
  CRectangle rect; //object of CRectangle
  sqr.set_side(4); //invoking set_side, we are passing 4 as parameter
  rect.convert(sqr);//we are passing square object as a parameter
  cout << rect.area();
  return 0;
}
