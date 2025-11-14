import time
import sys

def print_lyrics():
  lyrics = [
    "Dale a tu cuerpo alegria Macarena",
    "Que tu cuerpo es pa' darle alegria y cosa buena",
    "Dale a tu cuerpo alegria, Macarena",
    "Hey Macarena (Aight, uh)"
  ]

  delays = [
    0.3, 0.3,
  ]

  print(" Ayy Macarena : \n")
  time.sleep(1.1)

  for i, line in enumerate(lyrics):
    for char in line:
      sys.stdout.write(char)
      sys.stdout.flush()
      time.sleep(0.05)
      print()
      if i < len(delays):
        time.sleep(delays[i])
      else:
        time.sleep(0.75)
  
print_lyrics()