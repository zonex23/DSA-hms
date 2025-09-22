#include <iostream>
#include <string>
using namespace std;

template <typename T, size_t N, size_t M>
class Matrix {
private:
    T matrix[N][M];

public:
    void set(size_t row, size_t col, const T& value) {
        if (row >= N || col >= M) {
            cout << "Invalid row or col" << endl;
            return;
        }
        matrix[row][col] = value;
    }

    T get(size_t row, size_t col) const {
        if (row >= N || col >= M) {
            cout << "Invalid row or col" << endl;
            return T();
        }
        return matrix[row][col];
    }

    void print() const {
        for (size_t i = 0; i < N; ++i) {
            for (size_t j = 0; j < M; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix<T, N, M> operator+(const Matrix<T, N, M>& other) const {
        Matrix<T, N, M> result;
        for (size_t i = 0; i < N; ++i) {
            for (size_t j = 0; j < M; ++j) {
                result.matrix[i][j] = this->matrix[i][j] + other.matrix[i][j];
            }
        }
        return result;
    }
};


int main(){
    
}