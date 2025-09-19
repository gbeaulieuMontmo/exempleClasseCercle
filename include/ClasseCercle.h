#pragma once

class ClasseCercle {
private:
    float fRayon;
    int iX, iY;

public:
    // Constructeur
    ClasseCercle();
    ClasseCercle(float r);

    // Destructeur
    ~ClasseCercle();

    // Accesseurs de la classe
    // Accesseur du rayon
    float getRayon();
    // Accesseur du centre X
    int getX();
    // Accesseur du centre Y
    int getY();

    // Mutateurs de la classe
    // Mutateur du rayon
    void setRayon(float fRayon);
    // Mutateur du centre X
    void setX(int iX);
    // Mutateur du centre Y
    void setY(int iY);

    // Méthodes de la classe
    // Calcul de l'aire
    float calculAire();
    // Calcul du périmètre
    float calculPerimetre();
    // Calcul du diamètre
    float calculDiametre();
};