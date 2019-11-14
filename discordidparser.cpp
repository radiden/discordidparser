#include <fmt/core.h>
#include <iostream>
#include <ctime>
#include "discordidparser.hpp"

std::string formattime(uint64_t timestamp) {
  time_t time = timestamp;
  struct tm *tm = localtime(&time);
  char timestring[32];
  std::strftime(timestring, sizeof(timestring), "%d / %m / %Y at %H:%M:%S", tm);
  return timestring;
}

int main(int argc, char **argv) {
  if(argc <= 1) {
    fmt::print("no argument given\n");
  }
  else {
    uint64_t timestamp = ((std::atoll(argv[1]) >> 22) + 1420070400000)/1000;
    uint8_t wid = (std::atoll(argv[1]) & 0x3E0000) >> 17;
    uint8_t pid = (std::atoll(argv[1]) & 0x1F000) >> 12;
    uint8_t inc = std::atoll(argv[1]) & 0xFFF;
    fmt::print("{} {}\n{} {}\n{} {}\n{} {}\n{} {}\n", preuidstr, argv[1], predatestr, formattime(timestamp), prewidstr, wid, prepidstr, pid, preincstr, inc);
  }
  return 0;
}
