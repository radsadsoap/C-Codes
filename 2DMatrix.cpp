#include <bits/stdc++.h>
using namespace std;

class Matrix{

    private:
        int data[2][2];

    public:
        Matrix(int a, int b, int c, int d) {
            data[0][0] = a;
            data[0][1] = b;
            data[1][0] = c;
            data[1][1] = d;
        }

        Matrix operator+(const Matrix& other) const{

            Matrix result(0,0,0,0);
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    result.data[i][j] = data[i][j] + other.data[i][j];
                }  
            }
            return Matrix(result);
        }

        void display() {
            for (int i = 0; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    cout<< data[i][j] << " ";
                }
                cout << endl;
            }
            
        }
};

int main(void) {

    Matrix m1(1,2,3,4);
    Matrix m2(5,6,7,8);

    Matrix m3 = m1 + m2;
    m3.display();

}