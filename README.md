# Awesome-OS Noctalia (`awesome-os/noctalia`)

> **A sovereign, GPU-rendered native Wayland desktop shell (C++23 + direct Wayland + OpenGL ES — zero Qt, zero GTK) hard-forked from MIT Noctalia for Awesome-OS (`awesome-os/desktop`, `awesome-os/t2linux-baseline`), `awesome-os/explorer`, and Unified Holo `v11` CAS (`awesome-os/holo-v11`).**

## Why Awesome-OS Noctalia?

Built directly on Wayland and OpenGL ES with zero Qt or GTK dependencies, Noctalia provides the entire desktop shell layer in one cohesive C++23 process:

- **Unified Shell Layer:** Multi-monitor bars, dock, launcher, control center, notification toasts/history, wallpaper picker, OSD overlays, lock screen, session panel, clipboard history, system tray, and desktop widgets.
- **Compositor-Ready:** Works with Hyprland, Niri, Sway, Umbriel, Mango, Labwc, and `ext-workspace-v1` Wayland compositors — pairs natively with [`awesome-os/explorer`](https://github.com/awesome-os/explorer), [`awesome-os/desktop`](https://github.com/awesome-os/desktop), and [`awesome-os/t2linux-baseline`](https://github.com/awesome-os/t2linux-baseline).
- **Holo `v11` CAS & Sectium Host Device Bridge (`src/b8g_ghost_bridge.h`):** `B8G_ABI_MAGIC_V3` (`0x33564742`) hooks aligning with `HOLO_CAS_DIR` / `~/.b8g/cas/v11` and the Sectium Host Device (`/tmp/sectium-dev.sock`) integration.

## Build & Test (Linux / Awesome-OS Desktop / Arch Container)

```bash
just build          # Debug build (build-debug/noctalia + noctalia-pam-helper)
just test debug     # Run C++23 test suite
just build release  # LTO release build
```

## Releases

GitHub Actions builds, tests, and publishes `noctalia-linux-x64.tar.zst` + `SHA256SUMS.txt` on every `v*` tag (and manual `workflow_dispatch`).

## License & Attribution

MIT License — see [`LICENSE`](./LICENSE). Hard-forked from `noctalia-dev/noctalia` (MIT).

## Quick Install & Run (Holo `v11` CAS — Windows / Linux / macOS)

```sh
# Install / hydrate from Holo v11 CAS via holo-pm (0-byte hardlink into ./bin/)
holo-pm install repository://github.com/awesome-os/noctalia@main

# Or project & run directly via holo-project (0-byte hardlink)
holo-project "project://cpp/noctalia?from=repository://github.com/awesome-os/noctalia@main"
```

## Ecosystem Alignment (5 Canonical Monorepos)

- [`awesome-os/awesome-os`](https://github.com/awesome-os/awesome-os) · [`awesome-os/chromium-baseline`](https://github.com/awesome-os/chromium-baseline) · [`awesome-os/agent-platform`](https://github.com/awesome-os/agent-platform) · [`awesome-os/t2linux-baseline`](https://github.com/awesome-os/t2linux-baseline) · [`awesome-os/devtools`](https://github.com/awesome-os/devtools)
- [`awesome-os/holo-v11`](https://github.com/awesome-os/holo-v11) (Global `v11` Registry) · [`awesome-os/maintenance-workflows`](https://github.com/awesome-os/maintenance-workflows) (`holo-ci@v1`)
