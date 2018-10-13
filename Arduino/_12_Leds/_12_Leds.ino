
int led1 = 8;
int led2 = 10;
int led3 = A0;
int led4 = A2;

#define E 2

int matriz[12][4] ={  1, 0, E, E,
                      0, 1, E, E,
                      1, E, 0, E,
                      0, E, 1, E,
                      1, E, E, 0,
                      0, E, E, 1,
                      E, 1, 0, E,
                      E, 0, 1, E,
                      E, 1, E, 0,
                      E, 0, E, 1,
                      E, E, 1, 0,
                      E, E, 0, 1};

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
 
}

// the loop routine runs over and over again forever:
void loop() {

  for( int i = 0 ; i < 12 ; ++i){
   
    if(matriz[i][0] == E){
      pinMode(led1, INPUT);
    }else{
      pinMode(led1, OUTPUT);
      digitalWrite(led1, matriz[i][0]);
    }
   
    if(matriz[i][1] == E){
      pinMode(led2, INPUT);
    }else{
      pinMode(led2, OUTPUT);
      digitalWrite(led2, matriz[i][1]);
    }
   
    if(matriz[i][2] == E){
      pinMode(led3, INPUT);
    }else{
      pinMode(led3, OUTPUT);
      digitalWrite(led3, matriz[i][2]);
    }
   
    if(matriz[i][3] == E){
      pinMode(led4, INPUT);
    }else{
      pinMode(led4, OUTPUT);
      digitalWrite(led4, matriz[i][3]);
    }
    
    delay(100);
  }  
}
