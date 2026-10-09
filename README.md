# 🟢🔴⚫ GRB To-Do List

A to-do list with a twist: every task has a **timer**, and your performance is scored with colored points — **Green**, **Red**, and **Black** — plus an overall **accuracy percentage**.

> ⚠️ **Status:** Work in progress. Features and documentation may change.

---

## 💡 Idea

A regular to-do list only tells you what you have to do. **GRB To-Do List** adds pressure and feedback:

1. Add the tasks you want to complete.
2. Give each task a time limit (e.g. 3 hours, 5 hours).
3. Finish the task before time runs out and earn a point. Miss the deadline and you lose it.
4. Track how disciplined you are with the accuracy score.

The name **GRB** comes from the three point types: **G**reen, **R**ed, **B**lack.

---

## 🎯 Scoring System

| Point | Meaning | When you get it |
|-------|---------|-----------------|
| 🟢 **Green Point** | Task completed | You finish the task before its timer ends |
| 🔴 **Red Point** | Task failed | The timer ends and the task is not completed |
| ⚫ **Black Point** | Total failure | The timer ends and **no task at all** was completed |

### Accuracy Percentage

```
Accuracy (%) = (Completed Tasks / Total Tasks Added) × 100
```

**Example:** you added 10 tasks and completed 7 → accuracy = **70%**

---

## ✨ Features

- ➕ Add tasks to your list
- ⏱️ Set a custom countdown timer for each task (hours)
- ✅ Mark tasks as completed
- 🟢🔴⚫ Automatic Green / Red / Black point calculation
- 📊 Accuracy percentage based on completed vs. total tasks

---

## 🔄 How It Works

```
Add Task + Set Timer
        │
        ▼
   Timer starts
        │
   ┌────┴─────────────┐
   │                  │
Task done          Time ends
before time        without finishing
   │                  │
   ▼                  ▼
🟢 Green Point    Were ANY tasks completed?
                      │
                 ┌────┴────┐
                Yes        No
                 │          │
                 ▼          ▼
            🔴 Red Point  ⚫ Black Point
```

---

## 🛠️ Tech Stack

<!-- TODO: Update this section with what you actually use -->

- **Language:** _e.g. Python / C++ / Java / JavaScript_
- **Interface:** _e.g. CLI / GUI / Web_
- **Storage:** _e.g. JSON file / SQLite / in-memory_

---

## 🚀 Getting Started

<!-- TODO: Adjust the commands below to match your project -->

### Prerequisites

- _List required tools and versions here_

### Installation

```bash
# Clone the repository
git clone https://github.com/AmrSabry97/Task_DS.git

# Move into the project folder
cd Task_DS
```

### Run

```bash
# Replace with the actual command, e.g.:
# python main.py
```

---

## 📖 Usage Example

```
> Add task: "Finish Data Structures assignment"  | Timer: 5h
> Add task: "Revise Chapter 3"                   | Timer: 3h

[3h later] Revise Chapter 3          → ✅ Completed   → 🟢 +1 Green
[5h later] Finish DS assignment      → ❌ Not done    → 🔴 +1 Red

Accuracy: 1 / 2 = 50%
```

---

## 🗂️ Project Structure

<!-- TODO: Replace with your real folder structure -->

```
Task_DS/
├── README.md
└── ...
```

---

## 🗺️ Roadmap

- [x] Core idea and scoring rules
- [ ] Task creation with timers
- [ ] Green / Red / Black point calculation
- [ ] Accuracy percentage
- [ ] Persistent storage
- [ ] Statistics / history view
- [ ] Notifications when time is almost up
- [ ] Improved UI

---

## 🤝 Contributing

This is a personal project in progress, but suggestions are welcome. Open an issue or submit a pull request.

---

## 👤 Author

**Amr Sabry**
GitHub: [@AmrSabry97](https://github.com/AmrSabry97)

---

## 📄 License

_Add a license here (e.g. MIT) once you decide._
