String nome = "";
String cargo = "";
float salario = 0;
float novoSalario = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Entrada do nome
  Serial.println("Digite o nome do funcionario:");
  while (!Serial.available());
  nome = Serial.readStringUntil('\n');

  delay(500);

  // Entrada do cargo
  Serial.println("Digite o cargo do funcionario:");
  while (!Serial.available());
  cargo = Serial.readStringUntil('\n');

  delay(500);

  // Entrada do salário
  Serial.println("Digite o salario do funcionario:");
  while (!Serial.available());
  salario = Serial.parseFloat();

  // Processamento
  novoSalario = salario * 1.10; // Aumento de 10%

  // Saída
  Serial.println("\n--- Dados do Funcionario ---");
  Serial.println("Nome: " + nome);
  Serial.println("Cargo: " + cargo);
  Serial.print("Novo Salario: R$ ");
  Serial.println(novoSalario, 2); // 2 casas decimais

  while (1); // Para o programa após uma execução
}
