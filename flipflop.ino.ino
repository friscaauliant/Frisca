#define LED1 8
#define LED2 12
#define LED3 13

void setup() {
  Serial.begin(9600);

}

void behavior(int delay_time, int PIN1_status, int PIN2_status, int PIN3_status)
{
  digitalWrite(LED1, PIN1_status);
  digitalWrite(LED2, PIN2_status);
  digitalWrite(LED3, PIN3_status);
  delay(delay_time);
}

void loop() {
  int time_pattern = 300;
  for (int count = 5; count < 21; count++){
    behaviot (time_pattern, HIGH, LOW, LOW);
    behaviot (time_pattern, LOW, HIGH, LOW);
    behaviot (time_pattern, LOW, LOW, HIGH);
    time_pattern = time_pattern-(count^25);
  }
