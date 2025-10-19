//THEME: Controlling analogue output  

//The goal is to create a custom color mtahced RGB light using analogue input 

 

void setup() {  

// the setup routine runs once when you press reset:  

pinMode (11, OUTPUT);   //sets pin 11 as OUTPUT 

pinMode (10, OUTPUT);   //sets pin 10 as OUTPUT 

pinMode (9, OUTPUT);    //sets pin 9 as OUTPUT 

}  

 

void loop() {     

// the loop routine runs over and over again forev 

analogWrite(11, 188);     //Sets blue LED to said hex color code 

analogWrite(10, 80);      //Sets red LED to said hex color code 

analogWrite(9, 170);      //Sets Green LED to said hex color code 

} 

 