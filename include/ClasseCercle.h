#pragma once

class ClasseCercle {
private:
    float fRayon;
    int iX, iY;

public:
    // Constructeur
    ClasseCercle(float r);

    // Accesseurs de la classe
    // Accesseur du rayon
    float getRayon();
    // Accesseur du centre X
    int getX();
    // Accesseur du centre Y
    int getY();

    // Mutateurs de la classe
    // Mutateur du rayon
    void setRayon(float r);
    // Mutateur du centre X
    void setX(int x);
    // Mutateur du centre Y
    void setY(int y);

    // Calcul de l'aire
    float aire();
    // Calcul du périmètre
    float perimetre();
    // Calcul du diamètre
    float diametre();
};