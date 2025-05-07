// C++ code
//
int numero = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite um numero inteiro:");
  while (!Serial.available());
  numero = Serial.parseInt();

  // Limpa o buffer serial
  while (Serial.available()) {
    Serial.read();
  }

  if (numero % 2 == 0) {
    Serial.println("O numero e: " + String(numero));
  } else {
    Serial.println("O numero nao e par.");
  }

  delay(1000); // Pausa antes de repetir
}
