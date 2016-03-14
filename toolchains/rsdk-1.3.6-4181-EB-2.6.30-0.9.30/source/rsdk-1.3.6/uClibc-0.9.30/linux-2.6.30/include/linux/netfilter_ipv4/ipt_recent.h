#ifndef _IPT_RECENT_H
#define _IPT_RECENT_H

#include <linux/netfilter/xt_recent.h>

#define ipt_recent_info xt_recent_mtinfo

enum {
	IPT_RECENT_CHECK    = XT_RECENT_CHECK,
	IPT_RECENT_SET      = XT_RECENT_SET,
	IPT_RECENT_UPDATE   = XT_RECENT_UPDATE,
	IPT_RECENT_REMOVE   = XT_RECENT_REMOVE,
	IPT_RECENT_TTL      = XT_RECENT_TTL,

	IPT_RECENT_SOURCE   = XT_RECENT_SOURCE,
	IPT_RECENT_DEST     = XT_RECENT_DEST,

	IPT_RECENT_NAME_LEN = XT_RECENT_NAME_LEN,
};

#endif /*_IPT_RECENT_H*/
