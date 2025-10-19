//THEME: Pullup 
//The goal is when PB is not pressed, value is 1, when pressed = 0

int pushButton = 2;
void setup() {  
// the setup routine runs once when you press reset:  

Serial.Begin(9600);  // initialize serial communication at 9600 bits per second:   
pinMode(2, INPUT_PULLUP);  //sets pin 2 as input pull down
}

void loop() {     
// the loop routine runs over and over again forev 
int buttonState = digitalRead(pushbutton); //reads val of PB pin 2
Serial.print("buttonState = "); //prints buttonState = 
Serial.println(buttonState); //prints the val of PB
delay (1000); //waits 1 second
} 

 