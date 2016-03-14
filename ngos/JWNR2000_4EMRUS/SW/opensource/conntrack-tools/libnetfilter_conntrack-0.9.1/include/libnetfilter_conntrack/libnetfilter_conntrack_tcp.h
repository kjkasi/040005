/*
 * (C) 2005 by Pablo Neira Ayuso <pablo@netfilter.org>
 *
 * This software may be used and distributed according to the terms
 * of the GNU General Public License, incorporated herein by reference.
 */

#ifndef _LIBNETFILTER_CONNTRACK_TCP_H_
#define _LIBNETFILTER_CONNTRACK_TCP_H_

#ifdef __cplusplus
extern "C" {
#endif

enum tcp_state {
	TCP_CONNTRACK_NONE,
	TCP_CONNTRACK_SYN_SENT,
	TCP_CONNTRACK_SYN_RECV,
	TCP_CONNTRACK_ESTABLISHED,
	TCP_CONNTRACK_FIN_WAIT,
	TCP_CONNTRACK_CLOSE_WAIT,
	TCP_CONNTRACK_LAST_ACK,
	TCP_CONNTRACK_TIME_WAIT,
	TCP_CONNTRACK_CLOSE,
	TCP_CONNTRACK_LISTEN,		/* obsolete */
#define TCP_CONNTRACK_SYN_SENT2		TCP_CONNTRACK_LISTEN
	TCP_CONNTRACK_MAX,
	TCP_CONNTRACK_IGNORE
};

/* WARNING: do not use these flags in your new applications, they are obsolete
 * and we keep them here to avoid breaking backward compatibility. */
enum tcp_flags {
	TCP_ORIG_SPORT_BIT = 0,
	TCP_ORIG_SPORT = (1 << TCP_ORIG_SPORT_BIT),

	TCP_ORIG_DPORT_BIT = 1,
	TCP_ORIG_DPORT = (1 << TCP_ORIG_DPORT_BIT),

	TCP_REPL_SPORT_BIT = 2,
	TCP_REPL_SPORT = (1 << TCP_REPL_SPORT_BIT),

	TCP_REPL_DPORT_BIT = 3,
	TCP_REPL_DPORT = (1 << TCP_REPL_DPORT_BIT),

	TCP_MASK_SPORT_BIT = 4,
	TCP_MASK_SPORT = (1 << TCP_MASK_SPORT_BIT),

	TCP_MASK_DPORT_BIT = 5,
	TCP_MASK_DPORT = (1 << TCP_MASK_DPORT_BIT),

	TCP_STATE_BIT = 6,
	TCP_STATE = (1 << TCP_STATE_BIT),

	TCP_EXPTUPLE_SPORT_BIT = 7,
	TCP_EXPTUPLE_SPORT = (1 << TCP_EXPTUPLE_SPORT_BIT),

	TCP_EXPTUPLE_DPORT_BIT = 8,
	TCP_EXPTUPLE_DPORT = (1 << TCP_EXPTUPLE_DPORT_BIT)
};

#ifdef __cplusplus
}
#endif

#endif
