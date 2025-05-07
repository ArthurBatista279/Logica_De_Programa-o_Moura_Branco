// C++ code
//
int numero1 = 0;
int numero2 = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Digite o primeiro numero:");
  while (!Serial.available());
  numero1 = Serial.parseInt();

  // Limpa o buffer serial
  while (Serial.available()) {
    Serial.read();
  }

  Serial.println("Digite o segundo numero:");
  while (!Serial.available());
  numero2 = Serial.parseInt();

  // Limpa o buffer serial
  while (Serial.available()) {
    Serial.read();
  }

  if (numero1 > numero2) {
    Serial.println("O maior numero e: " + String(numero1));
  } else if (numero2 > numero1) {
    Serial.println("O maior numero e: " + String(numero2));
  } else {
    Serial.println("Os dois numeros sao iguais.");
  }

  delay(1000); // Pausa antes de repetir
}
