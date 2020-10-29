int z = 0;

void setup() {
Serial.begin(9600);
}

void loop() {
for (int i=-5; i<20; i=i+3){
Serial.println (i);
delay(500);
}
for (int i=1; i<4097; i=i*2){
Serial.println (i);
delay(500);
}
for (int i=3; i<4099; i=i*2-2){
Serial.println (i);
delay(500);
}
for (int i=1; i<4099; i=i+z){
Serial.println (i);
z += 1;
delay(500);
}
}
