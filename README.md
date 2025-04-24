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
- [Digispark ATtiny85 board](https://de.aliexpress.com/item/2040316211.html?src=google&pdp_npi=4%40dis!EUR!1.84!1.75!!!!!%40!58307777832!ppc!!!&src=google&albch=shopping&acnt=272-267-0231&isdl=y&slnk=&plac=&mtctp=&albbt=Google_7_shopping&aff_platform=google&aff_short_key=UneMJZVf&gclsrc=aw.ds&&albagn=888888&&ds_e_adid=&ds_e_matchtype=&ds_e_device=c&ds_e_network=x&ds_e_product_group_id=&ds_e_product_id=de2040316211&ds_e_product_merchant_id=107407105&ds_e_product_country=DE&ds_e_product_language=de&ds_e_product_channel=online&ds_e_product_store_id=&ds_url_v=2&albcp=20542169669&albag=&isSmbAutoCall=false&needSmbHouyi=false&gad_source=1&gbraid=0AAAAAoukdWMP8Ej88kFYFSe-XVBW1T4BG&gclid=CjwKCAjwwqfABhBcEiwAZJjC3vJPi5uFPeUgyYL6DskiwiOisCpTIQfTVG5GWgdOon4290xa4Vv7ThoCAsoQAvD_BwE)
- [Digistump Drivers](https://github.com/digistump/DigistumpArduino/releases/download/1.6.7/Digistump.Drivers.zip)

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

| Script | Description |
|--------|-------------|
| [DiscordGrabber](https://github.com/CoreHub-lol/Digispark-Scripts/tree/main/Discord%20Token%20Grabber) | Discord token and information grabber | 


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



