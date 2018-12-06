#include <TimerOne.h>
#include <LiquidCrystal.h>
#include <kernel.h>

#define TIME_INTERVAL 500

#define SIM 1
#define NAO 0

void Processo1();
void Processo2();

void setup(){
  
  KernelInit();
  
  KernelStart();
  
}

void loop(){}


