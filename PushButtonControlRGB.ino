//THEME: DIGITAL PULLUP 

//The goal is that when not pressedd, LED is RED+GREEN, when pressed BLUE+RED 

int pushButton = 2;                  //sets pin 2 as PB 

void setup() {  

// put your setup code here, to run once:  

Serial.begin(9600);                   //initialise serial communication at 9600 bits per second  

pinMode(pushButton, INPUT_PULLUP);   // make pushbutton pin an input  

pinMode (13, OUTPUT);                //Sets pin 13 blue as OUPUT 

pinMode (12, OUTPUT);                //Sets pin 12 Green as OUPUT 

pinMode (11, OUTPUT);                //Sets pin 11 Red as OUPUT 

}   

 

void loop() {  

  // put your main code here, to run repeatedly:  

int buttonState = digitalRead(pushButton);       // read the input pin  

Serial.print("buttonState = ");                    // print out the state of button  

Serial.print("\t");                              //creates an indent  

Serial.print(buttonState);                       //prints button state on new line 

digitalWrite(13, !buttonState);                  //pin13 B set OFF 

digitalWrite(12, buttonState);                   //pin12 G 

digitalWrite(11, buttonState);                   //pin11 R 

delay(1);                                       //wait 

Serial.println(buttonState);                    //Print state of button 

digitalWrite(13, buttonState);                  //pin13 B  

digitalWrite(12, !buttonState);                 //pin12 G set OFF 

digitalWrite(11, buttonState);                  //pin11 R  

}   

 