# macOS Development Projects

A collection of C++ projects developed for macOS, using both JUCE and Qt frameworks. These projects focus on native application development, cross-platform support, and a variety of audio, graphical, and utility applications.

## Table of Contents
1. [Basic Music Player (JUCE)](#basic-music-player-juce)
2. [File Explorer (Qt)](#file-explorer-qt)
3. [DJ Mixer (JUCE)](#dj-mixer-juce)
4. [OpenGL Visualizer (Qt)](#opengl-visualizer-qt)
5. [MIDI Controller App (JUCE)](#midi-controller-app-juce)
6. [Notepad App (Qt)](#notepad-app-qt)

---

## 1. Basic Music Player (JUCE)
**Description**: A simple music player application that allows users to load, play, and pause audio files, with volume control.

**Features**:
- Load audio files (MP3, WAV, etc.).
- Play, pause, and stop functionality.
- Adjustable volume control.

**Skills Used**:
- JUCE audio engine.
- Basic UI design using JUCE components.

[Project Folder](./BasicMusicPlayer-JUCE/)

---

## 2. File Explorer (Qt)
**Description**: A native macOS file explorer that displays files and directories, allows file opening with associated apps, and shows file details like size and date.

**Features**:
- Browse files and directories.
- Open files in their default applications.
- Display file metadata.

**Skills Used**:
- Qt’s file handling and UI framework.
- Cross-platform application design.

[Project Folder](./FileExplorer-Qt/)

---

## 3. DJ Mixer (JUCE)
**Description**: A two-track DJ mixer with a crossfader and independent volume controls, allowing users to mix tracks in real-time.

**Features**:
- Load and play two audio tracks simultaneously.
- Independent volume controls for each track.
- Crossfader for mixing between tracks.

**Skills Used**:
- Multi-track audio processing with JUCE.
- Real-time audio mixing and UI development.

[Project Folder](./DJMixer-JUCE/)

---

## 4. OpenGL Visualizer (Qt)
**Description**: A real-time audio visualizer built using OpenGL, displaying waveforms or frequency spectrums based on audio input.

**Features**:
- Visualize audio waveforms or frequency spectra.
- Real-time rendering using OpenGL.
- Integration with Qt for the user interface.

**Skills Used**:
- OpenGL rendering.
- Real-time audio data handling.
- Combining Qt with OpenGL.

[Project Folder](./OpenGLVisualizer-Qt/)

---

## 5. MIDI Controller App (JUCE)
**Description**: A simple MIDI controller that can detect MIDI input devices, send MIDI signals, and map controls to DJ hardware functions.

**Features**:
- Detect connected MIDI devices.
- Send and receive MIDI signals.
- Map MIDI controls to specific functions (e.g., play, stop).

**Skills Used**:
- Handling MIDI signals with JUCE.
- Real-time hardware communication.
- Building a UI for MIDI control.

[Project Folder](./MIDIController-JUCE/)

---

## 6. Notepad App (Qt)
**Description**: A basic text editor that allows users to open, edit, and save text files, with basic formatting options like bold and italic.

**Features**:
- Open and edit text files.
- Save changes to disk.
- Simple text formatting (bold, italic).

**Skills Used**:
- Qt’s text handling and UI components.
- File I/O with C++.

[Project Folder](./NotepadApp-Qt/)

---

## How to Build and Run

1. Clone the repository:
    ```bash
    git clone https://github.com/your-username/macOS-dev-projects.git
    ```

2. Navigate into the desired project folder, for example:
    ```bash
    cd macOS-dev-projects/BasicMusicPlayer-JUCE
    ```

3. Follow the instructions in the project-specific README for building and running the project on your local machine.
