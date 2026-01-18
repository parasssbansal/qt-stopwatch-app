**⏱️ Qt Stopwatch Application**

A simple Stopwatch desktop application built using Qt Widgets and C++, demonstrating event-driven programming with signals, slots, and QTimer.

🚀 Features

▶️ Start stopwatch

⏸ Pause stopwatch

🔄 Reset time

⏱ Displays time in MM:SS:MS format

🎨 Clean UI with Qt Style Sheets (QSS)


🛠️ Tech Stack:

Language: C++

Framework: Qt (Qt Widgets

Build System: CMake

IDE: Qt Creator


🧠 Concepts Used:

Qt Signals & Slots

QTimer for real-time updates

UI state management

Qt Style Sheets (QSS)

Event-driven programming


📂 Project Structure:
qt-stopwatch-app/

├── CMakeLists.txt

├── main.cpp

├── mainwindow.h

├── mainwindow.cpp

├── mainwindow.ui

└── README.md


▶️ How It Works:

A QTimer triggers a timeout signal every 10 ms

The elapsed time is calculated in milliseconds

Time is converted into minutes, seconds, and milliseconds

The UI updates dynamically using slots


📸 Preview:

<img width="802" height="633" alt="image" src="https://github.com/user-attachments/assets/511aef28-0702-4ed6-a0e3-e4c5ac7c6fb6" />


📦 How to Run:

Open the project in Qt Creator

Configure using CMake

Build the project

Run the application


📈 Future Improvements:

⏺ Lap time feature

🌗 Dark / Light theme toggle


🙌 Learning Outcome:

This project helped me understand how UI and backend logic connect in Qt applications and strengthened my understanding of timers and event handling.

👤 Author:
Paras

Learning Qt & C++ by building real projects 🚀
