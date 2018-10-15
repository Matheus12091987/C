/*##########################################################################
############################################################################
      Regador Automatico de Ortaliças
      Criador: Marcos Peres e Matheus Peres
      Data: 14/10/2018
############################################################################
##########################################################################*/

// Carrega a biblioteca virtuabotixRTC
#include "virtuabotixRTC.h"           

// Determina os pinos ligados ao modulo
// myRTC(clock, data, rst)
virtuabotixRTC myRTC(6, 7, 8);

int Relay_1 = 9;
int Relay_2 = 10;

int segundo = 0;
int minuto = 20;
int hora = 15;

int periodoR1[12];  //0,1,2,6,7,8 - liga RL1 | 3,4,5,9,10,11 - desliga RL1
int periodoR2[12];  //0,1,2,6,7,8 - liga RL2 | 3,4,5,9,10,11 - desliga RL2

int n = 0;


//##########################################################################

void setup() {                
  pinMode(Relay_1, OUTPUT);
  pinMode(Relay_2, OUTPUT);
 
  digitalWrite(Relay_1, HIGH);
  digitalWrite(Relay_2, HIGH); 
 
  Serial.begin(115200);
  
  // Informacoes iniciais de data e hora
  // Apos setar as informacoes, comente a linha abaixo
  // (segundos, minutos, hora, dia da semana, dia do mes, mes, ano)
  //myRTC.setDS1302Time(00, 01, 01, 2, 15, 10, 2018);  //Habilitar somente quando for atualizar a data/hora
  
}

//##########################################################################

void ajustes(){
 
  //Ajuste Rele 1

  periodoR1[0] = 1;  //Hora Alarme 1 Liga
  periodoR1[1] = 44;  //Minuto Alarme 1 Liga
  periodoR1[2] = 10;  //Segundo Alarme 1 Liga
  
  periodoR1[3] = 1;  //Hora Alarme 1 Desliga
  periodoR1[4] = 45;  //Minuto Alarme 1 Desliga
  periodoR1[5] = 10;  //Segundo Alarme 1 Desliga
  
  periodoR1[6] = 18;  //Hora Alarme 2 Liga
  periodoR1[7] = 00;  //Minuto Alarme 2 Liga
  periodoR1[8] = 00;  //Segundo Alarme 2 Liga
  
  periodoR1[9] = 18;  //Hora Alarme 2 Desliga
  periodoR1[10] = 20;  //Minuto Alarme 2 Desliga
  periodoR1[11] = 00;  //Segundo Alarme 2 Desliga

  //Ajuste Rele 2

  periodoR2[0] = 15;  //Hora Alarme 1 Liga
  periodoR2[1] = 20;  //Minuto Alarme 1 Liga
  periodoR2[2] = 20;  //Segundo Alarme 1 Liga
  
  periodoR2[3] = 15;  //Hora Alarme 1 Desliga
  periodoR2[4] = 30;  //Minuto Alarme 1 Desliga
  periodoR2[5] = 20;  //Segundo Alarme 1 Desliga
  
  periodoR2[6] = 18;  //Hora Alarme 2 Liga
  periodoR2[7] = 00;  //Minuto Alarme 2 Liga
  periodoR2[8] = 00;  //Segundo Alarme 2 Liga
  
  periodoR2[9] = 18;  //Hora Alarme 2 Desliga
  periodoR2[10] = 10;  //Minuto Alarme 2 Desliga
  periodoR2[11] = 00;  //Segundo Alarme 2 Desliga
  
}

void loop() {
  
  myRTC.updateTime();
  
  hora = myRTC.hours;
  minuto = myRTC.minutes;
  segundo = myRTC.seconds;
  
  if(n==0){
    
    ajustes();
    n = 1;
    
  }
  
  
//Acionamento Alarme 1 e 2 de R1  
  
  if(((periodoR1[0]==hora)&&(periodoR1[1]==minuto)&&(periodoR1[2]==segundo)) || ((periodoR1[6]==hora)&&(periodoR1[7]==minuto)&&(periodoR1[8]==segundo))){
    
    digitalWrite(Relay_1, LOW);
    
  }
  
  if(((periodoR1[3]==hora)&&(periodoR1[4]==minuto)&&(periodoR1[5]==segundo)) || ((periodoR1[9]==hora)&&(periodoR1[10]==minuto)&&(periodoR1[11]==segundo))){
    
    digitalWrite(Relay_1, HIGH);
    
  }
  
  
//Acionamento Alarme 1 e 2 de R2
  
  if(((periodoR2[0]==hora)&&(periodoR2[1]==minuto)&&(periodoR2[2]==segundo)) || ((periodoR2[6]==hora)&&(periodoR2[7]==minuto)&&(periodoR2[8]==segundo))){
    
    digitalWrite(Relay_2, LOW);
    
  }
  
  if(((periodoR2[3]==hora)&&(periodoR2[4]==minuto)&&(periodoR2[5]==segundo)) || ((periodoR2[9]==hora)&&(periodoR2[10]==minuto)&&(periodoR2[11]==segundo))){
    
    digitalWrite(Relay_2, HIGH);
    
  }
  
  delay(100);
  
  //Serial.print("Agora: ");
  //Serial.print(myRTC.dayofmonth);
  //Serial.print("/");
  //Serial.print(myRTC.month);
  //Serial.print("/");
  //Serial.print(myRTC.year);
  //Serial.print("  ");
  //Serial.print(myRTC.hours);
  //Serial.print(":");
  //Serial.print(myRTC.minutes);
  //Serial.print(":");
  //Serial.print(myRTC.seconds);
  //Serial.print("\n");
 
}
