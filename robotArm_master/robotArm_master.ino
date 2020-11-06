int potpinfijo=A0;
int potpinmovil=A1;
int potpinbase=A2;
int potpingripper=A3;
int valfijo;
int valmovil;
int valbase;
int valgripper;
int t1;
int t2;
void setup()
{
 Serial.begin(38400); // Velocidad de comunicación
}
void loop()
{
 t1=millis(); // Comenzamos a medir tiempo
 //LINK FIJO ANALOGO 0
 valfijo = analogRead(potpinfijo);
 valfijo = map(valfijo, 85, 650, 15, 170); // Asignación de valores a variable
 //LINK MOVIL ANALOGO 1
 valmovil = analogRead(potpinmovil);
 valmovil = map(valmovil, 0, 315, 90, 0); // Asignación de valores a variable
 //BASE ANALOGO 2
 valbase = analogRead(potpinbase);
 valbase = map(valbase, 0, 1023, 180, 0); // Asignación de valores a variable
 //GRIPPER ANALOGO 3
 valgripper = analogRead(potpingripper);
 valgripper = map(valgripper, 0, 350, 70, 0); // Asignación de valores a variable
Serial.println(String(valfijo)+'.'+String(valmovil)+'.'+String(valbase)+'.'+String(valgripp
er)); //Envío de valores
 t2=millis(); //Se mide tiempo una vez finalizado el envío de datos
 delay(100-(t2-t1)); //Se realiza un delay acorde al tiempo tardado
}

