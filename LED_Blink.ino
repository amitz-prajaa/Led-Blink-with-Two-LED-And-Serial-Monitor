int LED1=13;
int LED2 = 12 ;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
   pinMode (LED1,OUTPUT);
   pinMode ( LED2 , OUTPUT) ;
}

void loop() {
  // put your main code here, to run repeatedly:

  // delay once.....
digitalWrite(LED1,1);
Serial.println("LED 1 -> ON");
delay(500);
digitalWrite(LED1,0);
Serial.println("LED 1 -> OFF");
delay(500);
digitalWrite(LED2 , 1);
Serial.println("LED 2 -> ON");
delay(500);
digitalWrite(LED2 , 0) ;
Serial.println("LED 1 -> OFF");
delay(500) ;
}
//
//// delay increase....
//digitalWrite(LED1,1);
//delay(100);
//digitalWrite(LED1,0);
//delay(600);
//digitalWrite(LED2 , 1);
//delay(100);
//digitalWrite(LED2 , 0) ;
//delay(600);
//
//
////delay increase..
//digitalWrite(LED1,1);
//delay(100);
//digitalWrite(LED1,0);
//delay(200);
//digitalWrite(LED2 , 1);
//delay(100);
//digitalWrite(LED2 , 0) ;
//delay(200);
//
//// delay increase...
//digitalWrite(LED1,1);
//delay(100);
//digitalWrite(LED1,0);
//delay(00);
//digitalWrite(LED2 , 1);
//delay(100);
//digitalWrite(LED2 , 0) ;
//delay(00);
//}
