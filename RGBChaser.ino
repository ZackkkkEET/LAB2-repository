/*  

THEME: DIGITAL INPUT PULL UP 

The goal of this program is to print out if the  

pushbutton is off or on when pressed and released 

*/ 

int pushButton = 2;    

void setup() {    

  // put your setup code here, to run once:    

Serial.begin(9600);              //initialise serial communication at 9600 bits per second    

pinMode(2, INPUT_PULLUP);     // make pushbutton pin an input    

}    

 

void loop() {    

  // put your main code here, to run repeatedly:    

int buttonState = digitalRead(pushButton);   // read the input value    

Serial.println(buttonState);               // print out the state of button    

}     