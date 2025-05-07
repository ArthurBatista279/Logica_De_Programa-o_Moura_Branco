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

  // Limpa qualquer sobra no buffer
  while (Serial.available()) {
    Serial.read();
  }

  if (numero > 0) {
    Serial.println("O numero e positivo.");
  } else if (numero < 0) {
    Serial.println("O numero e negativo.");
  } else {
    Serial.println("O numero e zero.");
  }

  delay(1000); // Pequena pausa antes de perguntar de novo
}
