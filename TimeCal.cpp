#include<iostream>
using namespace std;

class Time{
    private:
        int hour;
        int min;
        int sec;

    public:
        Time (int h, int m, int s) : hour(h) , min(m) , sec(s) {}

        Time operator+(const Time& other) {
            int rhr; int rmin; int rsec;
            rsec = sec + other.sec;
            rmin = min + other.min + (rsec/60);
            rhr = hour + other.hour + (rmin/60);
            return Time(rhr, rmin, rsec);
        }
        
        void display() {
            cout << hour << " : " << min << " : " << sec << endl;
        }
};

int main(void) {

    Time t1(1,50,9);
    Time t2(5,5,29);

    Time t3 = t1 + t2;
    t3.display();

}