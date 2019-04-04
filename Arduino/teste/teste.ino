/*PRograma*/

#include <LiquidCrystal.h>

int A = 4;
int B = 5;
int C = 6;
int D = 7;
int btnTroca = 11;
int txtDisplay = 10;
int ligaMotor = 12;
int ctd = 0;
int valorDisplay = 0;

LiquidCrystal lcd(8,9,4,5,6,7);

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(txtDisplay, OUTPUT);
  pinMode(ligaMotor, OUTPUT);
  pinMode(btnTroca, INPUT); 
 
  lcd.begin(16, 2);
  
}

// the loop routine runs over and over again forever:
void loop() {
  
  if ((digitalRead(btnTroca) == 0)&&(valorDisplay == 0)){
    
    digitalWrite(ligaMotor, LOW);
    digitalWrite(txtDisplay, HIGH); 
    valorDisplay = 1;
    lcd.setCursor(0, 0);
    lcd.print("    Horario     ");
    digitalWrite(txtDisplay, LOW);
    digitalWrite(ligaMotor, HIGH);
      
  }
  
  if ((digitalRead(btnTroca) == 1)&&(valorDisplay == 1)){
    
    digitalWrite(ligaMotor, LOW);
    digitalWrite(txtDisplay, HIGH);
    valorDisplay = 0;
    lcd.setCursor(0, 0);
    lcd.print("  Anti-Horario  ");
    digitalWrite(txtDisplay, LOW);
    digitalWrite(ligaMotor, HIGH);
    
  }
  
  
  if (digitalRead(btnTroca) == 0){
   
     ctd = ctd + 1;
     
     if (ctd > 5){
       
       ctd = 1;
       
     }
    
  }else{
  
    ctd = ctd - 1;
    if (ctd < 1){
       
      ctd = 4;
       
    }
  
  }  
  
  if (ctd == 1){
    
    digitalWrite(A, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
  
  }
  
  if (ctd == 2){
    
    digitalWrite(B, HIGH);
    digitalWrite(A, LOW);
    digitalWrite(C, LOW);
    digitalWrite(D, LOW);
  
  }

  if (ctd == 3){
    
    digitalWrite(C, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(A, LOW);
    digitalWrite(D, LOW);
  
  }
  
  if (ctd == 4){
    
    digitalWrite(D, HIGH);
    digitalWrite(B, LOW);
    digitalWrite(C, LOW);
    digitalWrite(A, LOW);
  
  }
  
  
  delay(100);               // wait for a second
  
}
