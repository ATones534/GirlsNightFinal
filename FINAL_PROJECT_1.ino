int ledPin1 = 32;
int ledPin2 = 31;
int ledPin3 = 30;
int ledPin4 = 29;
int songOneButton = 33;
int songTwoButton = 34;
int songThreeButton = 35;
int songFourButton = 36;
int volumeKnob = A18;
int mappedVolume = 0;

void setup() {
  pinMode(songOneButton, INPUT);
  pinMode(songTwoButton, INPUT);
  pinMode(songThreeButton, INPUT);
  pinMode(songFourButton, INPUT);
  pinMode(volumeKnob, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  Serial.begin(9600); 
}
void barbieGirl() {
  if (digitalRead(songOneButton) == HIGH) {
    volumeKnob = analogRead(A18);
    // A minor chord
    usbMIDI.sendNoteOn(69, volumeKnob, 1);
    usbMIDI.sendNoteOn(72, volumeKnob, 1);
    usbMIDI.sendNoteOn(76, volumeKnob, 1);
    Serial.print("I'm a Barbie ");
    digitalWrite(ledPin1, HIGH);
    delay(750);
    usbMIDI.sendNoteOff(69, 0, 1);
    usbMIDI.sendNoteOff(72, 0, 1);
    usbMIDI.sendNoteOff(76, 0, 1);
    delay(250);

    // F major chord
    usbMIDI.sendNoteOn(77, volumeKnob, 1);
    usbMIDI.sendNoteOn(81, volumeKnob, 1);
    usbMIDI.sendNoteOn(84, volumeKnob, 1);
    Serial.print("girl. ");
    delay(750);
    usbMIDI.sendNoteOff(77, 0, 1);
    usbMIDI.sendNoteOff(81, 0, 1);
    usbMIDI.sendNoteOff(84, 0, 1);
    delay(250);

    // G major chord
    usbMIDI.sendNoteOn(67, volumeKnob, 1);
    usbMIDI.sendNoteOn(71, volumeKnob, 1);
    usbMIDI.sendNoteOn(74, volumeKnob, 1);
    Serial.print("In a Barbie ");
    delay(750);
    usbMIDI.sendNoteOff(67, 0, 1);
    usbMIDI.sendNoteOff(71, 0, 1);
    usbMIDI.sendNoteOff(74, 0, 1);
    delay(250);

    // C major chord
    usbMIDI.sendNoteOn(72, volumeKnob, 1);
    usbMIDI.sendNoteOn(76, volumeKnob, 1);
    usbMIDI.sendNoteOn(79, volumeKnob, 1);
    Serial.print("world.");
    delay(750);
    usbMIDI.sendNoteOff(72, 0, 1);
    usbMIDI.sendNoteOff(76, 0, 1);
    usbMIDI.sendNoteOff(79, 0, 1);
    delay(250);
    
    // A minor chord
    usbMIDI.sendNoteOn(72, volumeKnob, 1);
    usbMIDI.sendNoteOn(76, volumeKnob, 1);
    usbMIDI.sendNoteOn(79, volumeKnob, 1);
    Serial.print(" Life in ");
    delay(750);
    usbMIDI.sendNoteOff(72, 0, 1);
    usbMIDI.sendNoteOff(76, 0, 1);
    usbMIDI.sendNoteOff(79, 0, 1);
    delay(250);

    // F major chord
    usbMIDI.sendNoteOn(77, volumeKnob, 1);
    usbMIDI.sendNoteOn(81, volumeKnob, 1);
    usbMIDI.sendNoteOn(84, volumeKnob, 1);
    Serial.print("plastic, ");
    delay(750);
    usbMIDI.sendNoteOff(77, 0, 1);
    usbMIDI.sendNoteOff(81, 0, 1);
    usbMIDI.sendNoteOff(84, 0, 1);
    delay(250);

    // G major chord
    usbMIDI.sendNoteOn(67, volumeKnob, 1);
    usbMIDI.sendNoteOn(71, volumeKnob, 1);
    usbMIDI.sendNoteOn(74, volumeKnob, 1);
    Serial.print("it's fantastic!");
    delay(1500);
    usbMIDI.sendNoteOff(67, 0, 1);
    usbMIDI.sendNoteOff(71, 0, 1);
    usbMIDI.sendNoteOff(74, 0, 1);
    delay(500);
    
    // A minor chord
    usbMIDI.sendNoteOn(72, volumeKnob, 1);
    usbMIDI.sendNoteOn(76, volumeKnob, 1);
    usbMIDI.sendNoteOn(79, volumeKnob, 1);
    Serial.print(" You can brush my,");
    delay(750);
    usbMIDI.sendNoteOff(72, 0, 1);
    usbMIDI.sendNoteOff(76, 0, 1);
    usbMIDI.sendNoteOff(79, 0, 1);
    delay(250);

    // F major chord
    usbMIDI.sendNoteOn(77, volumeKnob, 1);
    usbMIDI.sendNoteOn(81, volumeKnob, 1);
    usbMIDI.sendNoteOn(84, volumeKnob, 1);
    Serial.print(" hair,");
    delay(750);
    usbMIDI.sendNoteOff(77, 0, 1);
    usbMIDI.sendNoteOff(81, 0, 1);
    usbMIDI.sendNoteOff(84, 0, 1);
    delay(250);
    
    // G major chord
    usbMIDI.sendNoteOn(67, volumeKnob, 1);
    usbMIDI.sendNoteOn(71, volumeKnob, 1);
    usbMIDI.sendNoteOn(74, volumeKnob, 1);
    Serial.print(" undress me ");
    delay(750);
    usbMIDI.sendNoteOff(67, 0, 1);
    usbMIDI.sendNoteOff(71, 0, 1);
    usbMIDI.sendNoteOff(74, 0, 1);
    delay(250);

    // C major chord
    usbMIDI.sendNoteOn(72, volumeKnob, 1);
    usbMIDI.sendNoteOn(76, volumeKnob, 1);
    usbMIDI.sendNoteOn(79, volumeKnob, 1);
    Serial.print("everywhere.");
    delay(750);
    usbMIDI.sendNoteOff(72, 0, 1);
    usbMIDI.sendNoteOff(76, 0, 1);
    usbMIDI.sendNoteOff(79, 0, 1);
    delay(250);

    // A minor chord
    usbMIDI.sendNoteOn(72, volumeKnob, 1);
    usbMIDI.sendNoteOn(76, volumeKnob, 1);
    usbMIDI.sendNoteOn(79, volumeKnob, 1);
    Serial.print(" Imagi-");
    delay(750);
    usbMIDI.sendNoteOff(72, 0, 1);
    usbMIDI.sendNoteOff(76, 0, 1);
    usbMIDI.sendNoteOff(79, 0, 1);
    delay(250);

    // F major chord
    usbMIDI.sendNoteOn(77, volumeKnob, 1);
    usbMIDI.sendNoteOn(81, volumeKnob, 1);
    usbMIDI.sendNoteOn(84, volumeKnob, 1);
    Serial.print("nation,");
    delay(750);
    usbMIDI.sendNoteOff(77, 0, 1);
    usbMIDI.sendNoteOff(81, 0, 1);
    usbMIDI.sendNoteOff(84, 0, 1);
    delay(250);
    
    // G major chord
    usbMIDI.sendNoteOn(67, volumeKnob, 1);
    usbMIDI.sendNoteOn(71, volumeKnob, 1);
    usbMIDI.sendNoteOn(74, volumeKnob, 1);
    Serial.print(" life is your creation!");
    delay(1000);
    usbMIDI.sendNoteOff(67, 0, 1);
    usbMIDI.sendNoteOff(71, 0, 1);
    usbMIDI.sendNoteOff(74, 0, 1);
    digitalWrite(ledPin1, LOW);
    delay(500);
  }
}
void shakeItOff() {
  if (digitalRead(songTwoButton) == HIGH) {
    volumeKnob = analogRead(A18);
    // A minor chord
    usbMIDI.sendNoteOn(69, volumeKnob, 2);
    usbMIDI.sendNoteOn(72, volumeKnob, 2);
    usbMIDI.sendNoteOn(76, volumeKnob, 2);
    digitalWrite(ledPin2, HIGH);
    Serial.print("The players gonna ");
    delay(750);
    usbMIDI.sendNoteOff(69, 0, 2);
    usbMIDI.sendNoteOff(72, 0, 2);
    usbMIDI.sendNoteOff(76, 0, 2);
    delay(100);
    
    usbMIDI.sendNoteOn(69, volumeKnob, 2);
    usbMIDI.sendNoteOn(72, volumeKnob, 2);
    usbMIDI.sendNoteOn(76, volumeKnob, 2);
    Serial.print("play, play, ");
    delay(750);
    usbMIDI.sendNoteOff(69, 0, 2);
    usbMIDI.sendNoteOff(72, 0, 2);
    usbMIDI.sendNoteOff(76, 0, 2);
    delay(100);

    usbMIDI.sendNoteOn(69, volumeKnob, 2);
    usbMIDI.sendNoteOn(72, volumeKnob, 2);
    usbMIDI.sendNoteOn(76, volumeKnob, 2);
    Serial.print("play, play, ");
    delay(750);
    usbMIDI.sendNoteOff(69, 0, 2);
    usbMIDI.sendNoteOff(72, 0, 2);
    usbMIDI.sendNoteOff(76, 0, 2);
    delay(100);

    usbMIDI.sendNoteOn(69, volumeKnob, 2);
    usbMIDI.sendNoteOn(72, volumeKnob, 2);
    usbMIDI.sendNoteOn(76, volumeKnob, 2);
    Serial.print("playyy! :) ");
    delay(750);
    usbMIDI.sendNoteOff(69, 0, 2);
    usbMIDI.sendNoteOff(72, 0, 2);
    usbMIDI.sendNoteOff(76, 0, 2);
    delay(100);
    
    // C chord
    usbMIDI.sendNoteOn(60, volumeKnob, 2);
    usbMIDI.sendNoteOn(64, volumeKnob, 2);
    usbMIDI.sendNoteOn(67, volumeKnob, 2);
    Serial.print("The haters gonna ");
    delay(750);
    usbMIDI.sendNoteOff(60, 0, 2);
    usbMIDI.sendNoteOff(64, 0, 2);
    usbMIDI.sendNoteOff(67, 0, 2);
    delay(100);

    usbMIDI.sendNoteOn(60, volumeKnob, 2);
    usbMIDI.sendNoteOn(64, volumeKnob, 2);
    usbMIDI.sendNoteOn(67, volumeKnob, 2);
    Serial.print("hate, hate, ");
    delay(750);
    usbMIDI.sendNoteOff(60, 0, 2);
    usbMIDI.sendNoteOff(64, 0, 2);
    usbMIDI.sendNoteOff(67, 0, 2);
    delay(100);

    usbMIDI.sendNoteOn(60, volumeKnob, 2);
    usbMIDI.sendNoteOn(64, volumeKnob, 2);
    usbMIDI.sendNoteOn(67, volumeKnob, 2);
    Serial.print("hate, hate, ");
    delay(750);
    usbMIDI.sendNoteOff(60, 0, 2);
    usbMIDI.sendNoteOff(64, 0, 2);
    usbMIDI.sendNoteOff(67, 0, 2);
    delay(100);

    usbMIDI.sendNoteOn(60, volumeKnob, 2);
    usbMIDI.sendNoteOn(64, volumeKnob, 2);
    usbMIDI.sendNoteOn(67, volumeKnob, 2);
    Serial.print("hatee! :/ ");
    delay(750);
    usbMIDI.sendNoteOff(60, 0, 2);
    usbMIDI.sendNoteOff(64, 0, 2);
    usbMIDI.sendNoteOff(67, 0, 2);
    delay(100);

    // G chord
    usbMIDI.sendNoteOn(67, volumeKnob, 2);
    usbMIDI.sendNoteOn(71, volumeKnob, 2);
    usbMIDI.sendNoteOn(74, volumeKnob, 2);
    Serial.print("I'm just gonna ");
    delay(750);
    usbMIDI.sendNoteOff(67, 0, 2);
    usbMIDI.sendNoteOff(71, 0, 2);
    usbMIDI.sendNoteOff(74, 0, 2);
    delay(100);
    
    usbMIDI.sendNoteOn(67, volumeKnob, 2);
    usbMIDI.sendNoteOn(71, volumeKnob, 2);
    usbMIDI.sendNoteOn(74, volumeKnob, 2);
    Serial.print("shake, shake, ");
    delay(750);
    usbMIDI.sendNoteOff(67, 0, 2);
    usbMIDI.sendNoteOff(71, 0, 2);
    usbMIDI.sendNoteOff(74, 0, 2);
    delay(100);

    usbMIDI.sendNoteOn(67, volumeKnob, 2);
    usbMIDI.sendNoteOn(71, volumeKnob, 2);
    usbMIDI.sendNoteOn(74, volumeKnob, 2);
    Serial.print("shake, shake, ");
    delay(750);
    usbMIDI.sendNoteOff(67, 0, 2);
    usbMIDI.sendNoteOff(71, 0, 2);
    usbMIDI.sendNoteOff(74, 0, 2);
    delay(100);

    usbMIDI.sendNoteOn(67, volumeKnob, 2);
    usbMIDI.sendNoteOn(71, volumeKnob, 2);
    usbMIDI.sendNoteOn(74, volumeKnob, 2);
    Serial.print("shakee! ");
    delay(750);
    usbMIDI.sendNoteOff(67, 0, 2);
    usbMIDI.sendNoteOff(71, 0, 2);
    usbMIDI.sendNoteOff(74, 0, 2);
    delay(100);

    usbMIDI.sendNoteOn(67, volumeKnob, 2);
    usbMIDI.sendNoteOn(71, volumeKnob, 2);
    usbMIDI.sendNoteOn(74, volumeKnob, 2);
    Serial.print("I shake it off ");
    delay(750);
    usbMIDI.sendNoteOff(67, 0, 2);
    usbMIDI.sendNoteOff(71, 0, 2);
    usbMIDI.sendNoteOff(74, 0, 2);
    delay(100);

    usbMIDI.sendNoteOn(67, volumeKnob, 2);
    usbMIDI.sendNoteOn(71, volumeKnob, 2);
    usbMIDI.sendNoteOn(74, volumeKnob, 2);
    Serial.print("I shake it off ");
    delay(750);
    usbMIDI.sendNoteOff(67, 0, 2);
    usbMIDI.sendNoteOff(71, 0, 2);
    usbMIDI.sendNoteOff(74, 0, 2);
    delay(100);

    usbMIDI.sendNoteOn(67, volumeKnob, 2);
    usbMIDI.sendNoteOn(71, volumeKnob, 2);
    usbMIDI.sendNoteOn(74, volumeKnob, 2);
    Serial.print("off, off! ");
    delay(750);
    usbMIDI.sendNoteOff(67, 0, 2);
    usbMIDI.sendNoteOff(71, 0, 2);
    usbMIDI.sendNoteOff(74, 0, 2);
    delay(100);

    usbMIDI.sendNoteOn(67, volumeKnob, 2);
    usbMIDI.sendNoteOn(71, volumeKnob, 2);
    usbMIDI.sendNoteOn(74, volumeKnob, 2);
    Serial.print("I shake it off ");
    delay(750);
    usbMIDI.sendNoteOff(67, 0, 2);
    usbMIDI.sendNoteOff(71, 0, 2);
    usbMIDI.sendNoteOff(74, 0, 2);
    digitalWrite(ledPin2, LOW);
    delay(100);
  }
}
void soulSister() {
  if (digitalRead(songThreeButton) == HIGH) {
    volumeKnob = analogRead(A18);
    // A major chord
    usbMIDI.sendNoteOn(69, volumeKnob, 3);
    usbMIDI.sendNoteOn(73, volumeKnob, 3);
    usbMIDI.sendNoteOn(76, volumeKnob, 3);
    Serial.print("Hey, soul ");
    digitalWrite(ledPin3, HIGH);
    delay(1250);
    usbMIDI.sendNoteOff(69, 0, 3);
    usbMIDI.sendNoteOff(73, 0, 3);
    usbMIDI.sendNoteOff(76, 0, 3);
    delay(250);
    
    // B major chord
    usbMIDI.sendNoteOn(71, volumeKnob, 3);
    usbMIDI.sendNoteOn(75, volumeKnob, 3);
    usbMIDI.sendNoteOn(78, volumeKnob, 3);
    Serial.print("sister! I'm  ");
    delay(1250);
    usbMIDI.sendNoteOff(71, 0, 3);
    usbMIDI.sendNoteOff(75, 0, 3);
    usbMIDI.sendNoteOff(78, 0, 3);
    delay(250);
    
    // E major chord
    usbMIDI.sendNoteOn(64, volumeKnob, 3);
    usbMIDI.sendNoteOn(68, volumeKnob, 3);
    usbMIDI.sendNoteOn(71, volumeKnob, 3);
    Serial.print("that 'Mister ");
    delay(1250);
    usbMIDI.sendNoteOff(64, 0, 3);
    usbMIDI.sendNoteOff(68, 0, 3);
    usbMIDI.sendNoteOff(71, 0, 3);
    delay(250);

    // B major chord
    usbMIDI.sendNoteOn(71, volumeKnob, 3);
    usbMIDI.sendNoteOn(75, volumeKnob, 3);
    usbMIDI.sendNoteOn(78, volumeKnob, 3);
    Serial.print(",Mister', on the ");
    delay(1250);
    usbMIDI.sendNoteOff(71, 0, 3);
    usbMIDI.sendNoteOff(75, 0, 3);
    usbMIDI.sendNoteOff(78, 0, 3);
    delay(250);

    // A major chord
    usbMIDI.sendNoteOn(69, volumeKnob, 3);
    usbMIDI.sendNoteOn(73, volumeKnob, 3);
    usbMIDI.sendNoteOn(76, volumeKnob, 3);
    Serial.print("radio, ");
    delay(1250);
    usbMIDI.sendNoteOff(69, 0, 3);
    usbMIDI.sendNoteOff(73, 0, 3);
    usbMIDI.sendNoteOff(76, 0, 3);
    delay(250);
    
    // B major chord
    usbMIDI.sendNoteOn(71, volumeKnob, 3);
    usbMIDI.sendNoteOn(75, volumeKnob, 3);
    usbMIDI.sendNoteOn(78, volumeKnob, 3);
    Serial.print("the stereo. The ");
    delay(1250);
    usbMIDI.sendNoteOff(71, 0, 3);
    usbMIDI.sendNoteOff(75, 0, 3);
    usbMIDI.sendNoteOff(78, 0, 3);
    delay(250);
    
    // E major chord
    usbMIDI.sendNoteOn(64, volumeKnob, 3);
    usbMIDI.sendNoteOn(68, volumeKnob, 3);
    usbMIDI.sendNoteOn(71, volumeKnob, 3);
    Serial.print("way you move ain't fair");
    delay(1250);
    usbMIDI.sendNoteOff(64, 0, 3);
    usbMIDI.sendNoteOff(68, 0, 3);
    usbMIDI.sendNoteOff(71, 0, 3);
    delay(250);

    // B major chord
    usbMIDI.sendNoteOn(71, volumeKnob, 3);
    usbMIDI.sendNoteOn(75, volumeKnob, 3);
    usbMIDI.sendNoteOn(78, volumeKnob, 3);
    Serial.print(" you know. ");
    delay(1250);
    usbMIDI.sendNoteOff(71, 0, 3);
    usbMIDI.sendNoteOff(75, 0, 3);
    usbMIDI.sendNoteOff(78, 0, 3);
    delay(250);

    // A major chord
    usbMIDI.sendNoteOn(69, volumeKnob, 3);
    usbMIDI.sendNoteOn(73, volumeKnob, 3);
    usbMIDI.sendNoteOn(76, volumeKnob, 3);
    Serial.print("Hey, Soul ");
    delay(1250);
    usbMIDI.sendNoteOff(69, 0, 3);
    usbMIDI.sendNoteOff(73, 0, 3);
    usbMIDI.sendNoteOff(76, 0, 3);
    delay(250);
    
    // B major chord
    usbMIDI.sendNoteOn(71, volumeKnob, 3);
    usbMIDI.sendNoteOn(75, volumeKnob, 3);
    usbMIDI.sendNoteOn(78, volumeKnob, 3);
    Serial.print("Sister! I ");
    delay(1250);
    usbMIDI.sendNoteOff(71, 0, 3);
    usbMIDI.sendNoteOff(75, 0, 3);
    usbMIDI.sendNoteOff(78, 0, 3);
    delay(250);
    
    // E major chord
    usbMIDI.sendNoteOn(64, volumeKnob, 3);
    usbMIDI.sendNoteOn(68, volumeKnob, 3);
    usbMIDI.sendNoteOn(71, volumeKnob, 3);
    Serial.print("Don't want to miss ");
    delay(1250);
    usbMIDI.sendNoteOff(64, 0, 3);
    usbMIDI.sendNoteOff(68, 0, 3);
    usbMIDI.sendNoteOff(71, 0, 3);
    delay(250);

    // B major chord
    usbMIDI.sendNoteOn(71, volumeKnob, 3);
    usbMIDI.sendNoteOn(75, volumeKnob, 3);
    usbMIDI.sendNoteOn(78, volumeKnob, 3);
    Serial.print("a single ");
    delay(1250);
    usbMIDI.sendNoteOff(71, 0, 3);
    usbMIDI.sendNoteOff(75, 0, 3);
    usbMIDI.sendNoteOff(78, 0, 3);
    delay(250);

    // A major chord
    usbMIDI.sendNoteOn(69, volumeKnob, 3);
    usbMIDI.sendNoteOn(73, volumeKnob, 3);
    usbMIDI.sendNoteOn(76, volumeKnob, 3);
    Serial.print("thing you do- ");
    delay(2000);
    usbMIDI.sendNoteOff(69, 0, 3);
    usbMIDI.sendNoteOff(73, 0, 3);
    usbMIDI.sendNoteOff(76, 0, 3);
    delay(500);
    
    // B major chord
    usbMIDI.sendNoteOn(71, volumeKnob, 3);
    usbMIDI.sendNoteOn(75, volumeKnob, 3);
    usbMIDI.sendNoteOn(78, volumeKnob, 3);
    Serial.print("ooooh! To- :) ");
    delay(2000);
    usbMIDI.sendNoteOff(71, 0, 3);
    usbMIDI.sendNoteOff(75, 0, 3);
    usbMIDI.sendNoteOff(78, 0, 3);
    delay(750);

    // E major chord
    usbMIDI.sendNoteOn(64, volumeKnob, 3);
    usbMIDI.sendNoteOn(68, volumeKnob, 3);
    usbMIDI.sendNoteOn(71, volumeKnob, 3);
    Serial.print("night! ;) ");
    delay(1250);
    usbMIDI.sendNoteOff(64, 0, 3);
    usbMIDI.sendNoteOff(68, 0, 3);
    usbMIDI.sendNoteOff(71, 0, 3);
    digitalWrite(ledPin3, LOW);
    delay(250);
  }
}
void californiaGurls(){
  if (digitalRead(songFourButton) == HIGH){
    volumeKnob = analogRead(A18);
    // Am Chord
    usbMIDI.sendNoteOn(69, volumeKnob, 2);
    usbMIDI.sendNoteOn(72, volumeKnob, 2);
    usbMIDI.sendNoteOn(76, volumeKnob, 2);
    digitalWrite(ledPin4, HIGH);
    Serial.print("Cali-");
    delay(500);
    usbMIDI.sendNoteOff(69, 0, 2);
    usbMIDI.sendNoteOff(72, 0, 2);
    usbMIDI.sendNoteOff(76, 0, 2);
    delay(200);
  
    // Bb chord
    usbMIDI.sendNoteOn(70, volumeKnob, 2);
    usbMIDI.sendNoteOn(74, volumeKnob, 2);
    usbMIDI.sendNoteOn(77, volumeKnob, 2);
    Serial.print("fornia ");
    delay(500);
    usbMIDI.sendNoteOff(70, 0, 2);
    usbMIDI.sendNoteOff(74, 0, 2);
    usbMIDI.sendNoteOff(77, 0, 2);
    delay(650);
  
    // C Major
    usbMIDI.sendNoteOn(72, volumeKnob, 2);
    usbMIDI.sendNoteOn(76, volumeKnob, 2);
    usbMIDI.sendNoteOn(79, volumeKnob, 2);
    Serial.print("girls, we're un- ");
    delay(500);
    usbMIDI.sendNoteOff(72, 0, 2);
    usbMIDI.sendNoteOff(76, 0, 2);
    usbMIDI.sendNoteOff(79, 0, 2);
    delay(200);
  
    // D minor chord
    usbMIDI.sendNoteOn(74, volumeKnob, 2);
    usbMIDI.sendNoteOn(77, volumeKnob, 2);
    usbMIDI.sendNoteOn(81, volumeKnob, 2);
    Serial.print("forgettable. ");
    delay(500);
    usbMIDI.sendNoteOff(74, 0, 2);
    usbMIDI.sendNoteOff(77, 0, 2);
    usbMIDI.sendNoteOff(81, 0, 2);
    delay(650);

    // Am Chord
    usbMIDI.sendNoteOn(69, volumeKnob, 2);
    usbMIDI.sendNoteOn(72, volumeKnob, 2);
    usbMIDI.sendNoteOn(76, volumeKnob, 2);
    Serial.print("Daisy-dukes, ");
    delay(500);
    usbMIDI.sendNoteOff(69, 0, 2);
    usbMIDI.sendNoteOff(72, 0, 2);
    usbMIDI.sendNoteOff(76, 0, 2);
    delay(200);
  
    // Bb chord
    usbMIDI.sendNoteOn(70, volumeKnob, 2);
    usbMIDI.sendNoteOn(74, volumeKnob, 2);
    usbMIDI.sendNoteOn(77, volumeKnob, 2);
    Serial.print("bikinis ");
    delay(500);
    usbMIDI.sendNoteOff(70, 0, 2);
    usbMIDI.sendNoteOff(74, 0, 2);
    usbMIDI.sendNoteOff(77, 0, 2);
    delay(650);
  
    // C Major
    usbMIDI.sendNoteOn(72, volumeKnob, 2);
    usbMIDI.sendNoteOn(76, volumeKnob, 2);
    usbMIDI.sendNoteOn(79, volumeKnob, 2);
    Serial.print("on ");
    delay(500);
    usbMIDI.sendNoteOff(72, 0, 2);
    usbMIDI.sendNoteOff(76, 0, 2);
    usbMIDI.sendNoteOff(79, 0, 2);
    delay(200);
  
    // D minor chord
    usbMIDI.sendNoteOn(74, volumeKnob, 2);
    usbMIDI.sendNoteOn(77, volumeKnob, 2);
    usbMIDI.sendNoteOn(81, volumeKnob, 2);
    Serial.print("top! ");
    delay(500);
    usbMIDI.sendNoteOff(74, 0, 2);
    usbMIDI.sendNoteOff(77, 0, 2);
    usbMIDI.sendNoteOff(81, 0, 2);
    delay(650);
  
    // Am Chord
    usbMIDI.sendNoteOn(69, volumeKnob, 2);
    usbMIDI.sendNoteOn(72, volumeKnob, 2);
    usbMIDI.sendNoteOn(76, volumeKnob, 2);
    Serial.print("Sun-kissed skin ");
    delay(500);
    usbMIDI.sendNoteOff(69, 0, 2);
    usbMIDI.sendNoteOff(72, 0, 2);
    usbMIDI.sendNoteOff(76, 0, 2);
    delay(200);
  
    // Bb chord
    usbMIDI.sendNoteOn(70, volumeKnob, 2);
    usbMIDI.sendNoteOn(74, volumeKnob, 2);
    usbMIDI.sendNoteOn(77, volumeKnob, 2);
    Serial.print("so hot ");
    delay(500);
    usbMIDI.sendNoteOff(70, 0, 2);
    usbMIDI.sendNoteOff(74, 0, 2);
    usbMIDI.sendNoteOff(77, 0, 2);
    delay(650);
  
    // C Major
    usbMIDI.sendNoteOn(72, volumeKnob, 2);
    usbMIDI.sendNoteOn(76, volumeKnob, 2);
    usbMIDI.sendNoteOn(79, volumeKnob, 2);
    Serial.print("it'll melt ");
    delay(500);
    usbMIDI.sendNoteOff(72, 0, 2);
    usbMIDI.sendNoteOff(76, 0, 2);
    usbMIDI.sendNoteOff(79, 0, 2);
    delay(200);
  
    // D minor chord
    usbMIDI.sendNoteOn(74, volumeKnob, 2);
    usbMIDI.sendNoteOn(77, volumeKnob, 2);
    usbMIDI.sendNoteOn(81, volumeKnob, 2);
    Serial.print("your popsicle! :) ");
    delay(500);
    usbMIDI.sendNoteOff(74, 0, 2);
    usbMIDI.sendNoteOff(77, 0, 2);
    usbMIDI.sendNoteOff(81, 0, 2);
    delay(650);

    // Am Chord
    usbMIDI.sendNoteOn(69, volumeKnob, 2);
    usbMIDI.sendNoteOn(72, volumeKnob, 2);
    usbMIDI.sendNoteOn(76, volumeKnob, 2);
    Serial.print("Oh, oh ");
    delay(500);
    usbMIDI.sendNoteOff(69, 0, 2);
    usbMIDI.sendNoteOff(72, 0, 2);
    usbMIDI.sendNoteOff(76, 0, 2);
    delay(200);
    
    // Bb chord
    usbMIDI.sendNoteOn(70, volumeKnob, 2);
    usbMIDI.sendNoteOn(74, volumeKnob, 2);
    usbMIDI.sendNoteOn(77, volumeKnob, 2);
    Serial.print("Oh, oh ");
    delay(500);
    usbMIDI.sendNoteOff(70, 0, 2);
    usbMIDI.sendNoteOff(74, 0, 2);
    usbMIDI.sendNoteOff(77, 0, 2);
    delay(650);
    
    // C Major
    usbMIDI.sendNoteOn(72, volumeKnob, 2);
    usbMIDI.sendNoteOn(76, volumeKnob, 2);
    usbMIDI.sendNoteOn(79, volumeKnob, 2);
    Serial.print("Oh, oh ");
    delay(500);
    usbMIDI.sendNoteOff(72, 0, 2);
    usbMIDI.sendNoteOff(76, 0, 2);
    usbMIDI.sendNoteOff(79, 0, 2);
    delay(200);
    
    // D minor chord
    usbMIDI.sendNoteOn(74, volumeKnob, 2);
    usbMIDI.sendNoteOn(77, volumeKnob, 2);
    usbMIDI.sendNoteOn(81, volumeKnob, 2);
    Serial.print("Oh, oh ");
    delay(500);
    usbMIDI.sendNoteOff(74, 0, 2);
    usbMIDI.sendNoteOff(77, 0, 2);
    usbMIDI.sendNoteOff(81, 0, 2);
    digitalWrite(ledPin4, LOW);
    delay(650);
  }
}
void loop() {
  if (digitalRead(songOneButton) == HIGH) {
    barbieGirl();
  }
  if (digitalRead(songTwoButton) == HIGH) {
    shakeItOff();
  }
  if (digitalRead(songThreeButton) == HIGH) {
    soulSister();
  }
  if (digitalRead(songFourButton) == HIGH) {
    californiaGurls();
  }
}
