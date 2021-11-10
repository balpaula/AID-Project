//Constants:
const int flexPin0 = A0; //pin A0 to read analog input
const int flexPin1 = A1; //pin A1 to read analog input
const int flexPin2 = A2; //pin A2 to read analog input
const int flexPin3 = A3; //pin A3 to read analog input

//Variables:
int value0, value1, value2, value3; //save analog value


void setup(){
  
  Serial.begin(9600);       //Begin serial communication

}

void loop(){
  
  value0 = analogRead(flexPin0);         //Read and save analog value from potentiometer
  value1 = analogRead(flexPin1);
  value2 = analogRead(flexPin2);
  value3 = analogRead(flexPin3);
  Serial.print(value0);               
  Serial.print(", ");
  Serial.print(value1);               
  Serial.print(", ");
  Serial.print(value2);               
  Serial.print(", ");
  Serial.println(value3);      
  //value = map(value, 700, 900, 0, 255);//Map value 0-1023 to 0-255 (PWM)
  delay(100);                          //Small delay
  
}
