//variabelen van 0 [minimum] tot 255 [maximum snelheid]
int snelheidVooruit = 155;
int snelheidAchteruit = 155;
int draaisnelheid = 155;
int snelheidlinks = 150;
int snelheidrechts = 160;
int snelheidlangzaam = 90;
int knop = 0;
boolean button = true;
boolean once = true;

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
    pinMode(2, INPUT);
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
 pinMode(6, INPUT);
 pinMode(7, OUTPUT);
 pinMode(8, OUTPUT);
 pinMode(9, INPUT);
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
//   while(button){
//     if(digitalRead(2) == HIGH){ button = false; Serial.println("knop"); }
//   }
//  
// 
//content = "d";
//
//    while(Serial.available()) {
//      character = Serial.read();
//      content.concat(character);
//      delay(10);
//  }
// 
//  if (content != "") {
//    for(int i = 0; i < content.length(); i++){
//      char substr = content.charAt(i);
//      Serial.println("letter" + substr);
//      SchrijfLetter(substr);
//      //vooruit(0);
//      int gaatSchrijven = i + 1;
//       displayNummer(gaatSchrijven);
//      letterL();
//      //linksdraaien(0);
//      delay(5000);
//      displayUit();
//      
//      
//      delay(10);
//      
//    }
//    
//  }
    
    while(once) {
 //     SchrijfLetter('l');
//SchrijfLetter('i');
      SchrijfLetter('o');
//      SchrijfLetter('n');
      once = false;
    }
}
void achteruitlangzaam(int afstand)
{
      digitalWrite(M1, LOW);   
    digitalWrite(M2, LOW);       
   analogWrite(E1, snelheidlangzaam);   //PWM Speed Control
    analogWrite(E2, snelheidlangzaam);   //PWM Speed Control
    delay(afstand);
    analogWrite(E1, 0);   //PWM Speed Control
    analogWrite(E2, 0);
}

void vooruit(int afstand)
{
    digitalWrite(M1, HIGH);   
    digitalWrite(M2, HIGH);       
    analogWrite(E1, snelheidlinks);   //PWM Speed Control
    analogWrite(E2, snelheidrechts);   //PWM Speed Control
    delay(afstand);
    analogWrite(E1, 0);   //PWM Speed Control
    analogWrite(E2, 0);

}

void achteruit(int afstand)
{
    digitalWrite(M1, LOW);   
    digitalWrite(M2, LOW);       
   analogWrite(E1, snelheidlinks);   //PWM Speed Control
    analogWrite(E2, snelheidrechts);   //PWM Speed Control
    delay(afstand);
    analogWrite(E1, 0);   //PWM Speed Control
    analogWrite(E2, 0);
}
void linksdraaien(int afstand)
{
  digitalWrite(M2, HIGH); 
  digitalWrite(M1, LOW);  
   analogWrite(E2, snelheidrechts);   //PWM Speed Control
   analogWrite(E1, snelheidlinks);
   delay(afstand);
    analogWrite(E2, 0);   //PWM Speed Control
    analogWrite(E1, 0);
}
void rechtsdraaien(int afstand)
{
   digitalWrite(M1, HIGH); 
   digitalWrite(M2, LOW);  
   analogWrite(E1, snelheidlinks);
       analogWrite(E2, snelheidrechts);   //PWM Speed Control
     delay(afstand);
    analogWrite(E1, 0);   //PWM Speed Control
    analogWrite(E2, 0);
}
void draaiend (int afstand)
{
  digitalWrite(M1, HIGH); 
   digitalWrite(M2, LOW); 
    analogWrite(E1, 150);
       analogWrite(E2, snelheidrechts);
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
  vooruit(1000);
  rechtsdraaien(950);
  vooruit(1000);
  rechtsdraaien(950);
  vooruit(1000);
}
void Letterb(){
  Serial.println("Letter b");
  vooruit(600);
  delay(200);
  delay(1000);  
  achteruit(325);
  delay(300);
  delay(1000);
  rechtsdraaien(350);
  delay(300);
  delay(1000);
  vooruit(350);
  delay(300);
  delay(1000);
  rechtsdraaien(350);
  delay(300);
  delay(1000);
  vooruit(350);
  delay(300);
  delay(1000);
  rechtsdraaien(350);
  delay(300);
  delay(1000);
  vooruit(350);
  delay(300);
  delay(1000);  
}
void Letterc(){
  Serial.println("Letter c");
  linksdraaien(780);
}
void Letterd(){
  Serial.println("Letter d");
  vooruit(1000);
}
void Lettere(){
  Serial.println("Letter e");
  
  vooruit(1500);
  delay(1000);
  rechtsdraaien(600);
  delay(1000);
  vooruit(900);
  delay(1000);
  achteruit(900);
  delay(1000);
  rechtsdraaien(650);
  delay(1000);
  vooruit(1000);
  delay(1000);
  linksdraaien(600);
  delay(1000);
  vooruit(1000);
  delay(1000);
  delay(100);
  achteruit(1100);
  delay(1000);
  rechtsdraaien(600);
  delay(1000);
  vooruit(700);
  delay(1000);
  linksdraaien(600);
  delay(1000);
  vooruit(700);
  delay(1000);
  delay(100);
  achteruit(500);
  delay(1000);
   
}
void Letterf(){
  Serial.println("Letter f");
  linksdraaien(1000);
  vooruit(2000);
  rechtsdraaien(1000);
  vooruit(500);
  achteruit(500);
  rechtsdraaien(1000);
  vooruit(500);
  linksdraaien(1000);
  vooruit(500);
  achteruit(500);
  rechtsdraaien(1000);
  vooruit(1500);
  linksdraaien(1000);
  vooruit(1000);
}
void Letterg(){
  Serial.println("Letter g");
}
void Letterh(){
  Serial.println("Letter h");
  linksdraaien(1000);
  vooruit(2000);
  achteruit(500);
  rechtsdraaien(500);
  vooruit(700);
  linksdraaien(1000);
  vooruit(500);
  achteruit(2000);
  rechtsdraaien(1000);
  vooruit(500);
}
void Letteri(){
  Serial.println("Letter i");
  linksdraaien(650);
  delay(1000);
  vooruit(800);
  delay(1000);
  achteruit(700);
  achteruitlangzaam(100);
  delay(1000);
  rechtsdraaien(500);
  delay(1000);
  vooruit(600);
  delay(400);
}
void Letterj(){
  Serial.println("Letter j");
}
void Letterk(){
  Serial.println("Letter k");
}
void spacer(){
  Serial.println("spacer");
  vooruit(900);
  delay(1000);
  achteruit(900);
  delay(1000);
  rechtsdraaien(500);
  delay(1000);
  vooruit(600);
}  

void Letterl(){
  Serial.println("Letter l");
  
  linksdraaien(650);
  delay(1000);
  vooruit(900);
  delay(1000);
  achteruit(800);
  achteruitlangzaam(100);
  delay(1000);
  rechtsdraaien(500);
  delay(1000);
  vooruit(600);
  delay(400);
}  
void Letterm(){
  Serial.println("Letter m");
  vooruit(1000);
  delay(200);
  delay(1000);
  rechtsdraaien(600);
  delay(200);
  delay(1000);
  vooruit(700);
  delay(200);
  delay(1000);
  rechtsdraaien(600);
  delay(200);
  delay(1000);
  vooruit(1000);
  delay(200);
  delay(1000);
  rechtsdraaien(200);
  delay(200);
  delay(1000);
  achteruit(1100); 
  delay(200);
  delay(1000);
  linksdraaien(620);
  delay(300);
  delay(1000);
  vooruit(700);
  delay(300);
  delay(1000);
  rechtsdraaien(550);
  delay(300);
  delay(1000);
  vooruit(1000);
  
}
void Lettern(){
  Serial.println("Letter n");
}
void Lettero(){
  Serial.println("Letter o");
//  delay(1000);
//  vooruit(800);
//  delay(1000);
//  linksdraaien(650);
//  delay(1000);
//  vooruit(800);
//  delay(1000);
//  linksdraaien(650);
//  delay(1000);
//  vooruit(800);
//  delay(1000);
//  linksdraaien(650);
//  delay(1000);
//  vooruit(600);
//  delay(1000);
//  linksdraaien(650);
//  delay(1000);
//  vooruit(1000);
  
  draaiend(2000);
  
  
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
    vooruit(300);
  linksdraaien(1000);
  vooruit(2000);
  linksdraaien(1000);
  vooruit(300);
  achteruit(600);
  vooruit(300);
  linksdraaien(1000);
  vooruit(2000);
  linksdraaien(1000);
  vooruit(800);
}
void Letteru(){
  Serial.println("Letter u");
  linksdraaien(1000);
  vooruit(2000);
  achteruit(1000);
  rechtsdraaien(1000);
  vooruit(500);
  linksdraaien(1000);
  vooruit(1000);
  achteruit(2000);
  rechtsdraaien(1000);
  vooruit(500);
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
  digitalWrite(7, HIGH);
  digitalWrite(4,HIGH);
}

void nummer2(){
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(7, HIGH);
   digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
}

void nummer3(){
   digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(7, HIGH);
       digitalWrite(8, HIGH);
        digitalWrite(9, HIGH);
}
  
  void nummer4(){
     digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(7, HIGH);
     digitalWrite(9, HIGH);
    

}
  
  void nummer5(){
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
 digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);

 
}
  
  void nummer6(){
digitalWrite(2, HIGH);
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);
 digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
}
  
  void nummer7(){
    digitalWrite(4, HIGH);
       digitalWrite(7, HIGH);
        digitalWrite(8, HIGH);

}
  
  void nummer8(){
digitalWrite(2, HIGH);
digitalWrite(3, HIGH);
digitalWrite(4, HIGH);  
   digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
     digitalWrite(9, HIGH);
 
}
  void nummer9(){
    digitalWrite(3, HIGH);  
   digitalWrite(4, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(13, HIGH);
}


// letter L functie
void letterL(){
  digitalWrite(4, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
}
  void displayUit(){
    digitalWrite(2,LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(9, LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8, LOW);
  }

