// C++ code
//
float precoCompra = 0;
float percentualLucro = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  executarExercicio10();
  delay(5000); // Espera antes de repetir
}

void executarExercicio10()
{
  Serial.println("Digite o preco de compra do produto:");
  while (!Serial.available());
  precoCompra = Serial.parseFloat();

  Serial.println("Digite o percentual de lucro (ex: 40 para 40%):");
  while (!Serial.available());
  percentualLucro = Serial.parseFloat();

  float precoVenda = precoCompra + (precoCompra * (percentualLucro / 100.0));
  Serial.println("O preco de venda do produto e: " + String(precoVenda));

  if (percentualLucro < 50) {
    Serial.println("Atencao: margem de lucro muito pequena.");
  }
}
