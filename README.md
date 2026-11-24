# Awesome-OS Noctalia (`awesome-os/noctalia`)

> **A sovereign, GPU-rendered native Wayland desktop shell (C++23 + direct Wayland + OpenGL ES — zero Qt, zero GTK) hard-forked from MIT Noctalia for Awesome-OS, `t2desktop`, `awesome-os/explorer`, and `b8g-ghost` CAS.**

## Why Awesome-OS Noctalia?

Built directly on Wayland and OpenGL ES with zero Qt or GTK dependencies, Noctalia provides the entire desktop shell layer in one cohesive C++23 process:

- **Unified Shell Layer:** Multi-monitor bars, dock, launcher, control center, notification toasts/history, wallpaper picker, OSD overlays, lock screen, session panel, clipboard history, system tray, and desktop widgets.
- **Compositor-Ready:** Works with Hyprland, Niri, Sway, Umbriel, Mango, Labwc, and `ext-workspace-v1` Wayland compositors — pairs natively with [`awesome-os/explorer`](https://github.com/awesome-os/explorer) and [`awesome-os/t2desktop`](https://github.com/awesome-os/t2desktop).
- **Awesome-OS / `b8g-ghost` Bridge (`src/b8g_ghost_bridge.h`):** `B8G_ABI_MAGIC_V3` (`0x33564742`) hooks for `B8G_GHOST_CACHE_DIR` (`~/.b8g/cas`) and Sectium Host Device (`/tmp/sectium-dev.sock`) integration.

## Build & Test (Linux / T2Desktop / Arch Container)

```bash
just build          # Debug build (build-debug/noctalia + noctalia-pam-helper)
just test debug     # Run C++23 test suite
just build release  # LTO release build
```

## Releases

GitHub Actions builds, tests, and publishes `noctalia-linux-x64.tar.zst` + `SHA256SUMS.txt` on every `v*` tag (and manual `workflow_dispatch`).

## License & Attribution

MIT License — see [`LICENSE`](./LICENSE). Hard-forked from `noctalia-dev/noctalia` (MIT).

## Quick Install & Run (Windows / Linux / macOS)

```sh
# Download latest release assets (all platforms)
gh release download -R awesome-os/noctalia --dir ./noctalia-release

# Or clone source directly (all platforms)
git clone https://github.com/awesome-os/noctalia.git && cd noctalia
```
