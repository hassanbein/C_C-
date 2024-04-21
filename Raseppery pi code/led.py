from gpiozero import LED,Button
from signal import pause 
led_rouge=LED(23)
bouton=Boutton(17)
bouton.when_pressed=led_rouge.on
bouton.when_released=led_rouge.off
pause()