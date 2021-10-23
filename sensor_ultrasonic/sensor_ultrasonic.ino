#define echo D2
#define trig D1

long duration, jarak;

void setup() {
  Serial.begin(9600);
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);

}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trig, LOW);


  duration = pulseIn(echo, HIGH);
  jarak = (duration/2) / 29.1;


  Serial.println("jarak :");
  Serial.print(jarak);
  Serial.println(" cm");
  delay(1000);

}
  
