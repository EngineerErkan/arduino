
#include <AFMotor.h>
#include <Servo.h>
 
Servo myservo;  // servo
int pos = 0;    // servo pozisyonu
AF_DCMotor motor1(1); // create motor #1
AF_DCMotor motor2(2); // create motor #2
AF_DCMotor motor3(3); // create motor #1
AF_DCMotor motor4(4); // create motor #2
 
void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Motor test!");
  myservo.attach(9);  // servo pini 9  
  motor1.setSpeed(200);     //Hız 200 - 255
  motor2.setSpeed(200);     //Hız 200 - 255
  motor3.setSpeed(200);     //Hız 200 - 255
  motor4.setSpeed(200);     //Hız 200 - 255
}
 
void loop() {
  Serial.print("ileri");
  motor1.run(FORWARD);      
  motor2.run(FORWARD);      
  motor3.run(FORWARD);      
  motor4.run(FORWARD);      
  delay(1000);
 
  Serial.print("geri");
  motor1.run(BACKWARD);    
  motor2.run(BACKWARD);  
  motor3.run(BACKWARD); 
  motor4.run(BACKWARD); 
  delay(1000);
  
  Serial.print("dur");
  motor1.run(RELEASE);  
  motor2.run(RELEASE); 
  motor3.run(RELEASE); 
  motor4.run(RELEASE); 
  delay(1000);

}
