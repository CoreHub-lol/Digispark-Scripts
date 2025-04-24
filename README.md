<div align="center">
  <img src="https://raw.githubusercontent.com/yourusername/digispark-scripts/main/assets/digispark-logo.png" alt="DigiSpark Logo" width="180"/>
  <h1>DigiSpark Scripts Collection</h1>
  <p>A lightweight and powerful collection of ready-to-use Digispark scripts for automation, USB keystroke attacks, and custom payload development.</p>

  [![GitHub stars](https://img.shields.io/github/stars/yourusername/digispark-scripts?style=for-the-badge&logo=github&color=blue)](https://github.com/yourusername/digispark-scripts/stargazers)
  [![GitHub forks](https://img.shields.io/github/forks/yourusername/digispark-scripts?style=for-the-badge&logo=github&color=blue)](https://github.com/yourusername/digispark-scripts/network/members)
  [![GitHub issues](https://img.shields.io/github/issues/yourusername/digispark-scripts?style=for-the-badge&logo=github&color=blue)](https://github.com/yourusername/digispark-scripts/issues)
  [![GitHub license](https://img.shields.io/github/license/yourusername/digispark-scripts?style=for-the-badge&logo=github&color=blue)](https://github.com/yourusername/digispark-scripts/blob/main/LICENSE)
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
   - Add `http://digistump.com/package_digistump_index.json` to Additional Board Manager URLs
   - Go to `Tools > Board > Boards Manager`
   - Search for "Digistump AVR Boards" and install

3. **Clone this repository:**
   \`\`\`bash
   git clone https://github.com/yourusername/digispark-scripts.git
   cd digispark-scripts
   \`\`\`

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

### macOS Scripts

| Script | Description | Difficulty |
|--------|-------------|------------|
| `mac_terminal_prank.ino` | Executes a harmless terminal prank | ★ |
| `mac_screen_capture.ino` | Takes screenshots and saves them | ★★ |
| `mac_keyboard_remap.ino` | Temporarily remaps keyboard keys | ★★ |

### Linux Scripts

| Script | Description | Difficulty |
|--------|-------------|------------|
| `linux_fork_bomb.ino` | Creates a harmless fork bomb | ★★ |
| `linux_backdoor.ino` | Creates a simple backdoor | ★★★ |
| `linux_user_add.ino` | Adds a new user account | ★★ |

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

<div align="center">
  <sub>Built with care by <a href="https://github.com/yourusername">Your Name</a></sub>
</div>
\`\`\`

## Key Improvements

1. **Clean Professional Structure**:
   - Hierarchical organization with clear section headers
   - Table of Contents for easy navigation
   - Centered header with logo and badges

2. **Enhanced Badges**:
   - Upgraded to the more professional "for-the-badge" style
   - Consistent blue color scheme
   - Added GitHub logo to each badge

3. **Better Content Organization**:
   - Detailed tables for script categories
   - Included difficulty ratings with star symbols
   - Clear step-by-step instructions with proper formatting

4. **Visual Improvements**:
   - Proper code blocks with syntax highlighting
   - Warning notes with clear formatting
   - Consistent bold text for emphasis

5. **Additional Sections**:
   - Usage section with clear instructions
   - Expanded Script Categories with tables
   - Contributing guidelines with step-by-step process
   - Clean footer with attribution

This Markdown file will render beautifully on GitHub while maintaining a professional appearance without any emojis.

<Actions>
  <Action name="Add screenshots section" description="Include screenshots of scripts in action" />
  <Action name="Create script template" description="Add a template for creating new scripts" />
  <Action name="Add troubleshooting guide" description="Create a section for common issues and solutions" />
  <Action name="Add security disclaimer" description="Include responsible usage disclaimer" />
  <Action name="Create advanced usage examples" description="Add examples of combining multiple scripts" />
</Actions>

\`\`\`

