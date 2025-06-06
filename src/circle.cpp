// Copyright 2022 UNN-CS
#include "circle.h"
#include <cmath>

const double PI = 3.141592653589793;

Circle::Circle(double r) {
    setRadius(r);
}

void Circle::updateFromRadius() {
    ference = 2 * PI * radius;
    area = PI * radius * radius;
}

void Circle::updateFromFerence() {
    radius = ference / (2 * PI);
    area = PI * radius * radius;
}

void Circle::updateFromArea() {
    radius = sqrt(area / PI);
    ference = 2 * PI * radius;
}

void Circle::setRadius(double r) {
    if (r < 0) {
        radius = 0;
    } else {
        radius = r;
    }
    updateFromRadius();
}

void Circle::setFerence(double f) {
    if (f < 0) {
        ference = 0;
    } else {
        ference = f;
    }
    updateFromFerence();
}

void Circle::setArea(double a) {
    if (a < 0) {
        area = 0;
    } else {
        area = a;
    }
    updateFromArea();
}

double Circle::getRadius() const {
    return radius;
}

double Circle::getFerence() const {
    return ference;
}

double Circle::getArea() const {
    return area;
}
