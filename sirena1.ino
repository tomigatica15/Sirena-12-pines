/*
  Proyecto: Sirena de bombero.
  Archivo: "sirena1.ino" (Arduino) - "sirena1_simulacion.sim1" (SimulIDE).
  Autor: Tomás Gatica.
  Descripción: Sirena de un camión de bomberos real (sin sonido, solo LEDs), si se quiere modificar la velocidad en la que la sirena cambia, modificar el valor de la linea 17.
  Requerimientos: Arduino mega o mega2560, 12 LEDs, 12 resistencias (220 Ohms).
  Versión: 1.0.0
*/

void setup() {
  for (int leds = 2; leds <= 14; leds++) {  // Activa los pines del 2 al 14.
    pinMode(leds, OUTPUT);                  // Configura "leds" como salida.
  }
}

void off() {   // Crea una función con el nombre "off".
  delay(150);  // Hace esperar 150ms para seguir.
}

void grupo1() {                               // Crea una función con el nombre "grupo1".
  for (int leds1 = 2; leds1 <= 7; leds1++) {  // Activa los pines del 2 al 7.
    digitalWrite(leds1, HIGH);                // Encienden los LEDs.
  }
  off();                                      // Llama a la función "off".
  for (int leds1 = 2; leds1 <= 7; leds1++) {  // Activa los pines del 2 al 7.
    digitalWrite(leds1, LOW);                 // Apaga los pines.
  }
}

void grupo2() {                                // Crea una función con el nombre "grupo2".
  for (int leds2 = 8; leds2 <= 14; leds2++) {  // Activa los pines del 8 al 14.
    digitalWrite(leds2, HIGH);                 // Enciende los pines.
  }
  off();                                       // Llama a la función "off".
  for (int leds2 = 8; leds2 <= 14; leds2++) {  // Activa los pines del 8 al 14.
    digitalWrite(leds2, LOW);                  // Apaga los pines.
  }
}

void loop() {  // Bucle.
  grupo1();    // Llamamos a la función "grupo1".
  grupo2();    // Llamamos a la función "grupo2".
}