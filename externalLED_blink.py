from machine import Pin
from time import sleep
redLED=Pin(15, Pin.OUT)
while True:
    redLED.toggle()
    sleep(0.5)