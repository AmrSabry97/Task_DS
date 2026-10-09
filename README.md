# 🟢🔴⚫ GRB To-Do List

A to-do list written in **C** with a twist: you set **one timer for your whole batch of tasks**, and your performance is scored with colored points — **Green**, **Red**, and **Black** — plus an overall **accuracy percentage**. Your points accumulate day after day.

> ⚠️ **Status:** Work in progress. Features and documentation may change.

---

## 💡 Idea

A regular to-do list only tells you what you have to do. **GRB To-Do List** adds pressure and feedback:

1. Add the tasks you want to complete (a session/day batch).
2. Set **one timer** for the whole batch (e.g. 3 hours, 5 hours).
3. Complete as many tasks as you can before the timer ends.
4. When time is up, each task is scored: finished tasks earn Green Points, unfinished ones earn Red Points.
5. Your points are added to your **previous total**, so progress builds up over time.

The name **GRB** comes from the three point types: **G**reen, **R**ed, **B**lack.

---

## 🎯 Scoring System

| Point | Meaning | When you get it |
|-------|---------|-----------------|
| 🟢 **Green Point** | Task completed | A task is finished before the timer ends |
| 🔴 **Red Point** | Task failed | The timer ends and the task is not finished |
| ⚫ **Black Point** | Total failure | The timer ends and **none** of the tasks were completed |

**Example:** you add 5 tasks and set a 5-hour timer.

| Result | Points earned |
|--------|---------------|
| 3 tasks finished before time ends | 🟢 ×3, 🔴 ×2 |
| 0 tasks finished | ⚫ ×1 |

### Accuracy Percentage

Accuracy is calculated from your **all-time totals**, not just the current day:

```
Accuracy (%) = (Total Completed Tasks / Total Tasks Added) × 100
```

---

## 📅 Persistent Progress

- Every time you add new tasks and the timer ends, the new points are **added on top of the old ones**.
- Every time you open the program, it shows your current totals:

```
🟢 Green Points : 42
🔴 Red Points   : 11
⚫ Black Points : 1
📊 Accuracy     : 79.2%
```

Your data is saved between runs so nothing is lost when you close the program.

---

## ✨ Features

- ➕ Add multiple tasks to a session
- ⏱️ One countdown timer for the whole batch of tasks
- ✅ Mark tasks as completed while the timer runs
- 🟢🔴⚫ Automatic Green / Red / Black point calculation
- 💾 Points saved and accumulated across days
- 📊 Overall accuracy percentage shown every time you open the program

---

## 🔄 How It Works

```
Open program → show saved totals (G / R / B + accuracy)
        │
        ▼
Add tasks + set ONE timer for all of them
        │
        ▼
   Timer starts
        │
        ▼
   Timer ends
        │
        ▼
 Were any tasks completed?
   ┌────┴─────────────────────────┐
  Yes                             No
   │                              │
   ▼                              ▼
🟢 +1 per completed task      ⚫ +1 Black Point
🔴 +1 per unfinished task
        │
        ▼
Add to old totals → save → update accuracy
```

---

## 🛠️ Tech Stack

- **Language:** C
- **Storage:** <!-- TODO: e.g. binary file / text file --> _local file to keep points between runs_
- **Interface:** Command line (CLI)

---

## 🚀 Getting Started

### Prerequisites

- A C compiler such as **GCC**

### Installation

```bash
git clone https://github.com/AmrSabry97/Task_DS.git
cd Task_DS
```

### Build & Run

```bash
# TODO: replace main.c with your actual file name(s)
gcc main.c -o grb_todo
./grb_todo
```

On Windows:

```bash
gcc main.c -o grb_todo.exe
grb_todo.exe
```

---

## 📖 Usage Example

```
=== GRB To-Do List ===
🟢 12   🔴 4   ⚫ 0   |  Accuracy: 75.0%

Enter number of tasks: 5
Task 1: Finish DS assignment
Task 2: Revise Chapter 3
Task 3: Solve 10 problems
Task 4: Read an article
Task 5: Workout
Set timer (hours): 5

... timer running ...

Tasks completed: 3 / 5

Session result: 🟢 +3   🔴 +2   ⚫ +0
New totals:     🟢 15   🔴 6   ⚫ 0   |  Accuracy: 71.4%
```

---

## 🗂️ Project Structure

<!-- TODO: Replace with your real files -->

```
Task_DS/
├── main.c
├── README.md
└── ...
```

---

## 🗺️ Roadmap

- [x] Core idea and scoring rules
- [ ] Add tasks with a single shared timer
- [ ] Green / Red / Black point calculation
- [ ] Save and load points between runs
- [ ] Accuracy percentage
- [ ] History / daily statistics
- [ ] Improved interface

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