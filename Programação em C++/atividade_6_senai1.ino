float polegadas = 0;
float centimetros = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Entrada
  Serial.println("Digite a medida em polegadas:");
  while (!Serial.available());
  polegadas = Serial.parseFloat();

  // Processamento
  centimetros = polegadas * 2.54;

  // Saída
  Serial.print(polegadas);
  Serial.print(" polegadas equivalem a ");
  Serial.print(centimetros, 2); // 2 casas decimais
  Serial.println(" cm");

  while (1); // Para o loop após uma execução
}
