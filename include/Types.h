#pragma once

#include <chrono>
#include <optional>

using TimePoint = std::chrono::system_clock::time_point;
using Duration = std::chrono::seconds;

enum class TaskType {
    Task,
    Event,
    Meeting
};

enum class TaskStatus {
    Active,
    Pending,
    Completed,
    Archived
};

enum class RepeatInterval {
    None,
    Daily,
    Weekly,
    Monthly,
    Yearly
};

struct RepetitionRule {
    RepeatInterval interval = RepeatInterval::None;
    std::optional<TimePoint> untilDate;
};
