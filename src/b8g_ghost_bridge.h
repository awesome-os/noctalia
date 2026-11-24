#ifndef AWESOME_OS_NOCTALIA_B8G_GHOST_BRIDGE_H
#define AWESOME_OS_NOCTALIA_B8G_GHOST_BRIDGE_H

/**
 * @file src/b8g_ghost_bridge.h
 * @description Awesome-OS Noctalia Desktop Shell <-> b8g-ghost CAS & Sectium Host Device bridge.
 * Aligns with B8G_ABI_MAGIC_V3 (0x33564742) and B8G_GHOST_CACHE_DIR.
 */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#define B8G_ABI_MAGIC_V3 0x33564742u
#define AWESOME_OS_NOCTALIA_ABI_VERSION 1u

typedef struct {
  unsigned int abi_magic;
  unsigned int abi_version;
  const char *cas_dir;
  const char *sectium_device_endpoint;
} b8g_noctalia_context_t;

static inline int b8g_noctalia_resolve_cas_dir(char *out, size_t cap) {
  const char *override_dir = getenv("B8G_GHOST_CACHE_DIR");
  if (override_dir && override_dir[0] != '\0') {
    snprintf(out, cap, "%s", override_dir);
    return 0;
  }
  const char *home = getenv("HOME");
  if (!home || home[0] == '\0') return -1;
  snprintf(out, cap, "%s/.b8g/cas", home);
  return 0;
}

static inline const char *b8g_noctalia_default_sectium_pipe(void) {
  const char *ep = getenv("SECTIUM_DEVICE_PIPE");
  if (ep && ep[0] != '\0') return ep;
  return "/tmp/sectium-dev.sock";
}

#endif /* AWESOME_OS_NOCTALIA_B8G_GHOST_BRIDGE_H */
