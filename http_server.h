#ifndef KHTTPD_HTTP_SERVER_H
#define KHTTPD_HTTP_SERVER_H

#include <net/sock.h>

struct http_server_param {
    struct socket *listen_socket;
};

// ref: kecho
struct http_service {
    bool is_stopped;
    struct list_head worker;
};
struct http_server {
    struct socket *sock;
    struct list_head list;
    struct work_struct http_work;
};


extern int http_server_daemon(void *arg);

#endif
