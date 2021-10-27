#include "Polynomial.h"

Polynomial::Polynomial(int degree, const double *coefficients) {
    this->capacity = degree + 1;
    this->coefficients = new double [capacity];
    for (int i = 0; i < this->capacity; ++i) {
        this->coefficients[i] = coefficients[i];
    }
}

Polynomial::Polynomial(const Polynomial &that) {
    this->capacity = that.capacity;
    this->coefficients = new double [capacity];
    for (int i = 0; i < this->capacity; ++i) {
        this->coefficients[i] = that.coefficients[i];
    }
}

//Polynomial::Polynomial(Polynomial &&that) {
//
//}

Polynomial::~Polynomial() {
    this->capacity = 0;
    delete[] this->coefficients;
}

int Polynomial::degree() const {
    return this->capacity - 1;
}

ostream &operator<<(ostream &out, const Polynomial &what) {
    for (int i = 0; i < what.capacity ; ++i) {
        out<< what.coefficients[i] << "";
    }
    return out;
}

double Polynomial::evaluate(double x0) const {
    double P = this->coefficients[0];
    for (int i = 0; i < this->capacity; ++i){
        P = P*x0 + this->coefficients[i];
    }
    return P;
}

//Polynomial Polynomial::derivative() const {
//    return
//}

//double Polynomial::operator[](int index) const {
//    return 0;
//}


