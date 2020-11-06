#include <Servo.h>
Servo myservofijo; // creamos objeto para controlar los servos
Servo myservomovil;
Servo myservobase;
Servo myservogripper;
int valfijo;
int valmovil;
int valbase;
int valgripper;
int state = 20;
void setup()
{
 Serial.begin(38400); // Establecemos el ratio de comunicación BT
 myservofijo.attach(9); // Relacionamos el pin con el objeto previamente declarado
 myservomovil.attach(8);
 myservobase.attach(10);
 myservogripper.attach(11);
}
void loop()
{
 if(Serial.available() > 0)
 {
 valfijo = Serial.parseInt(); // Leemos los datos provenientes del puerto serie
 valmovil = Serial.parseInt();
 valbase = Serial.parseInt();
 valgripper = Serial.parseInt();
 }
 myservofijo.write(valfijo); //El servo escribe los datos obtenidos previamente
 myservomovil.write(valmovil);
 myservobase.write(valbase);
 myservogripper.write(valgripper);
delay(10);
}
