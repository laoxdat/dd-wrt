/* Generated by ./xlat/gen.sh from ./xlat/sock_netlink_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(NETLINK_ADD_MEMBERSHIP) || (defined(HAVE_DECL_NETLINK_ADD_MEMBERSHIP) && HAVE_DECL_NETLINK_ADD_MEMBERSHIP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NETLINK_ADD_MEMBERSHIP) == (1), "NETLINK_ADD_MEMBERSHIP != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NETLINK_ADD_MEMBERSHIP 1
#endif
#if defined(NETLINK_DROP_MEMBERSHIP) || (defined(HAVE_DECL_NETLINK_DROP_MEMBERSHIP) && HAVE_DECL_NETLINK_DROP_MEMBERSHIP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NETLINK_DROP_MEMBERSHIP) == (2), "NETLINK_DROP_MEMBERSHIP != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NETLINK_DROP_MEMBERSHIP 2
#endif
#if defined(NETLINK_PKTINFO) || (defined(HAVE_DECL_NETLINK_PKTINFO) && HAVE_DECL_NETLINK_PKTINFO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NETLINK_PKTINFO) == (3), "NETLINK_PKTINFO != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NETLINK_PKTINFO 3
#endif
#if defined(NETLINK_BROADCAST_ERROR) || (defined(HAVE_DECL_NETLINK_BROADCAST_ERROR) && HAVE_DECL_NETLINK_BROADCAST_ERROR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NETLINK_BROADCAST_ERROR) == (4), "NETLINK_BROADCAST_ERROR != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NETLINK_BROADCAST_ERROR 4
#endif
#if defined(NETLINK_NO_ENOBUFS) || (defined(HAVE_DECL_NETLINK_NO_ENOBUFS) && HAVE_DECL_NETLINK_NO_ENOBUFS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NETLINK_NO_ENOBUFS) == (5), "NETLINK_NO_ENOBUFS != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NETLINK_NO_ENOBUFS 5
#endif
#if defined(NETLINK_RX_RING) || (defined(HAVE_DECL_NETLINK_RX_RING) && HAVE_DECL_NETLINK_RX_RING)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NETLINK_RX_RING) == (6), "NETLINK_RX_RING != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NETLINK_RX_RING 6
#endif
#if defined(NETLINK_TX_RING) || (defined(HAVE_DECL_NETLINK_TX_RING) && HAVE_DECL_NETLINK_TX_RING)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NETLINK_TX_RING) == (7), "NETLINK_TX_RING != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NETLINK_TX_RING 7
#endif
#if defined(NETLINK_LISTEN_ALL_NSID) || (defined(HAVE_DECL_NETLINK_LISTEN_ALL_NSID) && HAVE_DECL_NETLINK_LISTEN_ALL_NSID)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NETLINK_LISTEN_ALL_NSID) == (8), "NETLINK_LISTEN_ALL_NSID != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NETLINK_LISTEN_ALL_NSID 8
#endif
#if defined(NETLINK_LIST_MEMBERSHIPS) || (defined(HAVE_DECL_NETLINK_LIST_MEMBERSHIPS) && HAVE_DECL_NETLINK_LIST_MEMBERSHIPS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NETLINK_LIST_MEMBERSHIPS) == (9), "NETLINK_LIST_MEMBERSHIPS != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NETLINK_LIST_MEMBERSHIPS 9
#endif
#if defined(NETLINK_CAP_ACK) || (defined(HAVE_DECL_NETLINK_CAP_ACK) && HAVE_DECL_NETLINK_CAP_ACK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NETLINK_CAP_ACK) == (10), "NETLINK_CAP_ACK != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NETLINK_CAP_ACK 10
#endif
#if defined(NETLINK_EXT_ACK) || (defined(HAVE_DECL_NETLINK_EXT_ACK) && HAVE_DECL_NETLINK_EXT_ACK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NETLINK_EXT_ACK) == (11), "NETLINK_EXT_ACK != 11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NETLINK_EXT_ACK 11
#endif
#if defined(NETLINK_DUMP_STRICT_CHK) || (defined(HAVE_DECL_NETLINK_DUMP_STRICT_CHK) && HAVE_DECL_NETLINK_DUMP_STRICT_CHK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NETLINK_DUMP_STRICT_CHK) == (12), "NETLINK_DUMP_STRICT_CHK != 12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NETLINK_DUMP_STRICT_CHK 12
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sock_netlink_options in mpers mode

# else

static const struct xlat_data sock_netlink_options_xdata[] = {
 [NETLINK_ADD_MEMBERSHIP] = XLAT(NETLINK_ADD_MEMBERSHIP),
 [NETLINK_DROP_MEMBERSHIP] = XLAT(NETLINK_DROP_MEMBERSHIP),
 [NETLINK_PKTINFO] = XLAT(NETLINK_PKTINFO),
 [NETLINK_BROADCAST_ERROR] = XLAT(NETLINK_BROADCAST_ERROR),
 [NETLINK_NO_ENOBUFS] = XLAT(NETLINK_NO_ENOBUFS),
 [NETLINK_RX_RING] = XLAT(NETLINK_RX_RING),
 [NETLINK_TX_RING] = XLAT(NETLINK_TX_RING),
 [NETLINK_LISTEN_ALL_NSID] = XLAT(NETLINK_LISTEN_ALL_NSID),
 [NETLINK_LIST_MEMBERSHIPS] = XLAT(NETLINK_LIST_MEMBERSHIPS),
 [NETLINK_CAP_ACK] = XLAT(NETLINK_CAP_ACK),
 [NETLINK_EXT_ACK] = XLAT(NETLINK_EXT_ACK),
 [NETLINK_DUMP_STRICT_CHK] = XLAT(NETLINK_DUMP_STRICT_CHK),
};
static
const struct xlat sock_netlink_options[1] = { {
 .data = sock_netlink_options_xdata,
 .size = ARRAY_SIZE(sock_netlink_options_xdata),
 .type = XT_INDEXED,
} };

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
