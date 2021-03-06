/* Generated by ./xlat/gen.sh from ./xlat/fsopen_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(FSOPEN_CLOEXEC) || (defined(HAVE_DECL_FSOPEN_CLOEXEC) && HAVE_DECL_FSOPEN_CLOEXEC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FSOPEN_CLOEXEC) == (1), "FSOPEN_CLOEXEC != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FSOPEN_CLOEXEC 1
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat fsopen_flags in mpers mode

# else

static const struct xlat_data fsopen_flags_xdata[] = {
 XLAT(FSOPEN_CLOEXEC),
};
static
const struct xlat fsopen_flags[1] = { {
 .data = fsopen_flags_xdata,
 .size = ARRAY_SIZE(fsopen_flags_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
