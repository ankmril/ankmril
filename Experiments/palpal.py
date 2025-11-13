import time
import sys

def print_lyrics():
  lyrics = [
    "Mai ab kyu hosh mai ata ni",
    "Sukoon yeh dil kyu pata ni",
    "Kyu todu khud se jo the wadein",
    "Ke ab yeh ishq nibhana ni",
    "Mai modu tumse jo yeh chehra",
    "Dubara nazar milana ni",
    "Yeh duniya jaane mera dard",
    "Tujhe yeh nazar kyu ata ni?"
  ]

  delays = [
    0.3, 0.3, 0.4, 0.3, 0.3, 0.8,
  ]

  print(" Pal Pal : \n")
  time.sleep(1.2)

  for i, line in enumerate(lyrics):
    for char in line:
      sys.stdout.write(char)
      sys.stdout.flush()
      time.sleep(0.06)
      print()
      if i < len(delays):
        time.sleep(delays[i])
      else:
        time.sleep(0.8)

print_lyrics()