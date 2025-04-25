// C++ code

int idade = 0;
int idadeMeses = 0;
int idadeDias = 0;
unsigned long idadeHoras = 0;
unsigned long idadeMinutos = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
//Entrada
  Serial.println("Digite sua idade em anos"); //Mostra msg na tela
  while(!Serial.available() );// Espera o usúario dar <ENTER>
  idade = Serial.parseInt(); //Transforma a idade digitada em numero
  
  //Processamento
  idadeMeses = idade * 12;
  idadeDias = idade * 365;
  idadeHoras = idade * 365UL * 24; // UL = unsigned long para evitar overflow
  idadeMinutos = idade * 365UL * 24 * 60; 
  
  //Saída 
  Serial.println("Idade em meses: " + String(idadeMeses) );
  Serial.println("Idade em dias: " + String(idadeDias) );          
  Serial.println("Idade em horas: " + String(idadeHoras) );
  Serial.println("Idade em minutos: " + String(idadeMinutos) );
  //Imprime o texto
  
  while (1); // Para o loop depois da primeira execução
}