<div align="center">
  <img src="https://wolles-elektronikkiste.de/wp-content/uploads/2019/06/Beitragsbild.jpg" alt="DigiSpark Logo" width="180"/>
  <h1>DigiSpark Scripts Collection</h1>
  <p>A lightweight and powerful collection of ready-to-use Digispark scripts for automation, USB keystroke attacks, and custom payload development.</p>

  [![GitHub stars](https://img.shields.io/github/stars/corehub-lol/digispark-scripts?style=for-the-badge&logo=github&color=blue)](https://github.com/yourusername/digispark-scripts/stargazers)
  [![GitHub forks](https://img.shields.io/github/forks/corehub-lol/digispark-scripts?style=for-the-badge&logo=github&color=blue)](https://github.com/yourusername/digispark-scripts/network/members)
  [![GitHub issues](https://img.shields.io/github/issues/corehub-lol/digispark-scripts?style=for-the-badge&logo=github&color=blue)](https://github.com/yourusername/digispark-scripts/issues)
  [![GitHub license](https://img.shields.io/github/license/corehub-lol/digispark-scripts?style=for-the-badge&logo=github&color=blue)](https://github.com/yourusername/digispark-scripts/blob/main/LICENSE)
  [![Maintenance](https://img.shields.io/maintenance/yes/2025?style=for-the-badge&logo=github&color=blue)](https://github.com/yourusername/digispark-scripts/commits/main)
</div>

## Features

- **Ready-to-Use Scripts** - Plug and play scripts for common automation tasks
- **Keystroke Attacks** - Pre-configured payloads for penetration testing
- **Cross-Platform** - Works on Windows, macOS, and Linux
- **Customizable** - Easy to modify for your specific needs
- **Well-Documented** - Clear instructions for each script
- **Lightweight** - Optimized for the limited resources of Digispark boards

## Table of Contents

- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Script Categories](#script-categories)
- [Contributing](#contributing)
- [License](#license)

## Installation

### Prerequisites

- [Arduino IDE](https://www.arduino.cc/en/software)
- [Digispark ATtiny85 board](http://digistump.com/products/1)
- [Digistump Drivers](http://digistump.com/wiki/digispark/tutorials/connecting)

### Setup

1. **Install the Arduino IDE**

2. **Add Digistump board to Arduino IDE:**
   - Go to `File > Preferences`
   - Add `https://raw.githubusercontent.com/digistump/arduino-boards-index/master/package_digistump_index.json` to Additional Board Manager URLs
   - Go to `Tools > Board > Boards Manager`
   - Search for "Digistump AVR Boards" and install

3. **Chose one of our scripts**
  

4. **Open a script in Arduino IDE:**
   - Browse to the script you want to use
   - Open the `.ino` file with Arduino IDE
   - Select `Tools > Board > Digispark (Default - 16.5MHz)`

## Usage

1. **Select a script** from one of the categories below
2. **Open the script** in Arduino IDE
3. **Verify/Compile** the script using the ✓ button
4. **Upload** the script using the → button
5. **When prompted**, plug in your Digispark board

> **Note:** Some scripts may need to be modified for your specific keyboard layout or system configuration.

## Script Categories

### Windows Scripts

| Script | Description | Difficulty |
|--------|-------------|------------|
| `win_rickroll.ino` | Opens a Rick Astley video in the browser | ★ |
| `win_reverse_shell.ino` | Creates a reverse shell connection | ★★★ |
| `win_wifi_grabber.ino` | Extracts and exfiltrates WiFi passwords | ★★ |


## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add some amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---



