#ifndef VERSION_H
#define VERSION_H

#ifdef __cplusplus
extern "C" {
#endif

const char *subsurface_git_version(void);
const char *subsurface_canonical_version(void);

#ifdef SUBSURFACE_MOBILE
const char *subsurface_mobile_version(void);
#endif

#ifdef __cplusplus
}
#endif

#endif
