//THEME: Digital Ouputs 

//The main goal is to make A RGB LIGHT glow one by one, BLUE,GREEN,RED,WHITE 

int timeDelay = 1000;         //This means that for all variables "Time Delay" the delay unit will be 1000  

// initialize digital pin LED_BUILTIN as an output.  

void setup() {  

  // put your setup code here, to run once:  

pinMode(13, OUTPUT);        //Blue  

pinMode(12, OUTPUT);        //Green  

pinMode(11, OUTPUT);        //Red  

}  

 

// the loop function runs over and over again forever  

void loop() {  

  // put your main code here, to run repeatedly:  

digitalWrite(13, 1);        //turns the LED1 on BLUE 

digitalWrite(12, 0);       //Keeps LED2 off   

digitalWrite(11, 0);        //Keeps LED3 off   

delay(timeDelay);                //Wait for 1 seconds  

 

digitalWrite(13, 0);        //turns the LED1 onoff  

digitalWrite(12, 1);       //turns LED2 on  GREEN 

digitalWrite(11, 0);        //Keeps LED3 off   

delay(timeDelay);                //Wait for 1 seconds  

 

digitalWrite(13, 0);        //keeps the LED1 off  

digitalWrite(12, 0);       //turns LED2 off   

digitalWrite(11, 1);        //turns LED3 on RED 

delay(timeDelay);                //Wait for 1 seconds  

 

digitalWrite(13, 1);        //turns the LED1 on  

digitalWrite(12, 1);       //turns LED2 on   

digitalWrite(11, 1);        //Keeps LED3 on   

delay(timeDelay);                //Wait for 1 seconds  

}  