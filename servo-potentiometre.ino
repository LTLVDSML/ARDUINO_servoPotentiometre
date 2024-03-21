//controle servomoteur par potentiometre

#include<Servo.h>

Servo pin;
#define analog     A0    //pin analogique lisant le potentiometre
long valeur;

void setup() {

Serial.begin(9600);
pin.attach(8);      //pin commandant le servo

}

void loop() {

  valeur = analogRead(analog);     //lecture tension
  Serial.println(valeur);
  delay(200);

if (valeur<256 && valeur>0)      //position du moteur en fonction de la tension lue
{
  pin.write(0);
}

if (valeur<512 && valeur>256)
{
  pin.write(45);
}

if (valeur<768 && valeur>512)
{
  pin.write(90);
}

if (valeur>768 && valeur<1010)
{
  pin.write(135);
}

if (valeur>1010)
{
  pin.write(190);
}

}
