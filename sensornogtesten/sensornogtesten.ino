//Arduino PWM Speed Control
int E1 = 5;  
int M1 = 4; 
int E2 = 6;                      
int M2 = 7;   
int s0 = 0;
int s1 = 0;
s0 = analogRead(0);
s1 = analogRead(1);

 
void setup() 
{ 
    pinMode(M1, OUTPUT);   
    pinMode(M2, OUTPUT); 
} 
 
void loop() 
{ 
  
  
  if( s0 > ???)
  {
    digitalWrite(M1, LOW);   
    digitalWrite(M2, LOW);       
    analogWrite(E1, 000);   //PWM Speed Control
    analogWrite(E2, 000);   //PWM Speed Control
  }
  if (s1 > ???)
  {
   digitalWrite(M1, LOW);   
    digitalWrite(M2, LOW);       
    analogWrite(E1, 000);   //PWM Speed Control
    analogWrite(E2, 000);   //PWM Speed Control 
  }
  if ((s1+s2) > ???)
  {
    digitalWrite(M1, LOW);   
    digitalWrite(M2, LOW);       
    analogWrite(E1, 000);   //PWM Speed Control
    analogWrite(E2, 000);   //PWM Speed Control 
  }
    
    
}



