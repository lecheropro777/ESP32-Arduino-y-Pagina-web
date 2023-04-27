//--------------------------------------------------------------------------------------------------------------------------------------------------------------------
String Rojo="Rojo";
String Verde="Verde";
String Amarillo="Amarillo";
String Rosa="Rosa";
String Blanco="Blanco";
String Azul="Azul";
void setup() {
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------
  Serial.begin(9600);
  pinMode(8,OUTPUT);   //led 8 - boton 7
  pinMode(9,OUTPUT);   //led 9 -boton 6
  pinMode(10,OUTPUT);  //led 10 - boton 5
  pinMode(11,OUTPUT);  //led 11 - boton 4
  pinMode(12,OUTPUT);  //led 12 - boton 3
  pinMode(13,OUTPUT);  //led 13 - boton 2

  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
}


void loop() {
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------
  //led 13 - boton 2
  if(digitalRead(13)==0 and digitalRead(5)==1){
    while(digitalRead(5)==1){
      delay(400);}
      digitalWrite(13,1);
      Serial.println(Rosa);
      }
  if(digitalRead(13)==1 and digitalRead(5)==1){
    while(digitalRead(5)==1){
      delay(400);}
      digitalWrite(13,0);
      
      
  }
  //led 12 - boton 3
  if(digitalRead(12)==0 and digitalRead(4)==1){
    while(digitalRead(4)==1){
      delay(400);}
      digitalWrite(12,1);
      Serial.println(Azul);
  }
  if(digitalRead(12)==1 and digitalRead(4)==1){
    while(digitalRead(4)==1){
      delay(400); }
      digitalWrite(12,0);
      
  }
  //led 11 - boton 4
  if(digitalRead(11)==0 and digitalRead(7)==1){
    while(digitalRead(7)==1){
      delay(400);}
      digitalWrite(11,1);
      Serial.println(Verde);
  }
  if(digitalRead(11)==1 and digitalRead(7)==1){
    while(digitalRead(7)==1){
      delay(400);}
      digitalWrite(11,0); 
      
  }
  //led 10 - boton 5
  if(digitalRead(10)==0 and digitalRead(3)==1){
    while(digitalRead(3)==1){
      delay(400);}
      digitalWrite(10,1);
      Serial.println(Amarillo);
  }
  if(digitalRead(10)==1 and digitalRead(3)==1){
    while(digitalRead(3)==1){
      delay(400);}
      digitalWrite(10,0); 
      
  }
//led 9 - boton 6
  if(digitalRead(9)==0 and digitalRead(2)==1){
    while(digitalRead(2)==1){
      delay(400);}
      digitalWrite(9,1);
      Serial.println(Blanco);
  }
  if(digitalRead(9)==1 and digitalRead(2)==1){
    while(digitalRead(2)==1){
      delay(400);}
      digitalWrite(9,0);
  }
  //led 8 - boton 7
  if(digitalRead(8)==0 and digitalRead(6)==1){
    while(digitalRead(6)==1){
      delay(400);}
      digitalWrite(8,1);
      Serial.println(Rojo);
  }
  if(digitalRead(8)==1 and digitalRead(6)==1){
    while(digitalRead(6)==1){
      delay(400);}
      digitalWrite(8,0);
  } 
}
