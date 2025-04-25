String nome = "";
float peso = 0;
float altura = 0;
float imc = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Entrada do nome
  Serial.println("Digite seu nome:");
  while (!Serial.available());
  nome = Serial.readStringUntil('\n'); // Lê até o ENTER (nome completo)

  delay(500); // Pausa para garantir leitura correta

  // Entrada do peso
  Serial.println("Digite seu peso (em kg):");
  while (!Serial.available());
  peso = Serial.parseFloat();

  delay(500);

  // Entrada da altura
  Serial.println("Digite sua altura (em metros):");
  while (!Serial.available());
  altura = Serial.parseFloat();

  // Processamento
  imc = peso / (altura * altura);

  // Saída
  Serial.println("Nome: " + nome);
  Serial.print("IMC: ");
  Serial.println(imc, 2); // Mostra o IMC com 2 casas decimais

  while (1); // Para o loop após uma execução
}
