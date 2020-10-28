#include <AFMotor.h> 
AF_DCMotor motor(4, MOTOR34_64KHZ); // Motoru tanımlıyoruz.
  
void setup() {
  Serial.begin(9600);          
  Serial.println("Motor testi !");
  motor.setSpeed(200);   // Motor hızını ayarlıyoruz. (Maks 255)
}
  
void loop() {
  Serial.print("tik");
   
  motor.run(FORWARD);   // ileri yönde dön
  delay(1000);
  
  Serial.print("tok");
  motor.run(BACKWARD);  // ters yöne dön
  delay(1000);
   
  Serial.print("tak");
  motor.run(RELEASE);  // dur
  delay(1000); 
  }
