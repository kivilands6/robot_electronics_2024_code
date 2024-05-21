### "Lētā robota" Robotnest Pamācība
## Savienošanas shēma:
# Arduino ar Bluetooth
|Arduino nano|Bluetooth hc05|
|---|---|
|D10|TX|
|D11|RX|
|5V|VCC|
|GND|GND|

# Arduino ar tranzistoru (bc547) (plakanā daļa pagreizta pret sevi) (VIN tiek savienots ar motora vienu kāju un otra motora kāja tiek savienota ar tranzistora kreiso kāju)
|Arduino nano|tranzistors|
|---|---|
|D12|Vidējā kāja|
|GND|Labā kāja|
|VIN (caur motoru)|Kreisā kāja|

# Arduino ar Motor draiveri L9110
|Arduino nano|Motora draiveris|
|---|---|
|A0|B-1A|
|A1|B-1B|
|GND|GND|
|VIN|VCC|
|A2|A-1A|
|A3|A-1B|

# Braukšanas Motori ar Motor draiveri L9110
|Braukšanas motori|Motora draiveris|
|---|---|
|Kreisā motora Sarkanais vads|OB (B motora izvade)|
|Kreisā motora Melnais vads|OA (B motora izvade)|
|Labā motora Sarkanais vads|OB (A motora izvade)|
|Labā motora Melnais vads|OA (A motora izvade)|
