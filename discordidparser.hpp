#include <iostream>
#include <fmt/color.h>
#include <fmt/format.h>

std::string preuidstr = fmt::format(fg(fmt::color::green), "discord userid:");
std::string prewidstr = fmt::format(fg(fmt::color::green), "worker id:");
std::string prepidstr = fmt::format(fg(fmt::color::green), "process id:");
std::string preincstr = fmt::format(fg(fmt::color::green), "job number:");
std::string predatestr = fmt::format(fg(fmt::color::green), "account created on:");
