// C++ code
//
String nome = "";
String cargo = "";
float salario = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  executarExercicio8();
  delay(5000); // Espera antes de repetir
}

void executarExercicio8()
{
  Serial.println("Digite seu nome: ");
  while (!Serial.available());
  nome = Serial.readString();

  Serial.println("Digite seu cargo: ");
  while (!Serial.available());
  cargo = Serial.readString();

  Serial.println("Digite seu salario: ");
  while (!Serial.available());
  salario = Serial.parseFloat();

  if (salario < 1000) {
    float novoSalario = salario + (salario * 0.1);
    Serial.println("Seu nome: " + nome);
    Serial.println("Seu cargo: " + cargo);
    Serial.println("Seu salario atualizado: " + String(novoSalario));
  } else {
    Serial.println("Seu nome: " + nome);
    Serial.println("Seu cargo: " + cargo);
    Serial.println("Seu salario: " + String(salario));
  }
}
