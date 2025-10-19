//THEME: Digital Ouputs 

//The main goal is to make 3 LED glow one by one 

void setup() { 

  // initialize digital pin LED_BUILTIN as an output.  

  pinMode(13, OUTPUT);    //sets pin 13 as an ouput 

  pinMode(12, OUTPUT);    //sets pin 12 as an ouput 

  pinMode(11, OUTPUT);    //sets pin 11 as an ouput 

}  

 

void loop() {  

// the loop function runs over and over again forever  

digitalWrite(13, 1);   // turn the LED1 on (HIGH is the voltage level)  

digitalWrite(12, 0);   // Keep LED2 off  

digitalWrite(11, 0);   // Keep LED3 off  

 delay(1000);           // Wait 1 second  

digitalWrite(13, 0);   // turn the LED1 off by making the voltage LOW  

digitalWrite(12, 1);   // Turn LED2 on (High is the voltage level)  

digitalWrite(11, 0);   // Keep LED 3 off  

delay(1000);           // Wait 1 second  

digitalWrite(13, 0);   // Keep LED1 off  

digitalWrite(12, 0);   // turn the LED2 off by making the voltage LOW  

digitalWrite(11, 1);   // Keep LED3 off  

delay(1000);           // Wait 1 second  

 }  