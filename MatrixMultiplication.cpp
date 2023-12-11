#include<iostream>
using namespace std;

class Matrix {
    private:
        int rows;
        int cols;
        int **mat;

    public:
        Matrix (int r, int c) : rows(r) , cols(c) {
            mat = new int * [rows];
            for (int i = 0; i < rows; i++)
            {
                mat[i] = new int[cols];
            }
            
        }

        Matrix operator*(Matrix& other) {
            if( rows != cols)
                return Matrix(0,0);
            Matrix result(rows, other.cols);
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < other.cols; j++)
                {   
                    result.mat[i][j] = 0;
                    result.mat[i][j] = mat[i][j] * other.mat[i][j];  
                }
                
            }
            return result;
        }
        
        void input() {
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    cin >> mat[i][j];
                }
                
            }
            
        }
        void display() {
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    cout << mat[i][j] << " ";
                }
                cout << endl;
            }
            
        }
};

int main(void) {

    Matrix m1(2,2);
    m1.input();
    Matrix m2(2,2);
    m2.input();

    Matrix m3 = m1 * m2;
    m3.display();
}