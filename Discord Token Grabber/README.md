

# DiscoGrab

A DigiSpark-based tool for educational purposes that demonstrates how Discord tokens can be captured using a combination of Python and DigiSpark scripts.

[![GitHub stars](https://img.shields.io/github/stars/corehub-lol/DiscoGrab?style=for-the-badge&logo=github&color=blue)](https://github.com/corehub-lol/DiscoGrab/stargazers)
[![GitHub forks](https://img.shields.io/github/forks/corehub-lol/DiscoGrab?style=for-the-badge&logo=github&color=blue)](https://github.com/corehub-lol/DiscoGrab/network/members)
[![GitHub issues](https://img.shields.io/github/issues/corehub-lol/DiscoGrab?style=for-the-badge&logo=github&color=blue)](https://github.com/corehub-lol/DiscoGrab/issues)
[![GitHub license](https://img.shields.io/github/license/corehub-lol/DiscoGrab?style=for-the-badge&logo=github&color=blue)](https://github.com/corehub-lol/DiscoGrab/blob/main/LICENSE)

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
- [Contributing](#contributing)
- [License](#license)

## Overview

DiscoGrab is a demonstration tool that shows how Discord tokens can be captured using a DigiSpark board. The project consists of two main components:

1. **Python Script** – Captures Discord tokens and sends them to a Discord webhook  
2. **DigiSpark Script** – Deploys the Python executable on the target system

This project is based on the [corehub-lol/DiscoGrab](https://github.com/corehub-lol/DiscoGrab) repository.

## Disclaimer

**IMPORTANT**: This tool is provided for **EDUCATIONAL PURPOSES ONLY**.

- Using this tool to access accounts without explicit permission is illegal and unethical  
- The author assumes no liability for misuse of this software  
- Use responsibly and only on systems you own or have explicit permission to test

## Requirements

- [Python 3.6+](https://www.python.org/downloads/)
- [PyInstaller](https://pyinstaller.org/en/stable/)
- [Arduino IDE](https://www.arduino.cc/en/software)
- [DigiSpark ATtiny85 board](https://www.digistump.com/products/1)
- [DigiSpark Arduino Library](https://github.com/digistump/DigistumpArduino)
- GitHub account (for hosting the executable)

## Setup Instructions

### Python Script Setup

1. Clone the DiscoGrab repository:

   ```bash
   git clone https://github.com/corehub-lol/DiscoGrab.git
   cd DiscoGrab
   ```

2. Open `main.py` in your preferred text editor

3. Locate the webhook URL line and replace it with your Discord webhook:

   ```python
   WEBHOOK_URL = "YOUR_DISCORD_WEBHOOK_URL_HERE"
   ```

4. Save the file

### Creating the Executable

1. Install PyInstaller if you haven't already:

   ```bash
   pip install pyinstaller
   ```

2. Compile the Python script into an executable:

   ```bash
   python -m PyInstaller --onefile main.py
   ```

3. The executable will be created in the `dist` folder

4. Upload the executable to your GitHub repository:
   - Create a new release in your GitHub repository
   - Upload the executable as an asset
   - Copy the download URL for the executable

### DigiSpark Script Setup

1. Install the Arduino IDE and set it up for DigiSpark:
   - Go to `File > Preferences`
   - Add this URL to *Additional Board Manager URLs*:  
     ```
     http://digistump.com/package_digistump_index.json
     ```
   - Go to `Tools > Board > Boards Manager`
   - Search for **Digistump AVR Boards** and install it

2. Open the provided `main.ino` file in Arduino IDE

3. Replace `YOUR DOWNLOAD LINK` in line 18 with the GitHub download link to your executable

4. Save the modified `main.ino` file

## Usage

1. Connect your DigiSpark to your computer

2. Open the `main.ino` file in Arduino IDE

3. Select:  
   `Tools > Board > Digispark (Default - 16.5MHz)`

4. Click the **Upload** button

5. When prompted, plug in your DigiSpark board

6. Once uploaded, the DigiSpark will:
   - Open PowerShell when plugged into a target computer
   - Download the executable from your GitHub repository
   - Run the executable to capture Discord tokens
   - Send the tokens to your Discord webhook
   - Delete the executable to remove traces

## How It Works

1. **DigiSpark Script** (`main.ino`):
   - Opens PowerShell using keyboard shortcuts
   - Executes a PowerShell command to download and run the executable
   - Removes the executable after execution

2. **Python Script** (`main.py`):
   - Searches for Discord token storage locations
   - Extracts tokens if found
   - Sends the tokens to the specified Discord webhook
   - Collects additional system information

## Contributing

Contributions for educational improvements are welcome:

1. Fork the repository  
2. Create your feature branch:  
   ```bash
   git checkout -b feature/improvement
   ```
3. Commit your changes:  
   ```bash
   git commit -m "Add educational improvement"
   ```
4. Push to the branch:  
   ```bash
   git push origin feature/improvement
   ```
5. Open a Pull Request

## License

This project is licensed under the MIT License – see the [LICENSE](LICENSE) file for details.

---

<div align="center">
  <sub>Created for educational purposes only. Use responsibly.</sub>
</div>

