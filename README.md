# Keylogger Project with C++

This is a full-coverage keylogger written in C++ for Windows. It logs standard keyboard and mouse presses and writes them to a file called `log.txt`. Each key press is recorded along with a human-readable label, making it very practical to interpret the log.

## How it Works

The keylogger runs in the background, hidden from view, capturing keystrokes while the user operates the computer. It uses the Windows API functions to detect when keys are pressed. When a key is pressed, the corresponding character or label is written to the `log.txt` file.

## Usage

1. **Compile**: Compile the C++ program using a compiler like `g++` or an IDE like Visual Studio.
   
2. **Run**: Run the compiled executable. The keylogger will start capturing key presses in the background.

3. **Retrieve Logs**: The logs will be saved in a file named `log.txt` in the same directory as the executable.

## Key Code Labels

The keylogger uses the following labels for different types of keys:

### Modifier Keys

- `[SHIFT]`: Shift key
- `[CTRL]`: Ctrl key
- `[ALT]`: Alt key (also known as Menu key)
- `[LWIN]`: Left windows key
- `[RWIN]`: Right windows key
- `[CAPS]`: Caps lock key
- `[NUMLOCK]`: Num lock key
- `[SCROLL]`: Scroll lock pressed

### Function Keys

- `[F1]` through `[F24]`: F1 - F24 keys

### Arrow Keys

- `[LEFT ARROW]`: Left arrow key
- `[RIGHT ARROW]`: Right arrow key
- `[UP ARROW]`: Up arrow key
- `[DOWN ARROW]`: Down arrow key

### Other Common Keys

- `[BACKSPACE]`: Backspace
- `[TAB]`: Tab
- `[ENTER]`: Enter key
- `[ESCAPE]`: Escape key
- `[SPACE]`: Space bar
- `[DELETE]`: Delete key
- `[INSERT]`: Insert key
- `[HOME]`: Home key
- `[END]`: End key
- `[PAGE UP]`: Page Up
- `[PAGE DOWN]`: Page Down

### Mouse Virtual Key Codes

- `[LEFT CLICK]`: Left mouse button
- `[RIGHT CLICK]`: Right mouse button
- `[MIDDLE MOUSE BUTTON]`: Middle mouse button

### Additional Constants

- `[KEY DOWN]`: Key down
- `[KEY UP]`: Key up
- `[SYSTEM KEY DOWN]`: System key down
- `[SYSTEM KEY UP]`: System key up
- `[CHARACTER]`: Character
- `;`, `=`, `,`, `-`, `.`, `/`, `\`, `[`, `]`, `'`: Special characters and symbols

## Disclaimer

This keylogger is provided for educational and practice purposes of scripting with C++ only. Be aware of the legal implications of using such software. Respect the privacy and rights of others, and ensure that you have appropriate authorization before using this software. Feel free to test on your machine when you are the sole user. Never run this program on your device or another device when the user is unaware and/or doesn't condone it.

## Prevention

Keyloggers can be a serious threat to your privacy and security. Here are some steps you can take to help prevent becoming a victim of keyloggers:

1. **Use Reliable Antivirus Software**: Install reputable antivirus and anti-malware software on your system. These programs often include keylogger detection and removal tools.

2. **Keep Software Updated**: Regularly update your operating system and all software applications. Updates often include security patches that can protect against keyloggers.

3. **Be Cautious with Email Attachments and Links**: Avoid clicking on suspicious links or downloading attachments from unknown or untrusted sources. These can often be vehicles for keyloggers and other malware.

4. **Use Virtual Keyboards for Sensitive Information**: When entering sensitive information like passwords or credit card numbers, consider using the virtual keyboard provided by your operating system. This can help bypass hardware keyloggers.

5. **Be Mindful of Public Computers**: If using a public computer, such as in a library or internet cafe, be cautious about entering sensitive information. Public computers can be more susceptible to keyloggers.

6. **Enable Two-Factor Authentication**: Whenever possible, enable two-factor authentication (2FA) on your accounts. Even if a keylogger captures your password, it will be useless without the second authentication factor.

7. **Regularly Check for Unusual Activity**: Keep an eye on your bank statements, credit reports, and online accounts for any unusual or unauthorized activity. Keyloggers aim to steal sensitive information, so catching unauthorized access early is crucial.

8. **Use a Privacy Screen**: If you work in public spaces, consider using a privacy screen for your laptop or mobile device. This prevents people from seeing your screen and potentially capturing keystrokes.

9. **Educate Yourself and Others**: Awareness is key. Educate yourself and others about the risks of keyloggers and how to recognize suspicious behavior or files.

Remember, these steps can significantly reduce the risk of falling victim to keyloggers, but no method is foolproof. Stay vigilant and regularly review your security practices to stay protected.

## Credits

Thanks for checking out my keylogger! This project is developed by Anton Vulman courtesy of inspiration from Shubhangi Singh and Grant Collins.
