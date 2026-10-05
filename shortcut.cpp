#include <string>

std::string shortcut_for_linux() {
    return "flameshot gui";
}

int main() {
    return shortcut_for_linux().empty() ? 1 : 0;
}
