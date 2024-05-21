# "Lētā robota" Robotnest Pamācība
## Nepieciešamās detaļas:
- Finiera pamatne (pieejams rasējums .dxf faila formātā)
- 2x Finiera starplikas (pieejams rasējums .dxf faila formātā)
- Ieroča motora Finiera turētājs (pieejams rasējums .dxf faila formātā)
- Finiera ierocis kurš stiprinās pie motora (pieejams rasējums .dxf faila formātā)
- M3 skrūves ar M3 muciņām
- DC motors priekš ieroča
- 2x small dc gear motori priekš riteņiem
- 2x small dc gear motor turētāji
- 2x riteņi un 2x riepas
Ja jums ir komplekts tad visas agustāk minētās komponentes jau ir sagatavotas un saliktas kā nepieciešams.
- Arduino nano
- HC-05 (bluetooth modelis)
- BC547 (tranzistors)
- L9110 Motora draiveris
- Breadboards vai jau gatava plate
- Nepieciešamie vadi


## Savienošanas shēma:
### Arduino ar Bluetooth
|Arduino nano|Bluetooth hc05|
|---|---|
|D10|TX|
|D11|RX|
|5V|VCC|
|GND|GND|

### Arduino ar tranzistoru (bc547) (plakanā daļa pagreizta pret sevi) (VIN tiek savienots ar motora vienu kāju un otra motora kāja tiek savienota ar tranzistora kreiso kāju)
|Arduino nano|tranzistors|
|---|---|
|D12|Vidējā kāja|
|GND|Labā kāja|
|VIN (caur motoru)|Kreisā kāja|

### Arduino ar Motor draiveri L9110
|Arduino nano|Motora draiveris|
|---|---|
|A0|B-1A|
|A1|B-1B|
|GND|GND|
|VIN|VCC|
|A2|A-1A|
|A3|A-1B|

### Braukšanas Motori ar Motor draiveri L9110
|Braukšanas motori|Motora draiveris|
|---|---|
|Kreisā motora Sarkanais vads|OB (B motora izvade)|
|Kreisā motora Melnais vads|OA (B motora izvade)|
|Labā motora Sarkanais vads|OB (A motora izvade)|
|Labā motora Melnais vads|OA (A motora izvade)|
