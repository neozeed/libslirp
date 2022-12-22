/* stubs to 86box stuff */
void fatal(){}
void pclog(){}

#include "libslirp.h"

struct null_local_in6_addr
{ union
  { u_char		 _S6_u8[16];
    u_short		 _S6_u16[8];
    u_long		 _S6_u32[4];
  }			_S6_un;
# define s6_addr	_S6_un._S6_u8	/* RFC 3493 standard name */
};

typedef unsigned char uint8_t;
/* Stubs to stand in for the parts of libslirp we skip compiling. */
void ncsi_input(void *slirp, const uint8_t *pkt, int pkt_len) {}
void ip6_init(void *slirp) {}
void ip6_cleanup(void *slirp) {}
void ip6_input(void *m) {}
int ip6_output(void *so, void *m, int fast) { return 0; }
void in6_compute_ethaddr(struct in6_addr ip, uint8_t *eth) {}
bool in6_equal(const void *a, const void *b) { return 0; }
const struct in6_addr in6addr_any = { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 } } };
const struct in6_addr in6addr_loopback = { { { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 } } };
int udp6_output(void *so, void *m, void *saddr, void *daddr) { return 0; }
void icmp6_send_error(void *m, uint8_t type, uint8_t code) {}
void ndp_send_ns(void *slirp, struct in6_addr addr) {}
bool ndp_table_search(void *slirp, struct in6_addr ip_addr, uint8_t *out_ethaddr) { return 0; }
void tftp_input(void *srcsas, void *m) {}