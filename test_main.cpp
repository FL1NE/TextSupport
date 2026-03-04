#include "text_support.h"

int main() {
    // Named functions
    textSupport::debugMessage("debugMessage OK");
    textSupport::infoMessage("infoMessage OK");
    textSupport::warningMessage("warningMessage OK");
    textSupport::errorMessage("errorMessage OK");
    textSupport::fatalMessage("fatalMessage OK");

    // Direct log() with LogLevel enum
    textSupport::log(textSupport::LogLevel::Debug,   "log(Debug) OK");
    textSupport::log(textSupport::LogLevel::Info,    "log(Info) OK");
    textSupport::log(textSupport::LogLevel::Warning, "log(Warning) OK");
    textSupport::log(textSupport::LogLevel::Error,   "log(Error) OK");
    textSupport::log(textSupport::LogLevel::Fatal,   "log(Fatal) OK");

    return 0;
}
