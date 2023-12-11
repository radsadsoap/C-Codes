#include <iostream>
using namespace std;

class Map{

    private:
        int xaxis;
        int yaxis;

    public:
        Map (int x, int y) : xaxis(x) , yaxis(y) {}

        Map operator+(const Map& other) const{
            int result1 = xaxis + other.xaxis;
            int result2 = yaxis + other.yaxis;
            return Map(result1, result2);
        }

        void display() const{
            cout << "x = " << xaxis << ", y = " << yaxis << endl;
        }

};

int main(void) {

    Map m1(30,40);
    Map m2(20,15);

    Map combo = m1 + m2;

    cout << "Combined map : ";
    combo.display();

}