#include <Servo.h>

Servo myservo;


int pos = 0; 
int sensorValue = 0;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);
  
}

void loop() 
{
sensorValue = analogRead(A0);
Serial.println(sensorValue);
if(sensorValue>800){
  myservo.write(0);
  
  delay(1000);
  }
if(sensorValue<=800 && sensorValue>600)
{
   for (pos = 0; pos <= 120; pos+=1)
  { 
    myservo.write(pos);  
               
    delay(3);        
  }
 
  for (pos = 120; pos >= 0; pos-=1) 
  {
    myservo.write(pos);  
          
    delay(3);                    
  }
 
  delay(2000);
}

if(sensorValue<=600 && sensorValue>460)
{

 for (pos = 0; pos <= 120; pos+=1)
  { 
    myservo.write(pos); 
             
    delay(3);        
  }
  for (pos = 120; pos >= 0; pos-=1) 
  {
    myservo.write(pos);  
            
    delay(3);                   
  }
  
  delay(1000);
}

if(sensorValue<460){

  for (pos = 0; pos <= 120; pos+=1)
  { 
    myservo.write(pos);  
           
    delay(3);        
  }
  
  for (pos = 120; pos >= 0; pos-=1)
  {
    myservo.write(pos); 
          
    delay(3);                 
  }
  
  delay(100);
}

}