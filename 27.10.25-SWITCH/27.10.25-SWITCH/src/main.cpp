#include <Arduino.h>
int botao= 2;
int botao2= 3;
int opcao= 0;

void setup(){
  Serial.begin(9600);

  pinMode(botao, INPUT);
  pinMode(botao2, INPUT);

}

void loop(){
  //Testar se o botao1 sesta a ser pressionado

 if (digitalRead(2) == LOW)
 {
   opcao = 0;
 }

 //Testar se o botao2 está a ser pressionado
 if(digitalRead(3) == LOW)
 {
  opcao = 1;

 }
//Testar se os dois botoes estao a ser pressionados
if(digitalRead(2) == LOW && digitalRead(3) == LOW)
{
  opcao = 2;
}

switch (opcao)
{
  case 0:
  Serial.println("Case0");
  break;

case 1:
  Serial.println("Case1");
  break;

default:
Serial.println("Default");

break;
}
}

