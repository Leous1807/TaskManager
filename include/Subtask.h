#pragma once

#include <string>

class Subtask {
private:
    std::string title;
    std::string description;
    bool isCompleted;
    bool isRequired;

public:
    Subtask(const std::string& title, const std::string& description, bool isRequired);

    Subtask(const std::string& title, const std::string& description, bool isRequired, bool isCompleted);

    void markComplete();
    void markIncomplete();

    bool getIsRequired() const;
    bool getIsComplete() const;
    const std::string& getTitle() const;
    const std::string& getDescription() const;
};
