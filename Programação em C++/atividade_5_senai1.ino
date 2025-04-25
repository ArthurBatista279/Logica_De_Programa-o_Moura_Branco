float centimetros = 0;
float polegadas = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Entrada
  Serial.println("Digite a medida em centimetros:");
  while (!Serial.available());
  centimetros = Serial.parseFloat();

  // Processamento
  polegadas = centimetros / 2.54;

  // Saída
  Serial.print(centimetros);
  Serial.print(" cm equivalem a ");
  Serial.print(polegadas, 2); // Mostra com 2 casas decimais
  Serial.println(" polegadas");

  while (1); // Para o loop após uma execução
}
