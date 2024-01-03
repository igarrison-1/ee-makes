#include "pitches.h"

int buzzPin = 13;  //pin for buzzer
//white keys
int C4 = 2;        //arduino pin for each note in order of C-major scale
int D4 = 3;       
int E4 = 4;
int F4 = 5;
int G4 = 6;
int A = 7;
int B4 = 8;
int C5 = 9;
//black keys
int CS4 = A4; 
int DS4 = 10;
int FS4 = 11;
int GS4 = 12;
int AS4 = A5;

void setup() {
  Serial.begin(9600);        //serial moniter on for debugging purposez
  pinMode(buzzPin, OUTPUT);  //speaker/buzzer set to output
  pinMode(C4, INPUT);        //Keyboard buttons set to input
  pinMode(D4, INPUT);
  pinMode(E4, INPUT);
  pinMode(F4, INPUT);
  pinMode(G4, INPUT);
  pinMode(A, INPUT);
  pinMode(B4, INPUT);
  pinMode(C5, INPUT);
  pinMode(CS4, INPUT);
  pinMode(DS4, INPUT);
  pinMode(FS4, INPUT);
  pinMode(GS4, INPUT);
  pinMode(AS4, INPUT);
}

void loop() {
  while (digitalRead(C4)==HIGH){   //if the button is pressed, use the tone function to play the note
    tone(buzzPin, NOTE_C4);}       //tone parameters are: output pin, frequency, duration (if needed). Included the pin and the cooresponding note from pitches.h
  while (digitalRead(D4)==HIGH){
    tone(buzzPin, NOTE_D4);}
  while (digitalRead(E4)==HIGH){
    tone(buzzPin, NOTE_E4);}
  while (digitalRead(F4)==HIGH){
    tone(buzzPin, NOTE_F4);}
  while (digitalRead(G4)==HIGH){
    tone(buzzPin, NOTE_G4);}
  while (digitalRead(A)==HIGH){
    tone(buzzPin, NOTE_A4);}
  while (digitalRead(B4)==HIGH){
    tone(buzzPin, NOTE_B4);}
  while (digitalRead(C5)==HIGH){
    tone(buzzPin, NOTE_C5);}
  while (digitalRead(CS4)==HIGH){
    tone(buzzPin, NOTE_CS4);}  
  while (digitalRead(DS4)==HIGH){
    tone(buzzPin, NOTE_DS4);}
  while (digitalRead(FS4)==HIGH){
    tone(buzzPin, NOTE_FS4);}
  while (digitalRead(GS4)==HIGH){
    tone(buzzPin, NOTE_GS4);}
  while (digitalRead(AS4)==HIGH){
    tone(buzzPin, NOTE_AS4);}

  noTone(buzzPin);                 //noTone function turns the sound off else it will play indefinitely 
}
