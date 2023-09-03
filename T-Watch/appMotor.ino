void appMotor() {

  ttgo->motor_begin();
  int i = 3;
  do {
    ttgo->motor->onec();
    delay(500);
  } while (i--);  

  int16_t x, y;
  while (!ttgo->getTouch(x, y)) {} // Wait for touch
  while (ttgo->getTouch(x, y)) {}  // Wait for release to exit
  // Clear screen before returning 
  ttgo->tft->fillScreen(TFT_BLACK);
}