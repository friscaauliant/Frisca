const int pb = 3;
const int led = 4;
boolean hasilBaca;

void setup() {
  Serial.begin(9600);
  pinMode(pb, INPUT);
  pinMode(led, OUTPUT);
  

}

void loop() {
  hasilBaca = digitalRead(pb);
  if(hasilBaca == 1){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
    }

}
