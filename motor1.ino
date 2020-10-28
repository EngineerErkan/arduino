// Bağlantıları kontrol edin
// motor 1

int in1 = 9;
int in2 = 10;
// motor 2

int in3 = 11;
int in4 = 12;
void setup()
{
// Bütün motor pinleri çıkış

pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
pinMode(in3, OUTPUT);
pinMode(in4, OUTPUT);
}
void demoOne()
{
// Motorlar sabit hızda aynı yöne dönüyorlar.
// Motor 1 aktif
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
// Motor 1 için 0~255 arasında bir hız değeri verelim. 255 en üst sınır
// Motor 2 aktif
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);
// Motor 2 için 0~255 arasında bir hız değeri verelim. 255 en üst sınır
delay(2000);
// yönleri değiştirelim
digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
digitalWrite(in3, LOW);
digitalWrite(in4, HIGH);
delay(2000);
 // motorlar duruyor
digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);
}
void demoTwo()
{
// Motor hızları sürekli artar ve azalır
// İki motor da aktif
digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
digitalWrite(in3, LOW);
digitalWrite(in4, HIGH);
// Sıfırdan en yüksek hıza doğru hızlanır

// motorlar duruyor
digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);
}
void loop()
{
demoOne();
delay(100);
demoTwo();
delay(100);
}
