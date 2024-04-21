import RPi.GPIO as GPIO
import time
vert=31;
rouge=35;
orange=33;
tempo=5;
GPIO.setmode(GPIO.BOARD)
GPIO.setup(rouge,GPIO.OUT)#config le GPIO comme sortie
GPIO.setup(orange,GPIO.OUT)
GPIO.setup(vert,GPIO.OUT)
def normal():
    try:
        while True:
            GPIO.output(rouge,GPIO.HIGH) 
            GPIO.output(orange,GPIO.LOW)
            GPIO.output(vert,GPIO.LOW)
            print('lampe-Rouge is On')
            time.sleep(tempo)
            GPIO.output(rouge,GPIO.LOW) 
            GPIO.output(orange,GPIO.LOW)
            GPIO.output(vert,GPIO.HIGH)
            print('lampe-vert is On')
            time.sleep(tempo)
            GPIO.output(rouge,GPIO.LOW) 
            GPIO.output(orange,GPIO.HIGH)
            GPIO.output(vert,GPIO.LOW)
            print('lampe-orange is On')
            time.sleep(1)
    except:
        GPIO.cleanup()
    return
def normal():
    try:
        while True:
            GPIO.output(rouge,GPIO.LOW) 
            GPIO.output(orange,GPIO.HIGH)
            GPIO.output(vert,GPIO.LOW)
            print('lampe-orange is On')
    except:
        GPIO.cleanup()
    return
normal()

