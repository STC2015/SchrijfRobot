//variabelen van 0 [minimum] tot 255 [maximum snelheid]
int snelheidVooruit = 255;
int snelheidAchteruit = 255;
int draaisnelheid = 255;

//Arduino PWM Speed Control
int E1 = 5;  
int M1 = 4; 
int E2 = 6;                      
int M2 = 7;                        


boolean opDeLijn;
int a = -1;
char character;
String content = "";


void setup() 
{ 
  Serial.begin(9600);
    pinMode(M1, OUTPUT);   
    pinMode(M2, OUTPUT); 
    pinMode(2, OUTPUT);
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
 pinMode(5, OUTPUT);
 pinMode(6, OUTPUT);
 pinMode(7, OUTPUT);
 pinMode(8, OUTPUT);
 pinMode(9, OUTPUT);
 pinMode(10, OUTPUT);
 pinMode(11, OUTPUT);
 pinMode(12, OUTPUT);
 pinMode(M1, OUTPUT);   
 pinMode(M2, OUTPUT); 

 digitalWrite(10,HIGH);
 digitalWrite(11,HIGH);
 digitalWrite(12,HIGH);
} 
 
void loop() 
{ 
content = "";

    while(Serial.available()) {
      character = Serial.read();
      content.concat(character);
      delay(10);
  }

  if (content != "") {
    for(int i = 0; i < content.length(); i++){
      char substr = content.charAt(i);
      Serial.println("letter" + substr);
      SchrijfLetter(substr);
      vooruit(3000);
      int gaatSchrijven = i + 1;
       displayNummer(gaatSchrijven);
      letterL();
      draailinks(1000);
      delay(5000);
      displayUit();
      
      
      delay(10);
      
    }
    
  }
    
}

void vooruit(int afstand)
{
    digitalWrite(M1, HIGH);   
    digitalWrite(M2, HIGH);       
    analogWrite(E1, snelheidVooruit);   //PWM Speed Control
    analogWrite(E2, snelheidVooruit);   //PWM Speed Control
    delay(afstand);
    analogWrite(E1, 0);   //PWM Speed Control
    analogWrite(E2, 0);

}

void achteruit(int afstand)
{
    digitalWrite(M1, LOW);   
    digitalWrite(M2, LOW);       
   analogWrite(E1, snelheidAchteruit);   //PWM Speed Control
    analogWrite(E2, snelheidAchteruit);   //PWM Speed Control
    delay(afstand);
    analogWrite(E1, 0);   //PWM Speed Control
    analogWrite(E2, 0);
}
void draailinks(int afstand)
{
  digitalWrite(M2, HIGH); 
  digitalWrite(M1, LOW);  
   analogWrite(E2, 255);   //PWM Speed Control
   analogWrite(E1, 255);
   delay(afstand);
    analogWrite(E2, 0);   //PWM Speed Control
    analogWrite(E1, 0);
}
void draairechts(int afstand)
{
   digitalWrite(M1, HIGH); 
   digitalWrite(M2, LOW);  
   analogWrite(E1, 255);
       analogWrite(E2, 255);   //PWM Speed Control
     delay(afstand);
    analogWrite(E1, 0);   //PWM Speed Control
    analogWrite(E2, 0);
}

void SchrijfLetter(char letter){
  if(letter == 'a'){
    Lettera();
  }
if(letter == 'b'){
    Letterb();
  } 
if(letter == 'c'){
    Letterc();
  }
if(letter == 'd'){
    Letterd();
  }      
if(letter == 'e'){
    Lettere();
  }  
if(letter == 'f'){
    Letterf();
  }     
if(letter == 'g'){
    Letterg();
  } 
if(letter == 'h'){
    Letterh();
  }      
if(letter == 'i'){
    Letteri();
  }    
if(letter == 'j'){
    Letterj();
  }    
if(letter == 'k'){
    Letterk();
  }    
if(letter == 'l'){
    Letterl();
  }    
if(letter == 'm'){
    Letterm();
  }    
if(letter == 'n'){
    Lettern();
  }
if(letter == 'o'){
    Lettero();
  }
if(letter == 'p'){
    Letterp();
  }
if(letter == 'q'){
    Letterq();
  }
if(letter == 'r'){
    Letterr();
  }
if(letter == 's'){
    Letters();
  }
if(letter == 't'){
    Lettert();
  }
if(letter == 'u'){
    Letteru();
  } 
if(letter == 'v'){
    Letterv();
  }      
if(letter == 'x'){
    Letterx();
  }  
if(letter == 'y'){
    Lettery();
  }   
if(letter == 'z'){
    Letterz();
  }      
}

void Lettera(){
  Serial.println("Letter A");
  vooruit(2000);
  draairechts(1950);
  vooruit(1000);
draairechts(1950);
vooruit(2000);
}
void Letterb(){
  Serial.println("Letter b");
}
void Letterc(){
  Serial.println("Letter c");
}
void Letterd(){
  Serial.println("Letter d");
}
void Lettere(){
  Serial.println("Letter e");
}
void Letterf(){
  Serial.println("Letter f");
}
void Letterg(){
  Serial.println("Letter g");
}
void Letterh(){
  Serial.println("Letter h");
}
void Letteri(){
  Serial.println("Letter i");
}
void Letterj(){
  Serial.println("Letter j");
}
void Letterk(){
  Serial.println("Letter k");
}
void Letterl(){
  Serial.println("Letter l");
}  
void Letterm(){
  Serial.println("Letter m");
}
void Lettern(){
  Serial.println("Letter n");
}
void Lettero(){
  Serial.println("Letter o");
}
void Letterp(){
  Serial.println("Letter p");
}
void Letterq(){
  Serial.println("Letter q");
}
void Letterr(){
  Serial.println("Letter r");
}
void Letters(){
  Serial.println("Letter s");
}
void Lettert(){
  Serial.println("Letter t");
}
void Letteru(){
  Serial.println("Letter u");
}
void Letterv(){
  Serial.println("Letter v");
}
void Letterw(){
  Serial.println("Letter w");
}
void Letterx(){
  Serial.println("Letter x");
}
void Lettery(){
  Serial.println("Letter y");
}
void Letterz(){
  Serial.println("Letter z");
}

void displayNummer(int i){
      if(i == 1){
      nummer1();
    }
    if(i == 2){
      nummer2();
    }
    if(i == 3){
      nummer3();
    }
    if(i == 4){
      nummer4();
    }
    if(i == 5){
      nummer5();
    }
    if(i == 6){
      nummer6();
    }
    if(i == 7){
      nummer7();
    }
    if(i == 8){
      nummer8();
    }
    if(i == 9){
      nummer9();
  }
  
    
  }


void nummer1(){
  digitalWrite(2, HIGH);
  digitalWrite(6,HIGH);
}

void nummer2(){
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
}

void nummer3(){
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
}
  
  void nummer4(){
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6,HIGH);
}
  
  void nummer5(){
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
}
  
  void nummer6(){
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8, HIGH);
}
  
  void nummer7(){
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
}
  
  void nummer8(){
  digitalWrite(2,HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8, HIGH);
 
}
  void nummer9(){
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
}


// letter L functie
void letterL(){
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(8, HIGH);
}
  void displayUit(){
    digitalWrite(2,LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8, LOW);
  }
