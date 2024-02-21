// the code is written in C++ code

// our variables defining

//**** LEDs as Output variables****
int red0 = 6;
int yellow0 = 5;
int green0 = 7;

//**** Analog input variables****
int gass = A0;
int photodiode = A1;
int temp36 = A2;
int light;
int gas;
float celsius;
// Arduino soil moisture sensor code
// declare variables for pins
const int sensorpin = A3;
const int sensorpower = 8;
const int LED1 = 2;
const int LED2 = 3;
const int LED3 = 4;

// variable for sensor reading
int sensor;
const int delayTime = 1000; 
int wet = 800;
int dry = 500;


//**** set Output Pins ****
void setup()
{
  Serial.begin(9600);
  
//**** LEDs as Output variables****
  pinMode(red0, OUTPUT);
  pinMode(yellow0, OUTPUT);
  pinMode(green0, OUTPUT);
  
//**** Analog input variables****
  pinMode(photodiode,INPUT);
  pinMode(gass,INPUT);
//**** Rainfall sensor****
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(sensorpower,OUTPUT);
  
   
}

void loop()
{
  

  gas = analogRead(gass);
  light =  analogRead(photodiode);
  celsius = map(((analogRead(temp36) - 20) * 3.04), 0, 1023, -40, 125);
  Serial.print("Gas level   : ");
  Serial.println(gas);

  Serial.print("Light Level : ");
  Serial.println(light);

  Serial.print("Temperature : ");
  Serial.println(celsius);
   // code that loops forever
  // power on sensor and wait briefly
  digitalWrite(sensorpower,HIGH);
  delay(10);
  // take reading from sensor
  sensor = analogRead(sensorpin);
  // turn sensor off to help prevent corrosion
  digitalWrite(sensorpower,LOW);
  
  // print sensor reading
  Serial.println(sensor);

  if(gas>380)
  {
    digitalWrite(red0,HIGH);
    delay(250);
    digitalWrite(red0,LOW);
    delay(250);
    
  }
  
  if(light>120) 
  {
    digitalWrite(yellow0,HIGH);
    delay(250);
    digitalWrite(yellow0,LOW);
    delay(250);
  }
  
  if(celsius<5 || celsius>40)
  {
  digitalWrite(green0,HIGH);
    delay(250);
    digitalWrite(green0,LOW);
    delay(250);
  }
  if(sensor>wet){
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,HIGH);
  }
  else if(sensor<dry){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
  }
  else{
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,LOW);
  }
  
  // wait before taking next reading
  delay(delayTime);
 
}




  // put your main code here, to run repeatedly:
// the code is written in C++ code

// our variables defining

//** LEDs as Output variables**
int red0 = 6;
int yellow0 = 5;
int green0 = 7;

//** Analog input variables**
int gass = A0;
int photodiode = A1;
int temp36 = A2;
int light;
int gas;
float celsius;
// Arduino soil moisture sensor code
// declare variables for pins
const int sensorpin = A3;
const int sensorpower = 8;
const int LED1 = 2;
const int LED2 = 3;
const int LED3 = 4;

// variable for sensor reading
int sensor;
const int delayTime = 1000; 
int wet = 800;
int dry = 500;


//** set Output Pins **
void setup()
{
  Serial.begin(9600);
  
//** LEDs as Output variables**
  pinMode(red0, OUTPUT);
  pinMode(yellow0, OUTPUT);
  pinMode(green0, OUTPUT);
  
//** Analog input variables**
  pinMode(photodiode,INPUT);
  pinMode(gass,INPUT);
//** Rainfall sensor**
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(sensorpower,OUTPUT);
  
   
}

void loop(){
  gas = analogRead(gass);
  light =  analogRead(photodiode);
  celsius = map(((analogRead(temp36) - 20) * 3.04), 0, 1023, -40, 125);
  Serial.print("Gas level   : ");
  Serial.println(gas);

  Serial.print("Light Level : ");
  Serial.println(light);

  Serial.print("Temperature : ");
  Serial.println(celsius);
   // code that loops forever
  // power on sensor and wait briefly
  digitalWrite(sensorpower,HIGH);
  delay(10);
  // take reading from sensor
  sensor = analogRead(sensorpin);
  // turn sensor off to help prevent corrosion
  digitalWrite(sensorpower,LOW);
  
  // print sensor reading
  Serial.println(sensor);

  if(gas>380)
  {
    digitalWrite(red0,HIGH);
    delay(250);
    digitalWrite(red0,LOW);
    delay(250);
    
  }
  
  if(light>120) 
  {
    digitalWrite(yellow0,HIGH);
    delay(250);
    digitalWrite(yellow0,LOW);
    delay(250);
  }
  
  if(celsius<5 || celsius>40)
  {
  digitalWrite(green0,HIGH);
    delay(250);
    digitalWrite(green0,LOW);
    delay(250);
  }
  if(sensor>wet){
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,HIGH);
  }
  else if(sensor<dry){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
  }
  else{
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,LOW);
  }
  
  // wait before taking next reading
  delay(delayTime);
}
