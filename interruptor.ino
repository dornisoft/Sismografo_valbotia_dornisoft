const int pinCircuito = 4; // El pin que vas a usar

void setup() {
  Serial.begin(115200);
  
  // Configuramos el pin como entrada con resistencia de Pull-up interna
  pinMode(pinCircuito, INPUT_PULLUP);
}

void loop() {
  // Leemos el estado del pin
  int estado = digitalRead(pinCircuito);

  if (estado == LOW) {
    Serial.println("Circuito CERRADO");
  } else {
    Serial.println("Circuito ABIERTO");
  }

  delay(200); // Un pequeño respiro para no saturar la consola
}