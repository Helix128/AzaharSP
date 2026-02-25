// Edited for AzaharSP | Helix128
// Copyright Citra Emulator Project / Azahar Emulator Project
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#pragma once

#include <string>

namespace Common {

constexpr char help_string[] =
    "Usage: {} [options] <file path>\n"
    "-d, --dump-video [path]     Dump video recording of emulator playback to the given file path\n"
    "-f, --fullscreen            Start in fullscreen mode\n"
    "-g, --gdbport [port]        Enable gdb stub on the given port\n"
    "-h, --help                  Display this help and exit\n"
    "-i, --install [path]        Install a CIA file at the given path\n"
    "-p, --movie-play [path]     Play a TAS movie located at the given path\n"
    "-r, --movie-record [path]   Record a TAS movie to the given file path\n"
    "-a, --movie-record-author [author]   Set the author for the recorded TAS movie (to be used "
    "alongside --movie-record)\n"
    "-u, --user-dir [path]       Set a custom user data directory for this instance\n"
    "                            (enables multiple simultaneous instances with isolated data)\n"
    "-H, --host-room             Create and host a private room on startup\n"
    "    --room-name [name]      Room name (default: \"AzaharSP Room\")\n"
    "    --room-port [port]      Port to bind/connect to (default: 24872)\n"
    "    --room-password [pass]  Password for the room (default: none)\n"
    "    --room-max-players [n]  Maximum players, min 2 (default: 4; host only)\n"
    "    --room-nickname [nick]  Nickname used when joining (defaults to UI setting)\n"
    "-J, --join-room [ip]        Join a private room at the given IP on startup\n"
    "                            (use --room-port / --room-password / --room-nickname alongside)\n"
#ifdef ENABLE_ROOM
    "    --room                  Utilize dedicated multiplayer room functionality (equivalent to "
    "the old citra-room executable)\n"
#endif
    "-v, --version               Output version information and exit\n"
    "-w, --windowed              Start in windowed mode";

} // namespace Common
