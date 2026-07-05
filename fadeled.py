from machine import Pin
blue = Pin(15, Pin.OUT)
red = Pin(14, Pin.OUT)
yellow = Pin(13, Pin.OUT)
white = Pin(10, Pin.OUT)

def decimal_to_binary(decimal):
    binary =[]
    while decimal > 0:
        binary.append(decimal % 2)
        decimal = decimal // 2
        
    while len(binary) < 4:
        binary.append(0)

    white.value(binary[0])
    yellow.value(binary[1])
    red.value(binary[2])
    blue.value(binary[3])
    
dec = int(input("Enter a number (0-15): "))

while dec < 0 or dec > 15:
    dec = int(input("Enter a valid #: "))
    
decimal_to_binary(dec)
