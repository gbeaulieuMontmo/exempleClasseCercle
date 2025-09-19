#include "ClasseCercle.h"

// Définition de la constante PI
#define PI 3.14159265358979323846

// Constructeur
ClasseCercle::ClasseCercle(float r) : fRayon(r), iX(0), iY(0) {}

// Accesseur du rayon
float ClasseCercle::getRayon() {
    return fRayon;
}

// Accesseur du centre X
int ClasseCercle::getX() {
    return iX;
}

// Accesseur du centre Y
int ClasseCercle::getY() {
    return iY;
}

// Mutateur du rayon
void ClasseCercle::setRayon(float r) {
    fRayon = r;
}

// Mutateur du centre X
void ClasseCercle::setX(int x) {
    iX = x;
}

// Mutateur du centre Y
void ClasseCercle::setY(int y) {
    iY = y;
}

// Calcul de l'aire
float ClasseCercle::aire() {
    return PI * fRayon * fRayon;
}

// Calcul du périmètre
float ClasseCercle::perimetre() {
    return 2.0 * PI * fRayon;
}

// Calcul du diamètre
float ClasseCercle::diametre() {
    return 2.0 * fRayon;
}