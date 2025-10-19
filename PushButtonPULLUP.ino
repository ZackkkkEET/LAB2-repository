//THEME: Digital INPUT_PULLUP 

//The goal is that when not PB is not pressed, LED is WHITE, and when pressed it is OFF 

int pushButton = 2;   //sets pin 2 as pushbutton 

void setup() {  

  // the setup routine runs once when you press reset:   

  Serial.begin(9600);  // initialize serial communication at 9600 bits per second:   

  pinMode(pushButton, INPUT_PULLUP);   //Sets pin2 as an input pull up 

  pinMode (13, OUTPUT);  //Sets pin 13 as output 

  pinMode (12, OUTPUT);  //sets pin 12 as output 

  pinMode (11, OUTPUT);  //sets pin 11 as ouput 

 

void loop() {  

  // the loop routine runs over and over again forever:  

  int buttonState = digitalRead(pushButton);  // read the input pin:  

  Serial.print ("buttonState = ");   // print out the state of the button:  

  Serial.print(buttonState);        //prints the value of PB 

  Serial.print("\t");               //creates a tab 

  Serial.print("pushButton = ");    //prints the button state 

  Serial.println(pushButton);       //prints button state on new line 

  digitalWrite(12, buttonState);     // set pin 12 on 

  digitalWrite(11, buttonState);     //sets pin 11 on 

  digitalWrite(13, buttonState);     //sets pin 13 on 

  delay(1);  // delay in between reads for stability  

 }   