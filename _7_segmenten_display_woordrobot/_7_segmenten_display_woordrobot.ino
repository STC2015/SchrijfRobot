String woord = "hallo";
int aantal = 0;

boolean opDeLijn;

void setup()
{
 pinMode(2, OUTPUT);
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
 pinMode(5, OUTPUT);
 pinMode(6, OUTPUT);
 pinMode(7, OUTPUT);
 pinMode(8, OUTPUT);

}
void loop()
{
  // eerst wordt er gecheckt of de robot op de lijn is. Als dit het geval is dan wordt aantal+1 gedaan en wordt het eerste cijfer geprint op het display
  if(opDeLijn == true){
    aantal++;
    if(aantal == 1){
      nummer1();
    }
    if(aantal == 2){
      nummer2();
    }
    if(aantal == 3){
      nummer3();
    }
    if(aantal == 4){
      nummer4();
    }
    if(aantal == 5){
      nummer5();
    }
    if(aantal == 6){
      nummer6();
    }
    if(aantal == 7){
      nummer7();
    }
    if(aantal == 8){
      nummer8();
    }
    if(aantal == 9){
      nummer9();
    }
  } else{
  digitalWrite(2,LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8, LOW);
  }
  
  
  // display functie om handmatig een cijfer te tonen
  display(1);
  
}

// Alle nummer functies
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
  
  
  // display functie
  void display(int i){
    if(opDeLijn == true){
    aantal++;
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
} else{
  digitalWrite(2,LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8, LOW);
}
}

