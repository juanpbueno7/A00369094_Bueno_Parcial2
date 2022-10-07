// C++ code
//

const int humedad = 0;
const int POTEN_PIN = A0;
const int PIEZO_BUZZ_PIN = 3;
int allLEDs[5] = {4, 5, 6, 7, 8};
bool senState = false;

  
  void setup()
{
  
  {
  for(int i = 0; i < 5; i++){
    pinMode(allLEDs[i], OUTPUT);
  }
  pinMode(BTN_PIN, INPUT);
  pinMode(POTEN_PIN, INPUT);
  pinMode(PIEZO_BUZZ_PIN, OUTPUT);
  
  pinMode(PIN_ONE, OUTPUT)
  pinMode(PIN_TWO, OUTPUT)
  pinMode(PIN_THREE, OUTPUT)
  pinMode(PIN_FOUR, OUTPUT)
  pinMode(PIN_FIVE, OUTPUT)
}



void loop()
{
  humedad(analogRead(A0);
  Serial.print(humedad)
      for( int x= 0 i < 5, i++)
          
  digitalWrite(PIN_ONE, HIGH);
  delay(1000);            
  digitalWrite(PIN_TWO, LOW);  
  delay(1000);
  digitalWrite(PIN_THREE, LOW);  
  delay(1000);
  digitalWrite(PIN_FOUR, LOW);  
  delay(1000);
  digitalWrite(PIN_FIVE, LOW);  
  delay(1000);
          
          
  
  for(int i = 0; i < 5; i++){
    if(senState){
     digitalWrite(allLEDs[4 - i], HIGH);
    }else{
      digitalWrite(allLEDs[i], HIGH);
    }
    delay(0);
  }
  
  for(int i = 0; i < 5; i++){
    if(senState){
      digitalWrite(allLEDs[i], LOW);
    }else{
      digitalWrite(allLEDs[4 - i], LOW); 
    }    
    delay(0);
  }
  
}
