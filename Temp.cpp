#include<iostream>
using namespace std;

class Temperature {

    private:
        double temp;

    public:
        Temperature(double t) : temp(t) {}

        double toFarenheit() const{
            return (temp * 9/5) + 32;
        }

};

int main(void) {
    Temperature t(25.5);
    double temp = t.toFarenheit();
    cout << temp;
}