// C++ code
//
float salario = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  executarExercicio9();
  delay(5000); // Espera antes de repetir
}

void executarExercicio9()
{
  Serial.println("Digite seu salario: ");
  while (!Serial.available());
  salario = Serial.parseFloat();

  if (salario < 500) {
    float salarioReajustado = salario + (salario * 0.3);
    Serial.println("Voce teve um aumento de 30%.");
    Serial.println("Seu novo salario e: " + String(salarioReajustado));
  } else {
    Serial.println("Você nao tem direito ao aumento.");
  }
}
