//THEME: Digital Ouputs 

//The main goal is to make 4 LED glow one by one 

void setup() {  

// the setup function runs once when you press reset or power the board  

  // initialize digital pin LED_BUILTIN as an output.  

  pinMode(13, OUTPUT);  

  pinMode(12, OUTPUT);  

  pinMode(11, OUTPUT);  

  pinMode(10, OUTPUT);  

}  

 

void loop() {  

// the loop function runs over and over again forever  

  digitalWrite(13, 1);  //Turn LED 1 on, by making voltage HIGH 

  digitalWrite(12, 0);  //Keep LED 2 off 

  digitalWrite(11, 0);  //Keep LED 3 off 

  digitalWrite(10, 0);  //Keep LED 4 off 

  delay(1000);          // wait for a second  

  digitalWrite(13, 0);   // turn the LED1 off by making the voltage LOW  

  digitalWrite(12, 1);   //Turn LED 2 on, by making voltage HIGH 

  digitalWrite(11, 0);   //keep LED 3 off 

  digitalWrite(10, 0);   //Keep LED 4 off 

  delay(1000);  

  digitalWrite(13, 0);   // Keep LED 1 off 

  digitalWrite(12, 0);   //Turn LED 2 off by making the voltage LOW  

  digitalWrite(11, 1);   //Turn LED 3 on, by making voltage HIGH 

  digitalWrite(10, 0);   //Keep LED 4 off 

  delay(1000);    

  digitalWrite(13, 0);  // turn the LED on (HIGH is the voltage level)  

  digitalWrite(12, 0);  //Keep LED 2 off 

  digitalWrite(11, 0);  //Keep LED 3 off 

  digitalWrite(10, 1);  //Turn LED 4 on, by making voltage HIGH 

  delay(1000);          // wait for a second  

  }        