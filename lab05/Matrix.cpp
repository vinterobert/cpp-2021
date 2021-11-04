#include "Matrix.h"

Matrix::Matrix(int mRows, int mCols) {
    this->mRows = mRows;
    this->mCols = mCols;
    this->mElements = new double *[mRows];
    for (int i = 0; i < mRows; ++i) {
        this->mElements[i] = new double[mCols];
    }

}

Matrix::Matrix(const Matrix &what) {
    int i;
    this->mRows = what.mRows;
    this->mCols = what.mCols;
    this->mElements = new double *[mRows];
    for (i = 0; i < mRows; i++) {
        this->mElements[i] = new double[mCols];
    }
    this->mElements = what.mElements;
}

Matrix::Matrix(Matrix &&what) {

}

Matrix::~Matrix() {
    for (int i = 0; i < mRows; ++i) {
        delete[] this->mElements[i];
    }
    delete[] this->mElements;
}

void Matrix::fillMatrix(double value) {
    for (int i = 0; i < mRows; ++i) {
        for (int j = 0; j < mCols; ++j) {
            this->mElements[i][j] = value;
        }
    }
}

void Matrix::randomMatrix(int a, int b) {

}

void Matrix::printMatrix(ostream &os) const {
    for (int i = 0; i < mRows; ++i) {
        for (int j = 0; j < mCols; ++j) {
            os << mElements[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool Matrix::isSquare() const {
    return false;
}

double *Matrix::operator[](int index) {
    return nullptr;
}

double *Matrix::operator[](int index) const {
    return nullptr;
}

Matrix operator+(const Matrix &x, const Matrix &y) {
    if (x.mRows != y.mRows || x.mCols != y.mCols) {
        throw out_of_range("A meretek nem egyeznek!");
    }
    Matrix matrix(x.mRows, x.mCols);
    for (int i = 0; i < x.mRows; i++) {
        for (int j = 0; j < x.mCols; j++) {
            matrix.mElements[i][j] = x.mElements[i][j] + y.mElements[i][j];
        }
    }

    return matrix;
}

Matrix operator*(const Matrix &x, const Matrix &y) {
    return Matrix();
}

istream &operator>>(istream &is, Matrix &mat) {
    for (int i = 0; i < mat.mRows; ++i) {
        for (int j = 0; j < mat.mCols; ++j) {
            is >> mat.mElements[i][j];
        }
    }
    return is;
}

ostream &operator<<(ostream &os, const Matrix &mat) {
    mat.printMatrix(os);
    return os;
}
