#define PROXYBOUND_CONF_FILE_ENV_VAR "PROXYBOUND_CONF_FILE"
#define PROXYBOUND_QUIET_MODE_ENV_VAR "PROXYBOUND_QUIET_MODE"
#define PROXYBOUND_SOCKS5_HOST_ENV_VAR "PROXYBOUND_SOCKS5_HOST"
#define PROXYBOUND_SOCKS5_PORT_ENV_VAR "PROXYBOUND_SOCKS5_PORT"
#define PROXYBOUND_FORCE_DNS_ENV_VAR "PROXYBOUND_FORCE_DNS"
#define PROXYBOUND_ALLOW_LEAKS_ENV_VAR "PROXYBOUND_ALLOW_LEAKS"
#define PROXYBOUND_ALLOW_DNS_ENV_VAR "PROXYBOUND_ALLOW_DNS"
#define PROXYBOUND_WORKING_INDICATOR_ENV_VAR "PROXYBOUND_WORKING_INDICATOR"
#define PROXYBOUND_CONF_FILE "proxybound.conf"
#define LOG_PREFIX "[Proxybound] "
#ifndef SYSCONFDIR
#define SYSCONFDIR "/etc"
#endif

#include <stddef.h>

char *get_config_path(char* default_path, char* pbuf, size_t bufsize);

//RcB: DEP "common.c"