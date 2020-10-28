int izqA = 9; 
int izqB = 10; 
int derA = 11; 
int derB = 12; 
int estado = 'g';

void setup() { 
Serial.begin(9600); 
pinMode(derA, OUTPUT);
pinMode(derB, OUTPUT);
pinMode(izqA, OUTPUT);
pinMode(izqB, OUTPUT);
} 

void loop() { 

if(Serial.available()>0){
estado = Serial.read();
}
if(estado=='a'){ // Forward
  Serial.println(estado);
analogWrite(derB, 0); 
analogWrite(izqB, 0); 
analogWrite(derA, 255); 
analogWrite(izqA, 255); 
}
if(estado=='d'){ // right
    Serial.println(estado);
analogWrite(derB, 255); 
analogWrite(izqB, 0); 
analogWrite(derA, 0); 
analogWrite(izqA, 255); 
}
if(estado=='c'){ // Stop
    Serial.println(estado);
analogWrite(derB, 0); 
analogWrite(izqB, 0); 
analogWrite(derA, 0); 
analogWrite(izqA, 0); 
}
if(estado=='b'){ // left
    Serial.println(estado);
analogWrite(derB, 0); 
analogWrite(izqB, 255);
analogWrite(izqA, 0);
analogWrite(derA, 255); 
} 

if(estado=='e'){ // Reverse
    Serial.println(estado);
analogWrite(derA, 0); 
analogWrite(izqA, 0);
analogWrite(derB, 255); 
analogWrite(izqB, 255); 
}
if (estado =='f'){ // 

}
if (estado=='g'){ // 
}
}
