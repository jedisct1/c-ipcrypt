
# IPCrypt (portable C implementation)

A portable C implementation of ipcrypt, a 32-bit block cipher that can
be used to "anonymize" IP addresses in log files.

The cipher was designed by Jean-Philippe Aumasson.

Reference implementation in Python: [ipcrypt](https://github.com/veorq/ipcrypt).

WARNING: This is a toy cipher. You shouldn't use it for anything
serious. See [1](https://mailarchive.ietf.org/arch/msg/cfrg/cFx5WJo48ZEN-a5cj_LlyrdN8-0/), [2](https://mailarchive.ietf.org/arch/msg/cfrg/JSe2K7jDQ_fwkI5wgqlAOONW0N4/), and [3](https://mailarchive.ietf.org/arch/msg/cfrg/ZCmNRv1I8-3Lw2-xEZRkMoKaGJY/).

# ipcrypt 2

2025 Update: This project has been deprecated in favor of [ipcrypt 2](https://github.com/jedisct1/ipcrypt2), which is AES-based and supports IPv6 and non-deterministic encryption.
