//Arduino PWM Speed Control
int E1 = 5;  
int M1 = 4; 
int E2 = 6;                      
int M2 = 7;                        
 
void setup() 
{ 
    pinMode(M1, OUTPUT);   
    pinMode(M2, OUTPUT); 
} 
 
void loop() 
{ 
    vooruit();
    delay(2000);
    achteruit();
    delay(2000);
}

void vooruit()
{
    digitalWrite(M1, HIGH);   
    digitalWrite(M2, HIGH);       
    analogWrite(E1, 255);   //PWM Speed Control
    analogWrite(E2, 255);   //PWM Speed Control
}

void achteruit()
{
    digitalWrite(M1, LOW);   
    digitalWrite(M2, LOW);       
    analogWrite(E1, 255);   //PWM Speed Control
    analogWrite(E2, 255);   //PWM Speed Control
}
