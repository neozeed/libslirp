CC=gcc

default: libslirp.a


CFLAGS = -O2 -I.

OBJS = arp_table.o bootp.o cksum.o dhcpv6.o dnssearch.o if.o ip6_icmp.o ip6_input.o \
	ip6_output.o ip_icmp.o ip_input.o ip_output.o mbuf.o misc.o ncsi.o ndp_table.o \
	sbuf.o slirp.o socket.o  stream.o tcp_input.o tcp_output.o tcp_subr.o \
	tcp_timer.o tftp.o tinyglib.o udp.o udp6.o util.o version.o vmstate.o \
	queue.o state.o

MISSING = 

pingtest: pingtest.o libslirp.a
	$(CC) pingtest.o libslirp.a -o pingtest.exe -lws2_32 -liphlpapi -lws2_32

libslirp.a: $(OBJS) $(MISSING)
	@echo "Loading ..."
	ar rcs libslirp.a $(OBJS)
	ranlib libslirp.a

clean:
	del /F $(OBJS) libslirp.a



# DO NOT DELETE THIS LINE

