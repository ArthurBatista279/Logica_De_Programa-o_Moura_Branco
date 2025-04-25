int numero = 0;
int dobro = 0;

void setup() {
  Serial.begin(9600); // Inicia comunicação serial
}

void loop() {
  // Entrada
  Serial.println("Digite um numero:");
  while (!Serial.available()); // Espera o usuário digitar
  numero = Serial.parseInt();  // Lê e converte o número digitado

  // Processamento
  dobro = numero * 2;

  // Saída
  Serial.println("O dobro de " + String(numero) + " e " + String(dobro));

  while (1); // Para o programa após a primeira execução
}
