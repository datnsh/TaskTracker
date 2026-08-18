# TaskTracker

A lightweight command-line task management application written in **C++**.

The project was built as a learning project based on roadmap.sh and is intended to be upgraded with Qt Framework 

> **Project status:** Work in progress. The main objectives of the roadmap.sh project is implemented including the core command-line structure and task creation/listing/deletion logic.
while task updates and JSON persistence are still being developed.
## Project Structure

```text
TaskTrackersrc/
|── CommandType.h       # Application command definitions
├── Controller.cpp
├── Controller.h        # Application flow and command dispatch
├── DataParser.cpp
├── DataParser.h        # Planned data-file handling
├── Helper.cpp
├── Helper.h             # General utility functions
├── InputParser.cpp
├── InputParser.h        # Command-line parsing
├── main.cpp             # Application entry point
├── ParsedCommand.h      # Parsed command data structure
├── Task.h               # Task model and enums
├── Task.json            # Task data file
├── TaskManager.cpp
├── TaskManager.h        # Task management
├── TaskParser.cpp
├── TaskParser.h         # Task property/value parsing
├── TaskTypes.h          # TaskValue type definition
├── User.cpp
├── User.h               # User model
├── User.json            # User data file
├── UserManager.cpp
└── UserManager.h        # Planned user management
```

## Example Usage

After building and launching the application, the program enters a command loop.

### Add a task

```text
Enter command:add Buy groceries
```

A new task is created with:

- An automatically generated ID
- The supplied description
- `TO_DO` status
- Creation timestamp
- Update timestamp

### List tasks

```text
Enter command:list
```

The application displays the tasks currently stored in memory.

### Remove a task

```text
Enter command:remove 1
```

The task with ID `1` is removed from the in-memory task collection.

### Update a task

The intended command format is:

```text
update <task_id> <property> <new_value>
```

For example:

```text
update 1 status done
```

The command parsing and property conversion infrastructure exists, but the actual update logic in `TaskManager::UpdateTask()` is still incomplete.

## Requirements

The project uses modern C++ features including:

- `std::filesystem`
- `std::chrono`
- `std::format`
- `std::variant`
- Structured bindings
- `enum class`

Therefore, a compiler supporting **C++20** is required.

The project also currently includes Qt's `QString`, so a Qt development environment is required unless those types are replaced with standard C++ strings.

## Building

The repository currently does not include a CMake or other build configuration.

A C++20-compatible compiler and the required Qt development libraries must therefore be configured manually in the current project setup.

For future development, adding a `CMakeLists.txt` would make the project easier to build consistently across environments.
