/* Generated by ./xlat/gen.sh from ./xlat/bpf_op_alu.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BPF_ADD) || (defined(HAVE_DECL_BPF_ADD) && HAVE_DECL_BPF_ADD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_ADD) == (0x00), "BPF_ADD != 0x00");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_ADD 0x00
#endif
#if defined(BPF_SUB) || (defined(HAVE_DECL_BPF_SUB) && HAVE_DECL_BPF_SUB)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_SUB) == (0x10), "BPF_SUB != 0x10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_SUB 0x10
#endif
#if defined(BPF_MUL) || (defined(HAVE_DECL_BPF_MUL) && HAVE_DECL_BPF_MUL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MUL) == (0x20), "BPF_MUL != 0x20");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MUL 0x20
#endif
#if defined(BPF_DIV) || (defined(HAVE_DECL_BPF_DIV) && HAVE_DECL_BPF_DIV)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_DIV) == (0x30), "BPF_DIV != 0x30");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_DIV 0x30
#endif
#if defined(BPF_OR) || (defined(HAVE_DECL_BPF_OR) && HAVE_DECL_BPF_OR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_OR) == (0x40), "BPF_OR != 0x40");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_OR 0x40
#endif
#if defined(BPF_AND) || (defined(HAVE_DECL_BPF_AND) && HAVE_DECL_BPF_AND)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_AND) == (0x50), "BPF_AND != 0x50");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_AND 0x50
#endif
#if defined(BPF_LSH) || (defined(HAVE_DECL_BPF_LSH) && HAVE_DECL_BPF_LSH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_LSH) == (0x60), "BPF_LSH != 0x60");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_LSH 0x60
#endif
#if defined(BPF_RSH) || (defined(HAVE_DECL_BPF_RSH) && HAVE_DECL_BPF_RSH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_RSH) == (0x70), "BPF_RSH != 0x70");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_RSH 0x70
#endif
#if defined(BPF_NEG) || (defined(HAVE_DECL_BPF_NEG) && HAVE_DECL_BPF_NEG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_NEG) == (0x80), "BPF_NEG != 0x80");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_NEG 0x80
#endif
#if defined(BPF_MOD) || (defined(HAVE_DECL_BPF_MOD) && HAVE_DECL_BPF_MOD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MOD) == (0x90), "BPF_MOD != 0x90");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MOD 0x90
#endif
#if defined(BPF_XOR) || (defined(HAVE_DECL_BPF_XOR) && HAVE_DECL_BPF_XOR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_XOR) == (0xa0), "BPF_XOR != 0xa0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_XOR 0xa0
#endif
#if defined(BPF_MOV) || (defined(HAVE_DECL_BPF_MOV) && HAVE_DECL_BPF_MOV)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_MOV) == (0xb0), "BPF_MOV != 0xb0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_MOV 0xb0
#endif
#if defined(BPF_ARSH) || (defined(HAVE_DECL_BPF_ARSH) && HAVE_DECL_BPF_ARSH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_ARSH) == (0xc0), "BPF_ARSH != 0xc0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_ARSH 0xc0
#endif
#if defined(BPF_END) || (defined(HAVE_DECL_BPF_END) && HAVE_DECL_BPF_END)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_END) == (0xd0), "BPF_END != 0xd0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_END 0xd0
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat bpf_op_alu in mpers mode

# else

static const struct xlat_data bpf_op_alu_xdata[] = {
 XLAT(BPF_ADD),
 XLAT(BPF_SUB),
 XLAT(BPF_MUL),
 XLAT(BPF_DIV),
 XLAT(BPF_OR),
 XLAT(BPF_AND),
 XLAT(BPF_LSH),
 XLAT(BPF_RSH),
 XLAT(BPF_NEG),
 XLAT(BPF_MOD),
 XLAT(BPF_XOR),
 XLAT(BPF_MOV),
 XLAT(BPF_ARSH),
 XLAT(BPF_END),
};
static
const struct xlat bpf_op_alu[1] = { {
 .data = bpf_op_alu_xdata,
 .size = ARRAY_SIZE(bpf_op_alu_xdata),
 .type = XT_NORMAL,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
