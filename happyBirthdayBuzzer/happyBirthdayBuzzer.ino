int melody[] = {
  392, 392, 440, 392, 523, 494,
  392, 392, 440, 392, 587, 523,
  392, 392, 784, 659, 523, 494, 440,
  698, 698, 659, 523, 587, 523
};

int noteDurations[] = {
  5.33, 16, 4, 4, 4, 2,
  5.33, 16, 4, 4, 4, 2,
  5.33, 16, 4, 4, 4, 4, 2,
  5.33, 16, 4, 4, 4, 2
};

void setup() {
  
}

void loop() {
  // no need to repeat the melody.
  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 25; thisNote++) {
    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(15, melody[thisNote], noteDuration);
    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(15);
  }
}
