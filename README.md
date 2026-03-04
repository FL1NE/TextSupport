# TextSupport
Colored text & console log support for C++

![ScreenShot](https://github.com/FL1NE/TextSupport/blob/master/screenshot.png "ScreenShot")

## Requirements

- C++11 or later
- POSIX-compatible environment (Linux, macOS)

## Usage

### Include

```cpp
#include "text_support.h"
```

### Named log functions

```cpp
textSupport::debugMessage("something happened");
textSupport::infoMessage("server started");
textSupport::warningMessage("retrying connection");
textSupport::errorMessage("file not found");
textSupport::fatalMessage("unrecoverable error");
```

### Log with LogLevel enum

Use `log()` to select the level at call site:

```cpp
textSupport::log(textSupport::LogLevel::Debug,   "debug message");
textSupport::log(textSupport::LogLevel::Info,    "info message");
textSupport::log(textSupport::LogLevel::Warning, "warning message");
textSupport::log(textSupport::LogLevel::Error,   "error message");
textSupport::log(textSupport::LogLevel::Fatal,   "fatal message");
```

### Adding a new log level

Edit `LOG_TABLE` in `text_support.cpp` and add a corresponding entry to the `LogLevel` enum in `text_support.h`:

```cpp
// text_support.h
enum class LogLevel { Debug, Info, Warning, Error, Fatal, Verbose };  // add here

// text_support.cpp
static const LogEntry LOG_TABLE[] = {
    /* Debug   */ { "DBG",     TEXT_SUPPORT_BLUE,    &std::cout },
    /* Info    */ { "INFO",    TEXT_SUPPORT_CYAN,    &std::cout },
    /* Warning */ { "WARN",    TEXT_SUPPORT_YELLOW,  &std::cout },
    /* Error   */ { "ERR",     TEXT_SUPPORT_RED,     &std::cerr },
    /* Fatal   */ { "FATAL",   TEXT_SUPPORT_BOLDRED, &std::cerr },
    /* Verbose */ { "VERBOSE", TEXT_SUPPORT_WHITE,   &std::cout },  // add here
};
```

### Color macros

The following macros are available for direct use:

| Macro | Color |
|---|---|
| `TEXT_SUPPORT_RESET` | Reset |
| `TEXT_SUPPORT_BLACK` | Black |
| `TEXT_SUPPORT_RED` | Red |
| `TEXT_SUPPORT_GREEN` | Green |
| `TEXT_SUPPORT_YELLOW` | Yellow |
| `TEXT_SUPPORT_BLUE` | Blue |
| `TEXT_SUPPORT_MAGENTA` | Magenta |
| `TEXT_SUPPORT_CYAN` | Cyan |
| `TEXT_SUPPORT_WHITE` | White |
| `TEXT_SUPPORT_BOLD*` | Bold variants of the above |

## Build

```sh
g++ -std=c++11 your_program.cpp text_support.cpp -o your_program
```

## License

Copyright (c) 2017 FRONTL1NE All rights reserved
