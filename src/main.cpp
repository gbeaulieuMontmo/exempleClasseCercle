#include <Arduino.h>
#include "ClasseCercle.h"

void setup() {
  Serial.begin(9600);
}

void loop() {

  // Création d'une instance de ClasseCercle avec un rayon de 5.0
  ClasseCercle cercle(5.0);

  // Affichage du centre
  Serial.print("Centre: (");
  Serial.print(cercle.getX());
  Serial.print(", "); 
  Serial.print(cercle.getY());
  Serial.println(")");

  // Affichage du rayon
  Serial.print("Rayon: ");
  Serial.println(cercle.getRayon());

  // Affichage de l'aire
  Serial.print("Aire: ");
  Serial.println(cercle.aire());

  // Affichage du périmètre
  Serial.print("Périmètre: ");
  Serial.println(cercle.perimetre());

  // Affichage du diamètre
  Serial.print("Diamètre: ");
  Serial.println(cercle.diametre());
  while(1);  
}
