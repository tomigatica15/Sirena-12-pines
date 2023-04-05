/*
  Proyecto: Sirena de bombero.
  Archivo: "sirena1.ino" (Arduino) - "sirena1_simulacion.sim1" (SimulIDE).
  Autor: Tomás Gatica.
  Descripción: Sirena de un camión de bomberos real (sin sonido, solo LEDs), si se quiere modificar la velocidad en la que la sirena cambia, modificar el valor de la linea 17.
  Requerimientos: Arduino mega o mega2560, 12 LEDs, 12 resistencias (220 Ohms).
  Versión: 1.0.0
*/

void setup() {
  for (int i = 2; i <= 14; i++) {  // Activa los pines del 2 al 14.
    pinMode(i, OUTPUT);            // Configura "leds" como salida.
  }
}

void off() {   // Crea una función con el nombre "off".
  delay(150);  // Hace esperar 150ms para seguir.
}

//                                                                       //
// Sirena, prenden los 6 primeros, se apagan y se prenden los 6 ultimos  //
//                                                                       //

void simulacion() {                     // Crea una función con el nombre "simulacion".
  for (int led = 2; led <= 7; led++) {  // Activa los pines del 2 al 7.
    digitalWrite(led, HIGH);            // Encienden los LEDs.
  }
  off();                                // Llama a la función "off".
  for (int led = 2; led <= 7; led++) {  // Activa los pines del 2 al 7.
    digitalWrite(led, LOW);             // Apaga los pines.
  }
  for (int led2 = 8; led2 <= 14; led2++) {  // Activa los pines del 8 al 14.
    digitalWrite(led2, HIGH);               // Enciende los pines.
  }
  off();                                    // Llama a la función "off".
  for (int led2 = 8; led2 <= 14; led2++) {  // Activa los pines del 8 al 14.
    digitalWrite(led2, LOW);                // Apaga los pines.
  }
}

//                                                                       //
// Escalera, prende de arriba para abajo y se apaga de abajo para arriba //
//                                                                       //

void simulacion2() {
  for (int led = 2; led <= 14; led++) {
    digitalWrite(led, HIGH);
    off();
  }
  for (int led = 14; led >= 2; led--) {
    digitalWrite(led, LOW);
    off();
  }
}

//                                                                       //
// Escalera, prende de abajo para arriba y se apaga de abajo para arriba //
//                                                                       //

void simulacion3() {
  for (int led = 14; led >= 2; led--) {
    digitalWrite(led, HIGH);
    off();
  }
  for (int led = 14; led >= 2; led--) {
    digitalWrite(led, LOW);
    off();
  }
}

//                                                               //
// se prende adentro para fuera y se apaga de adentro para fuera //
//                                                               //

void simulacion4() {
  for (int led = 7, led2 = 8; led >= 2 && led2 <= 13; led--, led2++) {
    digitalWrite(led, HIGH);   // Enciende el LED en el pin "i".
    digitalWrite(led2, HIGH);  // Enciende el LED en el pin "i".
    off();                     // Apaga el LED en el pin 2.
  }
  for (int led = 7, led2 = 8; led >= 2 && led2 <= 13; led--, led2++) {
    digitalWrite(led, LOW);   // Enciende el LED en el pin "i".
    digitalWrite(led2, LOW);  // Enciende el LED en el pin "i".
    off();                    // Apaga el LED en el pin 2.
  }
}

//                                                            //
// se prende fuera para adentro y se apaga fuera para adentro //
//                                                            //

void simulacion5() {
  for (int led = 2, led2 = 13; led <= 7 && led2 >= 8; led++, led2--) {
    digitalWrite(led, HIGH);   // Enciende el LED en el pin "led2".
    digitalWrite(led2, HIGH);  // Enciende el LED en el pin "i".
    off();                     // Apaga el LED en el pin 2.
  }
  for (int led = 2, led2 = 13; led <= 7 && led2 >= 8; led++, led2--) {
    digitalWrite(led, LOW);   // Enciende el LED en el pin "i".
    digitalWrite(led2, LOW);  // Enciende el LED en el pin "i".
    off();                    // Apaga el LED en el pin 2.
  }
}

//                                                            //
// se prende fuera para adentro y se apaga adentro para fuera //
//                                                            //

void simulacion6() {
  for (int led = 2, led2 = 13; led <= 7 && led2 >= 8; led++, led2--) {
    digitalWrite(led, HIGH);   // Enciende el LED en el pin "led2".
    digitalWrite(led2, HIGH);  // Enciende el LED en el pin "i".
    off();                     // Apaga el LED en el pin 2.
  }
  for (int led = 7, led2 = 8; led >= 2 && led2 <= 13; led--, led2++) {
    digitalWrite(led, LOW);   // Enciende el LED en el pin "led2".
    digitalWrite(led2, LOW);  // Enciende el LED en el pin "i".
    off();                    // Apaga el LED en el pin 2.
  }
}

//                                                            //
// se prende adentro para fuera y se apaga fuera para adentro //
//                                                            //

void simulacion7() {
  for (int led = 7, led2 = 8; led >= 2 && led2 <= 13; led--, led2++) {
    digitalWrite(led, HIGH);   // Enciende el LED en el pin "led2".
    digitalWrite(led2, HIGH);  // Enciende el LED en el pin "led2".
    off();                     // Apaga el LED en el pin 2.
  }
  for (int led = 2, led2 = 13; led <= 7 && led2 >= 8; led++, led2--) {
    digitalWrite(led, LOW);   // Enciende el LED en el pin "led2".
    digitalWrite(led2, LOW);  // Enciende el LED en el pin "i".
    off();                    // Apaga el LED en el pin 2.
  }
}

//                                 //
// prenden y apagan todos los leds //
//                                 //

void end() {
  off();                                 // Llama a la función "off2".
  for (int led = 2; led <= 14; led++) {  // Activa los pines del 8 al 14.
    digitalWrite(led, HIGH);             // Enciende los pines.
  }
  off();                                 // Llama a la función "off2".
  for (int led = 2; led <= 14; led++) {  // Activa los pines del 8 al 14.
    digitalWrite(led, LOW);              // Apaga los pines.
  }
}

void loop() {  // Bucle llamando a todas las funciones escritas anteriormente
  simulacion();
  simulacion2();
  simulacion3();
  simulacion4();
  simulacion5();
  simulacion6();
  simulacion7();
  end();
  end();
}
