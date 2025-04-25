// Declaração de variáveis
int anoNascimento = 0;
int anoAtual = 0;
int idade = 0;
int idadeSemanas = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  // Entrada
  Serial.println("Digite o ano de nascimento:");
  while (!Serial.available());
  anoNascimento = Serial.parseInt();

  delay(500); // Pequena pausa para garantir leitura correta

  Serial.println("Digite o ano atual:");
  while (!Serial.available());
  anoAtual = Serial.parseInt();

  // Processamento
  idade = anoAtual - anoNascimento;
  idadeSemanas = idade * 52; // Aproximação: 1 ano = 52 semanas

  // Saída
  Serial.println("Idade: " + String(idade) + " anos");
  Serial.println("Idade em semanas: " + String(idadeSemanas) + " semanas");

  while (1); // Para o loop após uma execução
}
