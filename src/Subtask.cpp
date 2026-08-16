#include <../include/Subtask.h>

Subtask::Subtask(const std::string& title, const std::string& description, bool isRequired)
    : title(title), description(description), isRequired(isRequired), isCompleted(false) {}

Subtask::Subtask(const std::string& title, const std::string& description, bool isRequired, bool isCompleted)
    : title(title), description(description), isRequired(isRequired), isCompleted(isCompleted) {}

void Subtask::markComplete() { isCompleted = true; }
void Subtask::markIncomplete() { isCompleted = false; }

bool Subtask::getIsComplete() const { return isCompleted; }
bool Subtask::getIsRequired() const { return isRequired; }
const std::string& Subtask::getTitle() const { return title; }
const std::string& Subtask::getDescription() const { return description; }
