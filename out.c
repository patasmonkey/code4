/*
 * Original Source  : 
 * Language         : 
 * Compiled Time    : 
 * Compiler Info    : 
 * Compiler Version : 
 */
# 1 ""
typedef float float_t;
typedef double double_t;
struct __float2 {
float __sinval;
float __cosval;
};
struct __double2 {
double __sinval;
double __cosval;
};
struct exception {
int type;
char * name;
double arg1;
double arg2;
double retval;
};
typedef char __int8_t;
typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;
typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
typedef int __darwin_ct_rune_t;
union anon_type_5___mbstate_t {
char __mbstate8[128];
long long _mbstateL;
};
typedef union anon_type_5___mbstate_t __mbstate_t;
typedef union anon_type_5___mbstate_t __darwin_mbstate_t;
typedef long __darwin_ptrdiff_t;
typedef unsigned long __darwin_size_t;
typedef __builtin_va_list __darwin_va_list;
typedef int __darwin_wchar_t;
typedef int __darwin_rune_t;
typedef int __darwin_wint_t;
typedef unsigned long __darwin_clock_t;
typedef unsigned int __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
typedef long long __darwin_blkcnt_t;
typedef int __darwin_blksize_t;
typedef int __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef unsigned int __darwin_gid_t;
typedef unsigned int __darwin_id_t;
typedef unsigned long long __darwin_ino64_t;
typedef unsigned long long __darwin_ino_t;
typedef unsigned int __darwin_mach_port_name_t;
typedef unsigned int __darwin_mach_port_t;
typedef unsigned short __darwin_mode_t;
typedef long long __darwin_off_t;
typedef int __darwin_pid_t;
typedef unsigned int __darwin_sigset_t;
typedef int __darwin_suseconds_t;
typedef unsigned int __darwin_uid_t;
typedef unsigned int __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];
struct _opaque_pthread_attr_t {
long __sig;
char __opaque[56];
};
struct _opaque_pthread_cond_t {
long __sig;
char __opaque[40];
};
struct _opaque_pthread_condattr_t {
long __sig;
char __opaque[8];
};
struct _opaque_pthread_mutex_t {
long __sig;
char __opaque[56];
};
struct _opaque_pthread_mutexattr_t {
long __sig;
char __opaque[8];
};
struct _opaque_pthread_once_t {
long __sig;
char __opaque[8];
};
struct _opaque_pthread_rwlock_t {
long __sig;
char __opaque[192];
};
struct _opaque_pthread_rwlockattr_t {
long __sig;
char __opaque[16];
};
typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;
typedef unsigned int __darwin_wctype_t;
typedef unsigned long size_t;
typedef char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long long u_int64_t;
typedef long long register_t;
typedef long intptr_t;
typedef unsigned long uintptr_t;
typedef unsigned long long user_addr_t;
typedef unsigned long long user_size_t;
typedef long long user_ssize_t;
typedef long long user_long_t;
typedef unsigned long long user_ulong_t;
typedef long long user_time_t;
typedef long long user_off_t;
typedef unsigned long long syscall_arg_t;
typedef unsigned long rsize_t;
typedef int errno_t;
typedef long ssize_t;
typedef __builtin_va_list va_list;
typedef long long fpos_t;
struct __sbuf {
unsigned char * _base;
int _size;
};
struct __sFILEX;
struct __sFILE {
unsigned char * _p;
int _r;
int _w;
short _flags;
short _file;
struct __sbuf _bf;
int _lbfsize;
void * _cookie;
int (* _close)(void * );
int (* _read)(void * , char * , int);
long long (* _seek)(void * , long long, int);
int (* _write)(void * , char const * , int);
struct __sbuf _ub;
struct __sFILEX * _extra;
int _ur;
unsigned char _ubuf[3];
unsigned char _nbuf[1];
struct __sbuf _lb;
int _blksize;
long long _offset;
};
typedef struct __sFILE FILE;
typedef long long off_t;
typedef long ptrdiff_t;
typedef int wchar_t;
struct anon_type_6_max_align_t {
long long __max_align_ll;
long double __max_align_ld;
};
typedef struct anon_type_6_max_align_t max_align_t;
enum acc_device_t {
acc_device_none = 0,
acc_device_default = 1,
acc_device_host = 2,
acc_device_not_host = 4,
acc_device_nvidia = 5,
_ACC_device_hwm = 6,
_ACC_highest = 2147483647,
_ACC_neg = -1
};
typedef enum acc_device_t acc_device_t;
enum acc_async_t {
acc_async_noval = -1,
acc_async_sync = -2
};
typedef enum acc_async_t acc_async_t;
enum anon_type_7_idtype_t {
P_ALL = 0,
P_PID = 1,
P_PGID = 2
};
typedef enum anon_type_7_idtype_t idtype_t;
typedef int pid_t;
typedef unsigned int id_t;
typedef int sig_atomic_t;
struct __darwin_i386_thread_state {
unsigned int __eax;
unsigned int __ebx;
unsigned int __ecx;
unsigned int __edx;
unsigned int __edi;
unsigned int __esi;
unsigned int __ebp;
unsigned int __esp;
unsigned int __ss;
unsigned int __eflags;
unsigned int __eip;
unsigned int __cs;
unsigned int __ds;
unsigned int __es;
unsigned int __fs;
unsigned int __gs;
};
struct __darwin_fp_control {
unsigned short __invalid:1;
unsigned short __denorm:1;
unsigned short __zdiv:1;
unsigned short __ovrfl:1;
unsigned short __undfl:1;
unsigned short __precis:1;
unsigned short anon_mem_1:2;
unsigned short __pc:2;
unsigned short __rc:2;
unsigned short anon_mem_2:1;
unsigned short anon_mem_3:3;
};
typedef struct __darwin_fp_control __darwin_fp_control_t;
struct __darwin_fp_status {
unsigned short __invalid:1;
unsigned short __denorm:1;
unsigned short __zdiv:1;
unsigned short __ovrfl:1;
unsigned short __undfl:1;
unsigned short __precis:1;
unsigned short __stkflt:1;
unsigned short __errsumm:1;
unsigned short __c0:1;
unsigned short __c1:1;
unsigned short __c2:1;
unsigned short __tos:3;
unsigned short __c3:1;
unsigned short __busy:1;
};
typedef struct __darwin_fp_status __darwin_fp_status_t;
struct __darwin_mmst_reg {
char __mmst_reg[10];
char __mmst_rsrv[6];
};
struct __darwin_xmm_reg {
char __xmm_reg[16];
};
struct __darwin_ymm_reg {
char __ymm_reg[32];
};
struct __darwin_zmm_reg {
char __zmm_reg[64];
};
struct __darwin_opmask_reg {
char __opmask_reg[8];
};
struct __darwin_i386_float_state {
int __fpu_reserved[2];
struct __darwin_fp_control __fpu_fcw;
struct __darwin_fp_status __fpu_fsw;
unsigned char __fpu_ftw;
unsigned char __fpu_rsrv1;
unsigned short __fpu_fop;
unsigned int __fpu_ip;
unsigned short __fpu_cs;
unsigned short __fpu_rsrv2;
unsigned int __fpu_dp;
unsigned short __fpu_ds;
unsigned short __fpu_rsrv3;
unsigned int __fpu_mxcsr;
unsigned int __fpu_mxcsrmask;
struct __darwin_mmst_reg __fpu_stmm0;
struct __darwin_mmst_reg __fpu_stmm1;
struct __darwin_mmst_reg __fpu_stmm2;
struct __darwin_mmst_reg __fpu_stmm3;
struct __darwin_mmst_reg __fpu_stmm4;
struct __darwin_mmst_reg __fpu_stmm5;
struct __darwin_mmst_reg __fpu_stmm6;
struct __darwin_mmst_reg __fpu_stmm7;
struct __darwin_xmm_reg __fpu_xmm0;
struct __darwin_xmm_reg __fpu_xmm1;
struct __darwin_xmm_reg __fpu_xmm2;
struct __darwin_xmm_reg __fpu_xmm3;
struct __darwin_xmm_reg __fpu_xmm4;
struct __darwin_xmm_reg __fpu_xmm5;
struct __darwin_xmm_reg __fpu_xmm6;
struct __darwin_xmm_reg __fpu_xmm7;
char __fpu_rsrv4[224];
int __fpu_reserved1;
};
struct __darwin_i386_avx_state {
int __fpu_reserved[2];
struct __darwin_fp_control __fpu_fcw;
struct __darwin_fp_status __fpu_fsw;
unsigned char __fpu_ftw;
unsigned char __fpu_rsrv1;
unsigned short __fpu_fop;
unsigned int __fpu_ip;
unsigned short __fpu_cs;
unsigned short __fpu_rsrv2;
unsigned int __fpu_dp;
unsigned short __fpu_ds;
unsigned short __fpu_rsrv3;
unsigned int __fpu_mxcsr;
unsigned int __fpu_mxcsrmask;
struct __darwin_mmst_reg __fpu_stmm0;
struct __darwin_mmst_reg __fpu_stmm1;
struct __darwin_mmst_reg __fpu_stmm2;
struct __darwin_mmst_reg __fpu_stmm3;
struct __darwin_mmst_reg __fpu_stmm4;
struct __darwin_mmst_reg __fpu_stmm5;
struct __darwin_mmst_reg __fpu_stmm6;
struct __darwin_mmst_reg __fpu_stmm7;
struct __darwin_xmm_reg __fpu_xmm0;
struct __darwin_xmm_reg __fpu_xmm1;
struct __darwin_xmm_reg __fpu_xmm2;
struct __darwin_xmm_reg __fpu_xmm3;
struct __darwin_xmm_reg __fpu_xmm4;
struct __darwin_xmm_reg __fpu_xmm5;
struct __darwin_xmm_reg __fpu_xmm6;
struct __darwin_xmm_reg __fpu_xmm7;
char __fpu_rsrv4[224];
int __fpu_reserved1;
char __avx_reserved1[64];
struct __darwin_xmm_reg __fpu_ymmh0;
struct __darwin_xmm_reg __fpu_ymmh1;
struct __darwin_xmm_reg __fpu_ymmh2;
struct __darwin_xmm_reg __fpu_ymmh3;
struct __darwin_xmm_reg __fpu_ymmh4;
struct __darwin_xmm_reg __fpu_ymmh5;
struct __darwin_xmm_reg __fpu_ymmh6;
struct __darwin_xmm_reg __fpu_ymmh7;
};
struct __darwin_i386_avx512_state {
int __fpu_reserved[2];
struct __darwin_fp_control __fpu_fcw;
struct __darwin_fp_status __fpu_fsw;
unsigned char __fpu_ftw;
unsigned char __fpu_rsrv1;
unsigned short __fpu_fop;
unsigned int __fpu_ip;
unsigned short __fpu_cs;
unsigned short __fpu_rsrv2;
unsigned int __fpu_dp;
unsigned short __fpu_ds;
unsigned short __fpu_rsrv3;
unsigned int __fpu_mxcsr;
unsigned int __fpu_mxcsrmask;
struct __darwin_mmst_reg __fpu_stmm0;
struct __darwin_mmst_reg __fpu_stmm1;
struct __darwin_mmst_reg __fpu_stmm2;
struct __darwin_mmst_reg __fpu_stmm3;
struct __darwin_mmst_reg __fpu_stmm4;
struct __darwin_mmst_reg __fpu_stmm5;
struct __darwin_mmst_reg __fpu_stmm6;
struct __darwin_mmst_reg __fpu_stmm7;
struct __darwin_xmm_reg __fpu_xmm0;
struct __darwin_xmm_reg __fpu_xmm1;
struct __darwin_xmm_reg __fpu_xmm2;
struct __darwin_xmm_reg __fpu_xmm3;
struct __darwin_xmm_reg __fpu_xmm4;
struct __darwin_xmm_reg __fpu_xmm5;
struct __darwin_xmm_reg __fpu_xmm6;
struct __darwin_xmm_reg __fpu_xmm7;
char __fpu_rsrv4[224];
int __fpu_reserved1;
char __avx_reserved1[64];
struct __darwin_xmm_reg __fpu_ymmh0;
struct __darwin_xmm_reg __fpu_ymmh1;
struct __darwin_xmm_reg __fpu_ymmh2;
struct __darwin_xmm_reg __fpu_ymmh3;
struct __darwin_xmm_reg __fpu_ymmh4;
struct __darwin_xmm_reg __fpu_ymmh5;
struct __darwin_xmm_reg __fpu_ymmh6;
struct __darwin_xmm_reg __fpu_ymmh7;
struct __darwin_opmask_reg __fpu_k0;
struct __darwin_opmask_reg __fpu_k1;
struct __darwin_opmask_reg __fpu_k2;
struct __darwin_opmask_reg __fpu_k3;
struct __darwin_opmask_reg __fpu_k4;
struct __darwin_opmask_reg __fpu_k5;
struct __darwin_opmask_reg __fpu_k6;
struct __darwin_opmask_reg __fpu_k7;
struct __darwin_ymm_reg __fpu_zmmh0;
struct __darwin_ymm_reg __fpu_zmmh1;
struct __darwin_ymm_reg __fpu_zmmh2;
struct __darwin_ymm_reg __fpu_zmmh3;
struct __darwin_ymm_reg __fpu_zmmh4;
struct __darwin_ymm_reg __fpu_zmmh5;
struct __darwin_ymm_reg __fpu_zmmh6;
struct __darwin_ymm_reg __fpu_zmmh7;
};
struct __darwin_i386_exception_state {
unsigned short __trapno;
unsigned short __cpu;
unsigned int __err;
unsigned int __faultvaddr;
};
struct __darwin_x86_debug_state32 {
unsigned int __dr0;
unsigned int __dr1;
unsigned int __dr2;
unsigned int __dr3;
unsigned int __dr4;
unsigned int __dr5;
unsigned int __dr6;
unsigned int __dr7;
};
struct __darwin_x86_thread_state64 {
unsigned long long __rax;
unsigned long long __rbx;
unsigned long long __rcx;
unsigned long long __rdx;
unsigned long long __rdi;
unsigned long long __rsi;
unsigned long long __rbp;
unsigned long long __rsp;
unsigned long long __r8;
unsigned long long __r9;
unsigned long long __r10;
unsigned long long __r11;
unsigned long long __r12;
unsigned long long __r13;
unsigned long long __r14;
unsigned long long __r15;
unsigned long long __rip;
unsigned long long __rflags;
unsigned long long __cs;
unsigned long long __fs;
unsigned long long __gs;
};
struct __darwin_x86_float_state64 {
int __fpu_reserved[2];
struct __darwin_fp_control __fpu_fcw;
struct __darwin_fp_status __fpu_fsw;
unsigned char __fpu_ftw;
unsigned char __fpu_rsrv1;
unsigned short __fpu_fop;
unsigned int __fpu_ip;
unsigned short __fpu_cs;
unsigned short __fpu_rsrv2;
unsigned int __fpu_dp;
unsigned short __fpu_ds;
unsigned short __fpu_rsrv3;
unsigned int __fpu_mxcsr;
unsigned int __fpu_mxcsrmask;
struct __darwin_mmst_reg __fpu_stmm0;
struct __darwin_mmst_reg __fpu_stmm1;
struct __darwin_mmst_reg __fpu_stmm2;
struct __darwin_mmst_reg __fpu_stmm3;
struct __darwin_mmst_reg __fpu_stmm4;
struct __darwin_mmst_reg __fpu_stmm5;
struct __darwin_mmst_reg __fpu_stmm6;
struct __darwin_mmst_reg __fpu_stmm7;
struct __darwin_xmm_reg __fpu_xmm0;
struct __darwin_xmm_reg __fpu_xmm1;
struct __darwin_xmm_reg __fpu_xmm2;
struct __darwin_xmm_reg __fpu_xmm3;
struct __darwin_xmm_reg __fpu_xmm4;
struct __darwin_xmm_reg __fpu_xmm5;
struct __darwin_xmm_reg __fpu_xmm6;
struct __darwin_xmm_reg __fpu_xmm7;
struct __darwin_xmm_reg __fpu_xmm8;
struct __darwin_xmm_reg __fpu_xmm9;
struct __darwin_xmm_reg __fpu_xmm10;
struct __darwin_xmm_reg __fpu_xmm11;
struct __darwin_xmm_reg __fpu_xmm12;
struct __darwin_xmm_reg __fpu_xmm13;
struct __darwin_xmm_reg __fpu_xmm14;
struct __darwin_xmm_reg __fpu_xmm15;
char __fpu_rsrv4[96];
int __fpu_reserved1;
};
struct __darwin_x86_avx_state64 {
int __fpu_reserved[2];
struct __darwin_fp_control __fpu_fcw;
struct __darwin_fp_status __fpu_fsw;
unsigned char __fpu_ftw;
unsigned char __fpu_rsrv1;
unsigned short __fpu_fop;
unsigned int __fpu_ip;
unsigned short __fpu_cs;
unsigned short __fpu_rsrv2;
unsigned int __fpu_dp;
unsigned short __fpu_ds;
unsigned short __fpu_rsrv3;
unsigned int __fpu_mxcsr;
unsigned int __fpu_mxcsrmask;
struct __darwin_mmst_reg __fpu_stmm0;
struct __darwin_mmst_reg __fpu_stmm1;
struct __darwin_mmst_reg __fpu_stmm2;
struct __darwin_mmst_reg __fpu_stmm3;
struct __darwin_mmst_reg __fpu_stmm4;
struct __darwin_mmst_reg __fpu_stmm5;
struct __darwin_mmst_reg __fpu_stmm6;
struct __darwin_mmst_reg __fpu_stmm7;
struct __darwin_xmm_reg __fpu_xmm0;
struct __darwin_xmm_reg __fpu_xmm1;
struct __darwin_xmm_reg __fpu_xmm2;
struct __darwin_xmm_reg __fpu_xmm3;
struct __darwin_xmm_reg __fpu_xmm4;
struct __darwin_xmm_reg __fpu_xmm5;
struct __darwin_xmm_reg __fpu_xmm6;
struct __darwin_xmm_reg __fpu_xmm7;
struct __darwin_xmm_reg __fpu_xmm8;
struct __darwin_xmm_reg __fpu_xmm9;
struct __darwin_xmm_reg __fpu_xmm10;
struct __darwin_xmm_reg __fpu_xmm11;
struct __darwin_xmm_reg __fpu_xmm12;
struct __darwin_xmm_reg __fpu_xmm13;
struct __darwin_xmm_reg __fpu_xmm14;
struct __darwin_xmm_reg __fpu_xmm15;
char __fpu_rsrv4[96];
int __fpu_reserved1;
char __avx_reserved1[64];
struct __darwin_xmm_reg __fpu_ymmh0;
struct __darwin_xmm_reg __fpu_ymmh1;
struct __darwin_xmm_reg __fpu_ymmh2;
struct __darwin_xmm_reg __fpu_ymmh3;
struct __darwin_xmm_reg __fpu_ymmh4;
struct __darwin_xmm_reg __fpu_ymmh5;
struct __darwin_xmm_reg __fpu_ymmh6;
struct __darwin_xmm_reg __fpu_ymmh7;
struct __darwin_xmm_reg __fpu_ymmh8;
struct __darwin_xmm_reg __fpu_ymmh9;
struct __darwin_xmm_reg __fpu_ymmh10;
struct __darwin_xmm_reg __fpu_ymmh11;
struct __darwin_xmm_reg __fpu_ymmh12;
struct __darwin_xmm_reg __fpu_ymmh13;
struct __darwin_xmm_reg __fpu_ymmh14;
struct __darwin_xmm_reg __fpu_ymmh15;
};
struct __darwin_x86_avx512_state64 {
int __fpu_reserved[2];
struct __darwin_fp_control __fpu_fcw;
struct __darwin_fp_status __fpu_fsw;
unsigned char __fpu_ftw;
unsigned char __fpu_rsrv1;
unsigned short __fpu_fop;
unsigned int __fpu_ip;
unsigned short __fpu_cs;
unsigned short __fpu_rsrv2;
unsigned int __fpu_dp;
unsigned short __fpu_ds;
unsigned short __fpu_rsrv3;
unsigned int __fpu_mxcsr;
unsigned int __fpu_mxcsrmask;
struct __darwin_mmst_reg __fpu_stmm0;
struct __darwin_mmst_reg __fpu_stmm1;
struct __darwin_mmst_reg __fpu_stmm2;
struct __darwin_mmst_reg __fpu_stmm3;
struct __darwin_mmst_reg __fpu_stmm4;
struct __darwin_mmst_reg __fpu_stmm5;
struct __darwin_mmst_reg __fpu_stmm6;
struct __darwin_mmst_reg __fpu_stmm7;
struct __darwin_xmm_reg __fpu_xmm0;
struct __darwin_xmm_reg __fpu_xmm1;
struct __darwin_xmm_reg __fpu_xmm2;
struct __darwin_xmm_reg __fpu_xmm3;
struct __darwin_xmm_reg __fpu_xmm4;
struct __darwin_xmm_reg __fpu_xmm5;
struct __darwin_xmm_reg __fpu_xmm6;
struct __darwin_xmm_reg __fpu_xmm7;
struct __darwin_xmm_reg __fpu_xmm8;
struct __darwin_xmm_reg __fpu_xmm9;
struct __darwin_xmm_reg __fpu_xmm10;
struct __darwin_xmm_reg __fpu_xmm11;
struct __darwin_xmm_reg __fpu_xmm12;
struct __darwin_xmm_reg __fpu_xmm13;
struct __darwin_xmm_reg __fpu_xmm14;
struct __darwin_xmm_reg __fpu_xmm15;
char __fpu_rsrv4[96];
int __fpu_reserved1;
char __avx_reserved1[64];
struct __darwin_xmm_reg __fpu_ymmh0;
struct __darwin_xmm_reg __fpu_ymmh1;
struct __darwin_xmm_reg __fpu_ymmh2;
struct __darwin_xmm_reg __fpu_ymmh3;
struct __darwin_xmm_reg __fpu_ymmh4;
struct __darwin_xmm_reg __fpu_ymmh5;
struct __darwin_xmm_reg __fpu_ymmh6;
struct __darwin_xmm_reg __fpu_ymmh7;
struct __darwin_xmm_reg __fpu_ymmh8;
struct __darwin_xmm_reg __fpu_ymmh9;
struct __darwin_xmm_reg __fpu_ymmh10;
struct __darwin_xmm_reg __fpu_ymmh11;
struct __darwin_xmm_reg __fpu_ymmh12;
struct __darwin_xmm_reg __fpu_ymmh13;
struct __darwin_xmm_reg __fpu_ymmh14;
struct __darwin_xmm_reg __fpu_ymmh15;
struct __darwin_opmask_reg __fpu_k0;
struct __darwin_opmask_reg __fpu_k1;
struct __darwin_opmask_reg __fpu_k2;
struct __darwin_opmask_reg __fpu_k3;
struct __darwin_opmask_reg __fpu_k4;
struct __darwin_opmask_reg __fpu_k5;
struct __darwin_opmask_reg __fpu_k6;
struct __darwin_opmask_reg __fpu_k7;
struct __darwin_ymm_reg __fpu_zmmh0;
struct __darwin_ymm_reg __fpu_zmmh1;
struct __darwin_ymm_reg __fpu_zmmh2;
struct __darwin_ymm_reg __fpu_zmmh3;
struct __darwin_ymm_reg __fpu_zmmh4;
struct __darwin_ymm_reg __fpu_zmmh5;
struct __darwin_ymm_reg __fpu_zmmh6;
struct __darwin_ymm_reg __fpu_zmmh7;
struct __darwin_ymm_reg __fpu_zmmh8;
struct __darwin_ymm_reg __fpu_zmmh9;
struct __darwin_ymm_reg __fpu_zmmh10;
struct __darwin_ymm_reg __fpu_zmmh11;
struct __darwin_ymm_reg __fpu_zmmh12;
struct __darwin_ymm_reg __fpu_zmmh13;
struct __darwin_ymm_reg __fpu_zmmh14;
struct __darwin_ymm_reg __fpu_zmmh15;
struct __darwin_zmm_reg __fpu_zmm16;
struct __darwin_zmm_reg __fpu_zmm17;
struct __darwin_zmm_reg __fpu_zmm18;
struct __darwin_zmm_reg __fpu_zmm19;
struct __darwin_zmm_reg __fpu_zmm20;
struct __darwin_zmm_reg __fpu_zmm21;
struct __darwin_zmm_reg __fpu_zmm22;
struct __darwin_zmm_reg __fpu_zmm23;
struct __darwin_zmm_reg __fpu_zmm24;
struct __darwin_zmm_reg __fpu_zmm25;
struct __darwin_zmm_reg __fpu_zmm26;
struct __darwin_zmm_reg __fpu_zmm27;
struct __darwin_zmm_reg __fpu_zmm28;
struct __darwin_zmm_reg __fpu_zmm29;
struct __darwin_zmm_reg __fpu_zmm30;
struct __darwin_zmm_reg __fpu_zmm31;
};
struct __darwin_x86_exception_state64 {
unsigned short __trapno;
unsigned short __cpu;
unsigned int __err;
unsigned long long __faultvaddr;
};
struct __darwin_x86_debug_state64 {
unsigned long long __dr0;
unsigned long long __dr1;
unsigned long long __dr2;
unsigned long long __dr3;
unsigned long long __dr4;
unsigned long long __dr5;
unsigned long long __dr6;
unsigned long long __dr7;
};
struct __darwin_x86_cpmu_state64 {
unsigned long long __ctrs[16];
};
struct __darwin_mcontext32 {
struct __darwin_i386_exception_state __es;
struct __darwin_i386_thread_state __ss;
struct __darwin_i386_float_state __fs;
};
struct __darwin_mcontext_avx32 {
struct __darwin_i386_exception_state __es;
struct __darwin_i386_thread_state __ss;
struct __darwin_i386_avx_state __fs;
};
struct __darwin_mcontext_avx512_32 {
struct __darwin_i386_exception_state __es;
struct __darwin_i386_thread_state __ss;
struct __darwin_i386_avx512_state __fs;
};
struct __darwin_mcontext64 {
struct __darwin_x86_exception_state64 __es;
struct __darwin_x86_thread_state64 __ss;
struct __darwin_x86_float_state64 __fs;
};
struct __darwin_mcontext_avx64 {
struct __darwin_x86_exception_state64 __es;
struct __darwin_x86_thread_state64 __ss;
struct __darwin_x86_avx_state64 __fs;
};
struct __darwin_mcontext_avx512_64 {
struct __darwin_x86_exception_state64 __es;
struct __darwin_x86_thread_state64 __ss;
struct __darwin_x86_avx512_state64 __fs;
};
typedef struct __darwin_mcontext64 * mcontext_t;
typedef struct _opaque_pthread_attr_t pthread_attr_t;
struct __darwin_sigaltstack {
void * ss_sp;
unsigned long ss_size;
int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
typedef unsigned int sigset_t;
typedef unsigned int uid_t;
union sigval {
int sival_int;
void * sival_ptr;
};
struct sigevent {
int sigev_notify;
int sigev_signo;
union sigval sigev_value;
void (* sigev_notify_function)(union sigval);
struct _opaque_pthread_attr_t * sigev_notify_attributes;
};
struct __siginfo {
int si_signo;
int si_errno;
int si_code;
int si_pid;
unsigned int si_uid;
int si_status;
void * si_addr;
union sigval si_value;
long si_band;
unsigned long __pad[7];
};
typedef struct __siginfo siginfo_t;
union __sigaction_u {
void (* __sa_handler)(int);
void (* __sa_sigaction)(int, struct __siginfo * , void * );
};
struct __sigaction {
union __sigaction_u __sigaction_u;
void (* sa_tramp)(void * , int, int, struct __siginfo * , void * );
unsigned int sa_mask;
int sa_flags;
};
struct sigaction {
union __sigaction_u __sigaction_u;
unsigned int sa_mask;
int sa_flags;
};
typedef void (* sig_t)(int);
struct sigvec {
void (* sv_handler)(int);
int sv_mask;
int sv_flags;
};
struct sigstack {
char * ss_sp;
int ss_onstack;
};
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef char int_least8_t;
typedef short int_least16_t;
typedef int int_least32_t;
typedef long long int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long long uint_least64_t;
typedef char int_fast8_t;
typedef short int_fast16_t;
typedef int int_fast32_t;
typedef long long int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned short uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef unsigned long long uint_fast64_t;
typedef long intmax_t;
typedef unsigned long uintmax_t;
struct timeval {
long tv_sec;
int tv_usec;
};
typedef unsigned long long rlim_t;
struct rusage {
struct timeval ru_utime;
struct timeval ru_stime;
long ru_maxrss;
long ru_ixrss;
long ru_idrss;
long ru_isrss;
long ru_minflt;
long ru_majflt;
long ru_nswap;
long ru_inblock;
long ru_oublock;
long ru_msgsnd;
long ru_msgrcv;
long ru_nsignals;
long ru_nvcsw;
long ru_nivcsw;
};
typedef void * rusage_info_t;
struct rusage_info_v0 {
unsigned char ri_uuid[16];
unsigned long long ri_user_time;
unsigned long long ri_system_time;
unsigned long long ri_pkg_idle_wkups;
unsigned long long ri_interrupt_wkups;
unsigned long long ri_pageins;
unsigned long long ri_wired_size;
unsigned long long ri_resident_size;
unsigned long long ri_phys_footprint;
unsigned long long ri_proc_start_abstime;
unsigned long long ri_proc_exit_abstime;
};
struct rusage_info_v1 {
unsigned char ri_uuid[16];
unsigned long long ri_user_time;
unsigned long long ri_system_time;
unsigned long long ri_pkg_idle_wkups;
unsigned long long ri_interrupt_wkups;
unsigned long long ri_pageins;
unsigned long long ri_wired_size;
unsigned long long ri_resident_size;
unsigned long long ri_phys_footprint;
unsigned long long ri_proc_start_abstime;
unsigned long long ri_proc_exit_abstime;
unsigned long long ri_child_user_time;
unsigned long long ri_child_system_time;
unsigned long long ri_child_pkg_idle_wkups;
unsigned long long ri_child_interrupt_wkups;
unsigned long long ri_child_pageins;
unsigned long long ri_child_elapsed_abstime;
};
struct rusage_info_v2 {
unsigned char ri_uuid[16];
unsigned long long ri_user_time;
unsigned long long ri_system_time;
unsigned long long ri_pkg_idle_wkups;
unsigned long long ri_interrupt_wkups;
unsigned long long ri_pageins;
unsigned long long ri_wired_size;
unsigned long long ri_resident_size;
unsigned long long ri_phys_footprint;
unsigned long long ri_proc_start_abstime;
unsigned long long ri_proc_exit_abstime;
unsigned long long ri_child_user_time;
unsigned long long ri_child_system_time;
unsigned long long ri_child_pkg_idle_wkups;
unsigned long long ri_child_interrupt_wkups;
unsigned long long ri_child_pageins;
unsigned long long ri_child_elapsed_abstime;
unsigned long long ri_diskio_bytesread;
unsigned long long ri_diskio_byteswritten;
};
struct rusage_info_v3 {
unsigned char ri_uuid[16];
unsigned long long ri_user_time;
unsigned long long ri_system_time;
unsigned long long ri_pkg_idle_wkups;
unsigned long long ri_interrupt_wkups;
unsigned long long ri_pageins;
unsigned long long ri_wired_size;
unsigned long long ri_resident_size;
unsigned long long ri_phys_footprint;
unsigned long long ri_proc_start_abstime;
unsigned long long ri_proc_exit_abstime;
unsigned long long ri_child_user_time;
unsigned long long ri_child_system_time;
unsigned long long ri_child_pkg_idle_wkups;
unsigned long long ri_child_interrupt_wkups;
unsigned long long ri_child_pageins;
unsigned long long ri_child_elapsed_abstime;
unsigned long long ri_diskio_bytesread;
unsigned long long ri_diskio_byteswritten;
unsigned long long ri_cpu_time_qos_default;
unsigned long long ri_cpu_time_qos_maintenance;
unsigned long long ri_cpu_time_qos_background;
unsigned long long ri_cpu_time_qos_utility;
unsigned long long ri_cpu_time_qos_legacy;
unsigned long long ri_cpu_time_qos_user_initiated;
unsigned long long ri_cpu_time_qos_user_interactive;
unsigned long long ri_billed_system_time;
unsigned long long ri_serviced_system_time;
};
struct rusage_info_v4 {
unsigned char ri_uuid[16];
unsigned long long ri_user_time;
unsigned long long ri_system_time;
unsigned long long ri_pkg_idle_wkups;
unsigned long long ri_interrupt_wkups;
unsigned long long ri_pageins;
unsigned long long ri_wired_size;
unsigned long long ri_resident_size;
unsigned long long ri_phys_footprint;
unsigned long long ri_proc_start_abstime;
unsigned long long ri_proc_exit_abstime;
unsigned long long ri_child_user_time;
unsigned long long ri_child_system_time;
unsigned long long ri_child_pkg_idle_wkups;
unsigned long long ri_child_interrupt_wkups;
unsigned long long ri_child_pageins;
unsigned long long ri_child_elapsed_abstime;
unsigned long long ri_diskio_bytesread;
unsigned long long ri_diskio_byteswritten;
unsigned long long ri_cpu_time_qos_default;
unsigned long long ri_cpu_time_qos_maintenance;
unsigned long long ri_cpu_time_qos_background;
unsigned long long ri_cpu_time_qos_utility;
unsigned long long ri_cpu_time_qos_legacy;
unsigned long long ri_cpu_time_qos_user_initiated;
unsigned long long ri_cpu_time_qos_user_interactive;
unsigned long long ri_billed_system_time;
unsigned long long ri_serviced_system_time;
unsigned long long ri_logical_writes;
unsigned long long ri_lifetime_max_phys_footprint;
unsigned long long ri_instructions;
unsigned long long ri_cycles;
unsigned long long ri_billed_energy;
unsigned long long ri_serviced_energy;
unsigned long long ri_unused[2];
};
typedef struct rusage_info_v4 rusage_info_current;
struct rlimit {
unsigned long long rlim_cur;
unsigned long long rlim_max;
};
struct proc_rlimit_control_wakeupmon {
unsigned int wm_flags;
int wm_rate;
};
struct anon_type_8_w_T {
unsigned int w_Termsig:7;
unsigned int w_Coredump:1;
unsigned int w_Retcode:8;
unsigned int w_Filler:16;
};
struct anon_type_9_w_S {
unsigned int w_Stopval:8;
unsigned int w_Stopsig:8;
unsigned int w_Filler:16;
};
typedef int ct_rune_t;
typedef int rune_t;
struct anon_type_10_div_t {
int quot;
int rem;
};
typedef struct anon_type_10_div_t div_t;
struct anon_type_11_ldiv_t {
long quot;
long rem;
};
typedef struct anon_type_11_ldiv_t ldiv_t;
struct anon_type_12_lldiv_t {
long long quot;
long long rem;
};
typedef struct anon_type_12_lldiv_t lldiv_t;
typedef int dev_t;
typedef unsigned short mode_t;
struct fd_set {
int fds_bits[(((1024) % ((sizeof(int)) * (8))) == (0)) ?((1024) / ((sizeof(int)) * (8))) : (((1024) / ((sizeof(int)) * (8))) + (1))];
};
typedef struct fd_set fd_set;
struct timespec {
long tv_sec;
long tv_nsec;
};
struct timeval64 {
long long tv_sec;
long long tv_usec;
};
typedef long time_t;
typedef int suseconds_t;
struct itimerval {
struct timeval it_interval;
struct timeval it_value;
};
struct timezone {
int tz_minuteswest;
int tz_dsttime;
};
struct clockinfo {
int hz;
int tick;
int tickadj;
int stathz;
int profhz;
};
typedef unsigned long clock_t;
struct tm {
int tm_sec;
int tm_min;
int tm_hour;
int tm_mday;
int tm_mon;
int tm_year;
int tm_wday;
int tm_yday;
int tm_isdst;
long tm_gmtoff;
char * tm_zone;
};
enum anon_type_13_clockid_t {
_CLOCK_REALTIME = 0,
_CLOCK_MONOTONIC = 6,
_CLOCK_MONOTONIC_RAW = 4,
_CLOCK_MONOTONIC_RAW_APPROX = 5,
_CLOCK_UPTIME_RAW = 8,
_CLOCK_UPTIME_RAW_APPROX = 9,
_CLOCK_PROCESS_CPUTIME_ID = 12,
_CLOCK_THREAD_CPUTIME_ID = 16
};
typedef enum anon_type_13_clockid_t clockid_t;
struct __darwin_pthread_handler_rec;
struct __darwin_pthread_handler_rec {
void (* __routine)(void * );
void * __arg;
struct __darwin_pthread_handler_rec * __next;
};
struct _opaque_pthread_t {
long __sig;
struct __darwin_pthread_handler_rec * __cleanup_stack;
char __opaque[8176];
};
typedef struct _opaque_pthread_t * __darwin_pthread_t;
struct __darwin_ucontext;
struct __darwin_ucontext {
int uc_onstack;
unsigned int uc_sigmask;
struct __darwin_sigaltstack uc_stack;
struct __darwin_ucontext * uc_link;
unsigned long uc_mcsize;
struct __darwin_mcontext64 * uc_mcontext;
};
typedef struct __darwin_ucontext ucontext_t;
union wait {
int w_status;
struct anon_type_8_w_T w_T;
struct anon_type_9_w_S w_S;
};
# 1 "a.c" 
# 1 "<built-in>" 
# 1 "<command-line>" 
# 1 "a.c" 
# 52 "a.c" 
# 1 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h" 1 3 4
# 45 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 587 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 588 "/usr/include/sys/cdefs.h" 2 3 4
# 653 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 654 "/usr/include/sys/cdefs.h" 2 3 4
# 46 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h" 2 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 206 "/usr/include/Availability.h" 3 4
# 1 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/AvailabilityInternal.h" 1 3 4
# 207 "/usr/include/Availability.h" 2 3 4
# 47 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h" 2 3 4
# 59 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h" 3 4
# 126 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h" 3 4
extern int __math_errhandling(void);
# 159 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h" 3 4
extern int __fpclassifyf(float);
extern int __fpclassifyd(double);
extern int __fpclassifyl(long double);
# 203 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h" 3 4
extern inline int __attribute__((gnu_inline)) __inline_isfinitef(float __x);
extern inline int __attribute__((gnu_inline)) __inline_isfinited(double __x);
extern inline int __attribute__((gnu_inline)) __inline_isfinitel(long double __x);
extern inline int __attribute__((gnu_inline)) __inline_isinff(float __x);
extern inline int __attribute__((gnu_inline)) __inline_isinfd(double __x);
extern inline int __attribute__((gnu_inline)) __inline_isinfl(long double __x);
extern inline int __attribute__((gnu_inline)) __inline_isnanf(float __x);
extern inline int __attribute__((gnu_inline)) __inline_isnand(double __x);
extern inline int __attribute__((gnu_inline)) __inline_isnanl(long double __x);
extern inline int __attribute__((gnu_inline)) __inline_isnormalf(float __x);
extern inline int __attribute__((gnu_inline)) __inline_isnormald(double __x);
extern inline int __attribute__((gnu_inline)) __inline_isnormall(long double __x);
extern inline int __attribute__((gnu_inline)) __inline_signbitf(float __x);
extern inline int __attribute__((gnu_inline)) __inline_signbitd(double __x);
extern inline int __attribute__((gnu_inline)) __inline_signbitl(long double __x);
# 219 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
extern inline __attribute__((always_inline)) int __attribute__((gnu_inline)) __inline_isfinitef(float __x)
{
# 220 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
return (__x == __x) && ((__builtin_fabsf(__x)) != (__builtin_inff()));
}
# 222 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
extern inline __attribute__((always_inline)) int __attribute__((gnu_inline)) __inline_isfinited(double __x)
{
# 223 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
return (__x == __x) && ((__builtin_fabs(__x)) != (__builtin_inf()));
}
# 225 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
extern inline __attribute__((always_inline)) int __attribute__((gnu_inline)) __inline_isfinitel(long double __x)
{
# 226 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
return (__x == __x) && ((__builtin_fabsl(__x)) != (__builtin_infl()));
}
# 228 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
extern inline __attribute__((always_inline)) int __attribute__((gnu_inline)) __inline_isinff(float __x)
{
# 229 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
return (__builtin_fabsf(__x)) == (__builtin_inff());
}
# 231 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
extern inline __attribute__((always_inline)) int __attribute__((gnu_inline)) __inline_isinfd(double __x)
{
# 232 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
return (__builtin_fabs(__x)) == (__builtin_inf());
}
# 234 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
extern inline __attribute__((always_inline)) int __attribute__((gnu_inline)) __inline_isinfl(long double __x)
{
# 235 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
return (__builtin_fabsl(__x)) == (__builtin_infl());
}
# 237 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
extern inline __attribute__((always_inline)) int __attribute__((gnu_inline)) __inline_isnanf(float __x)
{
# 238 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
return __x != __x;
}
# 240 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
extern inline __attribute__((always_inline)) int __attribute__((gnu_inline)) __inline_isnand(double __x)
{
# 241 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
return __x != __x;
}
# 243 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
extern inline __attribute__((always_inline)) int __attribute__((gnu_inline)) __inline_isnanl(long double __x)
{
# 244 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
return __x != __x;
}
# 246 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
extern inline __attribute__((always_inline)) int __attribute__((gnu_inline)) __inline_signbitf(float __x)
{
union anon_type_1___u {
float __f;
unsigned int __u;
};
# 247 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
union anon_type_1___u __u;
# 248 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
((&(__u))->__f) = __x;
# 249 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
return (int)(((&(__u))->__u) >> (31));
}
# 251 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
extern inline __attribute__((always_inline)) int __attribute__((gnu_inline)) __inline_signbitd(double __x)
{
union anon_type_2___u {
double __f;
unsigned long long __u;
};
# 252 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
union anon_type_2___u __u;
# 253 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
((&(__u))->__f) = __x;
# 254 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
return (int)(((&(__u))->__u) >> (63));
}
# 257 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
extern inline __attribute__((always_inline)) int __attribute__((gnu_inline)) __inline_signbitl(long double __x)
{
struct anon_type_4___p {
unsigned long long __m;
unsigned short __sexp;
};
union anon_type_3___u {
long double __ld;
struct anon_type_4___p __p;
};
# 261 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
union anon_type_3___u __u;
# 262 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
((&(__u))->__ld) = __x;
# 263 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
return (int)(((&(&(__u))->__p)->__sexp) >> (15));
}
# 272 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
extern inline __attribute__((always_inline)) int __attribute__((gnu_inline)) __inline_isnormalf(float __x)
{
# 273 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
return (__inline_isfinitef(__x)) && ((__builtin_fabsf(__x)) >= ((float)1.17549435082228750796873653722224568e-38F));
}
# 275 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
extern inline __attribute__((always_inline)) int __attribute__((gnu_inline)) __inline_isnormald(double __x)
{
# 276 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
return (__inline_isfinited(__x)) && ((__builtin_fabs(__x)) >= ((double)((long double)2.22507385850720138309023271733240406e-308L)));
}
# 278 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
extern inline __attribute__((always_inline)) int __attribute__((gnu_inline)) __inline_isnormall(long double __x)
{
# 279 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
return (__inline_isfinitel(__x)) && ((__builtin_fabsl(__x)) >= ((long double)3.36210314311209350626267781732175260e-4932L));
}
# 337 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h" 3 4
extern float acosf(float);
extern double acos(double);
extern long double acosl(long double);
extern float asinf(float);
extern double asin(double);
extern long double asinl(long double);
extern float atanf(float);
extern double atan(double);
extern long double atanl(long double);
extern float atan2f(float, float);
extern double atan2(double, double);
extern long double atan2l(long double, long double);
extern float cosf(float);
extern double cos(double);
extern long double cosl(long double);
extern float sinf(float);
extern double sin(double);
extern long double sinl(long double);
extern float tanf(float);
extern double tan(double);
extern long double tanl(long double);
extern float acoshf(float);
extern double acosh(double);
extern long double acoshl(long double);
extern float asinhf(float);
extern double asinh(double);
extern long double asinhl(long double);
extern float atanhf(float);
extern double atanh(double);
extern long double atanhl(long double);
extern float coshf(float);
extern double cosh(double);
extern long double coshl(long double);
extern float sinhf(float);
extern double sinh(double);
extern long double sinhl(long double);
extern float tanhf(float);
extern double tanh(double);
extern long double tanhl(long double);
extern float expf(float);
extern double exp(double);
extern long double expl(long double);
extern float exp2f(float);
extern double exp2(double);
extern long double exp2l(long double);
extern float expm1f(float);
extern double expm1(double);
extern long double expm1l(long double);
extern float logf(float);
extern double log(double);
extern long double logl(long double);
extern float log10f(float);
extern double log10(double);
extern long double log10l(long double);
extern float log2f(float);
extern double log2(double);
extern long double log2l(long double);
extern float log1pf(float);
extern double log1p(double);
extern long double log1pl(long double);
extern float logbf(float);
extern double logb(double);
extern long double logbl(long double);
extern float modff(float, float * );
extern double modf(double, double * );
extern long double modfl(long double, long double * );
extern float ldexpf(float, int);
extern double ldexp(double, int);
extern long double ldexpl(long double, int);
extern float frexpf(float, int * );
extern double frexp(double, int * );
extern long double frexpl(long double, int * );
extern int ilogbf(float);
extern int ilogb(double);
extern int ilogbl(long double);
extern float scalbnf(float, int);
extern double scalbn(double, int);
extern long double scalbnl(long double, int);
extern float scalblnf(float, long);
extern double scalbln(double, long);
extern long double scalblnl(long double, long);
extern float fabsf(float);
extern double fabs(double);
extern long double fabsl(long double);
extern float cbrtf(float);
extern double cbrt(double);
extern long double cbrtl(long double);
extern float hypotf(float, float);
extern double hypot(double, double);
extern long double hypotl(long double, long double);
extern float powf(float, float);
extern double pow(double, double);
extern long double powl(long double, long double);
extern float sqrtf(float);
extern double sqrt(double);
extern long double sqrtl(long double);
extern float erff(float);
extern double erf(double);
extern long double erfl(long double);
extern float erfcf(float);
extern double erfc(double);
extern long double erfcl(long double);
extern float lgammaf(float);
extern double lgamma(double);
extern long double lgammal(long double);
extern float tgammaf(float);
extern double tgamma(double);
extern long double tgammal(long double);
extern float ceilf(float);
extern double ceil(double);
extern long double ceill(long double);
extern float floorf(float);
extern double floor(double);
extern long double floorl(long double);
extern float nearbyintf(float);
extern double nearbyint(double);
extern long double nearbyintl(long double);
extern float rintf(float);
extern double rint(double);
extern long double rintl(long double);
extern long lrintf(float);
extern long lrint(double);
extern long lrintl(long double);
extern float roundf(float);
extern double round(double);
extern long double roundl(long double);
extern long lroundf(float);
extern long lround(double);
extern long lroundl(long double);
extern long long llrintf(float);
extern long long llrint(double);
extern long long llrintl(long double);
extern long long llroundf(float);
extern long long llround(double);
extern long long llroundl(long double);
extern float truncf(float);
extern double trunc(double);
extern long double truncl(long double);
extern float fmodf(float, float);
extern double fmod(double, double);
extern long double fmodl(long double, long double);
extern float remainderf(float, float);
extern double remainder(double, double);
extern long double remainderl(long double, long double);
extern float remquof(float, float, int * );
extern double remquo(double, double, int * );
extern long double remquol(long double, long double, int * );
extern float copysignf(float, float);
extern double copysign(double, double);
extern long double copysignl(long double, long double);
extern float nanf(char const * );
extern double nan(char const * );
extern long double nanl(char const * );
extern float nextafterf(float, float);
extern double nextafter(double, double);
extern long double nextafterl(long double, long double);
extern double nexttoward(double, long double);
extern float nexttowardf(float, long double);
extern long double nexttowardl(long double, long double);
extern float fdimf(float, float);
extern double fdim(double, double);
extern long double fdiml(long double, long double);
extern float fmaxf(float, float);
extern double fmax(double, double);
extern long double fmaxl(long double, long double);
extern float fminf(float, float);
extern double fmin(double, double);
extern long double fminl(long double, long double);
extern float fmaf(float, float, float);
extern double fma(double, double, double);
extern long double fmal(long double, long double, long double);
# 580 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h" 3 4
extern __attribute__((deprecated)) float __inff(void);
extern __attribute__((deprecated)) double __inf(void);
extern __attribute__((deprecated)) long double __infl(void);
extern float __nan(void);
# 612 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h" 3 4
extern float __exp10f(float);
extern double __exp10(double);
extern inline void __attribute__((gnu_inline)) __sincosf(float __x, float * __sinp, float * __cosp);
extern inline void __attribute__((gnu_inline)) __sincos(double __x, double * __sinp, double * __cosp);
# 629 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h" 3 4
extern float __cospif(float);
extern double __cospi(double);
extern float __sinpif(float);
extern double __sinpi(double);
extern float __tanpif(float);
extern double __tanpi(double);
# 660 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h" 3 4
extern inline void __attribute__((gnu_inline)) __sincospif(float __x, float * __sinp, float * __cosp);
extern inline void __attribute__((gnu_inline)) __sincospi(double __x, double * __sinp, double * __cosp);
extern struct __float2 __sincosf_stret(float);
extern struct __double2 __sincos_stret(double);
extern struct __float2 __sincospif_stret(float);
extern struct __double2 __sincospi_stret(double);
# 676 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
extern inline __attribute__((always_inline)) void __attribute__((gnu_inline)) __sincosf(float __x, float * __sinp, float * __cosp)
{
# 677 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
struct __float2 const __stret = __sincosf_stret(__x);
# 678 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
(*(__sinp)) = ((&(__stret))->__sinval);
# 678 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
(*(__cosp)) = ((&(__stret))->__cosval);
}
# 681 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
extern inline __attribute__((always_inline)) void __attribute__((gnu_inline)) __sincos(double __x, double * __sinp, double * __cosp)
{
# 682 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
struct __double2 const __stret = __sincos_stret(__x);
# 683 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
(*(__sinp)) = ((&(__stret))->__sinval);
# 683 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
(*(__cosp)) = ((&(__stret))->__cosval);
}
# 686 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
extern inline __attribute__((always_inline)) void __attribute__((gnu_inline)) __sincospif(float __x, float * __sinp, float * __cosp)
{
# 687 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
struct __float2 const __stret = __sincospif_stret(__x);
# 688 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
(*(__sinp)) = ((&(__stret))->__sinval);
# 688 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
(*(__cosp)) = ((&(__stret))->__cosval);
}
# 691 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
extern inline __attribute__((always_inline)) void __attribute__((gnu_inline)) __sincospi(double __x, double * __sinp, double * __cosp)
{
# 692 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
struct __double2 const __stret = __sincospi_stret(__x);
# 693 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
(*(__sinp)) = ((&(__stret))->__sinval);
# 693 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
(*(__cosp)) = ((&(__stret))->__cosval);
}
extern double j0(double);
extern double j1(double);
extern double jn(int, double);
extern double y0(double);
extern double y1(double);
extern double yn(int, double);
extern double scalb(double, double);
# 709 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h"
extern int signgam;
# 766 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/math.h" 3 4
extern __attribute__((deprecated)) long rinttol(double);
extern __attribute__((deprecated)) long roundtol(double);
extern __attribute__((deprecated)) double drem(double, double);
extern __attribute__((deprecated)) int finite(double);
extern __attribute__((deprecated)) double gamma(double);
extern __attribute__((deprecated)) double significand(double);
extern __attribute__((deprecated)) int matherr(struct exception * );
# 53 "a.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 61 "/usr/include/string.h" 3 4
# 1 "/usr/include/_types.h" 1 3 4
# 27 "/usr/include/_types.h" 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 33 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 32 "/usr/include/machine/_types.h" 3 4
# 1 "/usr/include/i386/_types.h" 1 3 4
# 37 "/usr/include/i386/_types.h" 3 4
# 70 "/usr/include/i386/_types.h" 3 4
# 33 "/usr/include/machine/_types.h" 2 3 4
# 34 "/usr/include/sys/_types.h" 2 3 4
# 55 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/sys/_pthread/_pthread_types.h" 1 3 4
# 57 "/usr/include/sys/_pthread/_pthread_types.h" 3 4
# 81 "/usr/include/sys/_types.h" 2 3 4
# 28 "/usr/include/_types.h" 2 3 4
# 40 "/usr/include/_types.h" 3 4
# 62 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_size_t.h" 3 4
# 65 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 66 "/usr/include/string.h" 2 3 4
void * memchr(void const * __s, int __c, unsigned long __n);
int memcmp(void const * __s1, void const * __s2, unsigned long __n);
void * memcpy(void * __dst, void const * __src, unsigned long __n);
void * memmove(void * __dst, void const * __src, unsigned long __len);
void * memset(void * __b, int __c, unsigned long __len);
char * strcat(char * __s1, char const * __s2);
char * strchr(char const * __s, int __c);
int strcmp(char const * __s1, char const * __s2);
int strcoll(char const * __s1, char const * __s2);
char * strcpy(char * __dst, char const * __src);
unsigned long strcspn(char const * __s, char const * __charset);
char * strerror(int __errnum) __asm__("_strerror");
unsigned long strlen(char const * __s);
char * strncat(char * __s1, char const * __s2, unsigned long __n);
int strncmp(char const * __s1, char const * __s2, unsigned long __n);
char * strncpy(char * __dst, char const * __src, unsigned long __n);
char * strpbrk(char const * __s, char const * __charset);
char * strrchr(char const * __s, int __c);
unsigned long strspn(char const * __s, char const * __charset);
char * strstr(char const * __big, char const * __little);
char * strtok(char * __str, char const * __sep);
unsigned long strxfrm(char * __s1, char const * __s2, unsigned long __n);
# 103 "/usr/include/string.h" 3 4
char * strtok_r(char * __str, char const * __sep, char * * __lasts);
# 115 "/usr/include/string.h" 3 4
int strerror_r(int __errnum, char * __strerrbuf, unsigned long __buflen);
char * strdup(char const * __s1);
void * memccpy(void * __dst, void const * __src, int __c, unsigned long __n);
# 129 "/usr/include/string.h" 3 4
char * stpcpy(char * __dst, char const * __src);
char * stpncpy(char * __dst, char const * __src, unsigned long __n);
char * strndup(char const * __s1, unsigned long __n);
unsigned long strnlen(char const * __s1, unsigned long __n);
char * strsignal(int __sig);
# 1 "/usr/include/sys/_types/_rsize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_rsize_t.h" 3 4
# 1 "/usr/include/machine/types.h" 1 3 4
# 35 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/i386/types.h" 1 3 4
# 76 "/usr/include/i386/types.h" 3 4
# 1 "/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int8_t.h" 3 4
# 77 "/usr/include/i386/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int16_t.h" 3 4
# 78 "/usr/include/i386/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int32_t.h" 3 4
# 79 "/usr/include/i386/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int64_t.h" 3 4
# 80 "/usr/include/i386/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_u_int8_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_u_int8_t.h" 3 4
# 82 "/usr/include/i386/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_u_int16_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_u_int16_t.h" 3 4
# 83 "/usr/include/i386/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_u_int32_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_u_int32_t.h" 3 4
# 84 "/usr/include/i386/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_u_int64_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_u_int64_t.h" 3 4
# 85 "/usr/include/i386/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_intptr_t.h" 3 4
# 1 "/usr/include/machine/types.h" 1 3 4
# 31 "/usr/include/sys/_types/_intptr_t.h" 2 3 4
# 93 "/usr/include/i386/types.h" 2 3 4
# 1 "/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uintptr_t.h" 3 4
# 94 "/usr/include/i386/types.h" 2 3 4
# 36 "/usr/include/machine/types.h" 2 3 4
# 31 "/usr/include/sys/_types/_rsize_t.h" 2 3 4
# 142 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_errno_t.h" 3 4
# 143 "/usr/include/string.h" 2 3 4
int memset_s(void * __s, unsigned long __smax, int __c, unsigned long __n);
# 1 "/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_ssize_t.h" 3 4
# 153 "/usr/include/string.h" 2 3 4
void * memmem(void const * __big, unsigned long __big_len, void const * __little, unsigned long __little_len);
void memset_pattern4(void * __b, void const * __pattern4, unsigned long __len);
void memset_pattern8(void * __b, void const * __pattern8, unsigned long __len);
void memset_pattern16(void * __b, void const * __pattern16, unsigned long __len);
char * strcasestr(char const * __big, char const * __little);
char * strnstr(char const * __big, char const * __little, unsigned long __len);
unsigned long strlcat(char * __dst, char const * __source, unsigned long __size);
unsigned long strlcpy(char * __dst, char const * __source, unsigned long __size);
void strmode(int __mode, char * __bp);
char * strsep(char * * __stringp, char const * __delim);
void swab(void const * restrict, void * restrict, long);
int timingsafe_bcmp(void const * __b1, void const * __b2, unsigned long __len);
# 1 "/usr/include/strings.h" 1 3 4
# 67 "/usr/include/strings.h" 3 4
int bcmp(void const * , void const * , unsigned long);
void bcopy(void const * , void * , unsigned long);
void bzero(void * , unsigned long);
char * index(char const * , int);
char * rindex(char const * , int);
int ffs(int);
int strcasecmp(char const * , char const * );
int strncasecmp(char const * , char const * , unsigned long);
int ffsl(long);
int ffsll(long long);
int fls(int);
int flsl(long);
int flsll(long long);
# 1 "/usr/include/string.h" 1 3 4
# 93 "/usr/include/strings.h" 2 3 4
# 1 "/usr/include/secure/_strings.h" 1 3 4
# 33 "/usr/include/secure/_strings.h" 3 4
# 1 "/usr/include/secure/_common.h" 1 3 4
# 34 "/usr/include/secure/_strings.h" 2 3 4
# 98 "/usr/include/strings.h" 2 3 4
# 181 "/usr/include/string.h" 2 3 4
# 190 "/usr/include/string.h" 3 4
# 1 "/usr/include/secure/_string.h" 1 3 4
# 191 "/usr/include/string.h" 2 3 4
# 54 "a.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/_stdio.h" 1 3 4
# 75 "/usr/include/_stdio.h" 3 4
# 1 "/usr/include/sys/_types/_va_list.h" 1 3 4
# 32 "/usr/include/sys/_types/_va_list.h" 3 4
# 76 "/usr/include/_stdio.h" 2 3 4
# 1 "/usr/include/sys/stdio.h" 1 3 4
# 37 "/usr/include/sys/stdio.h" 3 4
int renameat(int, char const * , int, char const * );
int renamex_np(char const * , char const * , unsigned int);
int renameatx_np(int, char const * , int, char const * , unsigned int);
# 80 "/usr/include/_stdio.h" 2 3 4
# 92 "/usr/include/_stdio.h" 3 4
# 126 "/usr/include/_stdio.h" 3 4
# 65 "/usr/include/stdio.h" 2 3 4
# 67 "/usr/include/stdio.h"
extern struct __sFILE * __stdinp;
# 68 "/usr/include/stdio.h"
extern struct __sFILE * __stdoutp;
# 69 "/usr/include/stdio.h"
extern struct __sFILE * __stderrp;
# 141 "/usr/include/stdio.h" 3 4
void clearerr(struct __sFILE * );
int fclose(struct __sFILE * );
int feof(struct __sFILE * );
int ferror(struct __sFILE * );
int fflush(struct __sFILE * );
int fgetc(struct __sFILE * );
int fgetpos(struct __sFILE * restrict, long long * );
char * fgets(char * restrict, int, struct __sFILE * );
struct __sFILE * fopen(char const * restrict __filename, char const * restrict __mode) __asm__("_fopen");
__attribute__((format(__printf__, 2, 3))) int fprintf(struct __sFILE * restrict, char const * restrict, ...);
int fputc(int, struct __sFILE * );
int fputs(char const * restrict, struct __sFILE * restrict) __asm__("_fputs");
unsigned long fread(void * restrict __ptr, unsigned long __size, unsigned long __nitems, struct __sFILE * restrict __stream);
struct __sFILE * freopen(char const * restrict, char const * restrict, struct __sFILE * restrict) __asm__("_freopen");
__attribute__((format(__scanf__, 2, 3))) int fscanf(struct __sFILE * restrict, char const * restrict, ...);
int fseek(struct __sFILE * , long, int);
int fsetpos(struct __sFILE * , long long const * );
long ftell(struct __sFILE * );
unsigned long fwrite(void const * restrict __ptr, unsigned long __size, unsigned long __nitems, struct __sFILE * restrict __stream) __asm__("_fwrite");
int getc(struct __sFILE * );
int getchar(void);
char * gets(char * );
void perror(char const * );
__attribute__((format(__printf__, 1, 2))) int printf(char const * restrict, ...);
int putc(int, struct __sFILE * );
int putchar(int);
int puts(char const * );
int remove(char const * );
int rename(char const * __old, char const * __new);
void rewind(struct __sFILE * );
__attribute__((format(__scanf__, 1, 2))) int scanf(char const * restrict, ...);
void setbuf(struct __sFILE * restrict, char * restrict);
int setvbuf(struct __sFILE * restrict, char * restrict, int, unsigned long);
__attribute__((format(__printf__, 2, 3))) int sprintf(char * restrict, char const * restrict, ...);
__attribute__((format(__scanf__, 2, 3))) int sscanf(char const * restrict, char const * restrict, ...);
struct __sFILE * tmpfile(void);
__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead."))) char * tmpnam(char * );
int ungetc(int, struct __sFILE * );
__attribute__((format(__printf__, 2, 0))) int vfprintf(struct __sFILE * restrict, char const * restrict, __builtin_va_list);
__attribute__((format(__printf__, 1, 0))) int vprintf(char const * restrict, __builtin_va_list);
__attribute__((format(__printf__, 2, 0))) int vsprintf(char * restrict, char const * restrict, __builtin_va_list);
# 204 "/usr/include/stdio.h" 3 4
char * ctermid(char * );
struct __sFILE * fdopen(int, char const * ) __asm__("_fdopen");
int fileno(struct __sFILE * );
# 231 "/usr/include/stdio.h" 3 4
int pclose(struct __sFILE * );
struct __sFILE * popen(char const * , char const * ) __asm__("_popen");
# 252 "/usr/include/stdio.h" 3 4
int __srget(struct __sFILE * );
__attribute__((format(__scanf__, 2, 0))) int __svfscanf(struct __sFILE * , char const * , __builtin_va_list);
int __swbuf(int, struct __sFILE * );
# 264 "/usr/include/stdio.h"
extern inline __attribute__((always_inline)) int __attribute__((gnu_inline)) __sputc(int _c, struct __sFILE * _p)
{
# 265 "/usr/include/stdio.h"
if(((--(_p->_w)) >= (0)) || (((_p->_w) >= (_p->_lbfsize)) && (((char)(_c)) != ((char)0xA)))) {
# 266 "/usr/include/stdio.h"
return (*((_p->_p)++)) = _c;
}
else {
# 268 "/usr/include/stdio.h"
return __swbuf(_c, _p);
}
}
# 289 "/usr/include/stdio.h" 3 4
void flockfile(struct __sFILE * );
int ftrylockfile(struct __sFILE * );
void funlockfile(struct __sFILE * );
int getc_unlocked(struct __sFILE * );
int getchar_unlocked(void);
int putc_unlocked(int, struct __sFILE * );
int putchar_unlocked(int);
int getw(struct __sFILE * );
int putw(int, struct __sFILE * );
__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead."))) char * tempnam(char const * __dir, char const * __prefix) __asm__("_tempnam");
# 328 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_off_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_off_t.h" 3 4
# 329 "/usr/include/stdio.h" 2 3 4
int fseeko(struct __sFILE * __stream, long long __offset, int __whence);
long long ftello(struct __sFILE * __stream);
__attribute__((format(__printf__, 3, 4))) int snprintf(char * restrict __str, unsigned long __size, char const * restrict __format, ...);
__attribute__((format(__scanf__, 2, 0))) int vfscanf(struct __sFILE * restrict __stream, char const * restrict __format, __builtin_va_list);
__attribute__((format(__scanf__, 1, 0))) int vscanf(char const * restrict __format, __builtin_va_list);
__attribute__((format(__printf__, 3, 0))) int vsnprintf(char * restrict __str, unsigned long __size, char const * restrict __format, __builtin_va_list);
__attribute__((format(__scanf__, 2, 0))) int vsscanf(char const * restrict __str, char const * restrict __format, __builtin_va_list);
# 355 "/usr/include/stdio.h" 3 4
__attribute__((format(__printf__, 2, 3))) int dprintf(int, char const * restrict, ...);
__attribute__((format(__printf__, 2, 0))) int vdprintf(int, char const * restrict, __builtin_va_list);
long getdelim(char * * restrict __linep, unsigned long * restrict __linecapp, int __delimiter, struct __sFILE * restrict __stream);
long getline(char * * restrict __linep, unsigned long * restrict __linecapp, struct __sFILE * restrict __stream);
struct __sFILE * fmemopen(void * restrict __buf, unsigned long __size, char const * restrict __mode);
struct __sFILE * open_memstream(char * * __bufp, unsigned long * __sizep);
# 371 "/usr/include/stdio.h"
extern int const sys_nerr;
# 372 "/usr/include/stdio.h"
extern char const * const sys_errlist[];
__attribute__((format(__printf__, 2, 3))) int asprintf(char * * restrict, char const * restrict, ...);
char * ctermid_r(char * );
char * fgetln(struct __sFILE * , unsigned long * );
char const * fmtcheck(char const * , char const * );
int fpurge(struct __sFILE * );
void setbuffer(struct __sFILE * , char * , int);
int setlinebuf(struct __sFILE * );
__attribute__((format(__printf__, 2, 0))) int vasprintf(char * * restrict, char const * restrict, __builtin_va_list);
struct __sFILE * zopen(char const * , char const * , int);
struct __sFILE * funopen(void const * , int (* )(void * , char * , int), int (* )(void * , char const * , int), long long (* )(void * , long long, int), int (* )(void * ));
# 411 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/secure/_stdio.h" 1 3 4
# 42 "/usr/include/secure/_stdio.h" 3 4
extern int __sprintf_chk(char * restrict, int, unsigned long, char const * restrict, ...);
# 52 "/usr/include/secure/_stdio.h" 3 4
extern int __snprintf_chk(char * restrict, unsigned long, int, unsigned long, char const * restrict, ...);
extern int __vsprintf_chk(char * restrict, int, unsigned long, char const * restrict, __builtin_va_list);
extern int __vsnprintf_chk(char * restrict, unsigned long, int, unsigned long, char const * restrict, __builtin_va_list);
# 412 "/usr/include/stdio.h" 2 3 4
# 55 "a.c" 2
# 1 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include/openacc.h" 1 3 4
# 35 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include/openacc.h" 3 4
# 1 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include/stddef.h" 1 3 4
# 149 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include/stddef.h" 3 4
# 328 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include/stddef.h" 3 4
# 426 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include/stddef.h" 3 4
# 437 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include/stddef.h" 3 4
# 36 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include/openacc.h" 2 3 4
# 50 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include/openacc.h" 3 4
__attribute__((nothrow)) int acc_get_num_devices(enum acc_device_t);
__attribute__((nothrow)) void acc_set_device_type(enum acc_device_t);
__attribute__((nothrow)) enum acc_device_t acc_get_device_type(void);
__attribute__((nothrow)) void acc_set_device_num(int, enum acc_device_t);
__attribute__((nothrow)) int acc_get_device_num(enum acc_device_t);
__attribute__((nothrow)) int acc_async_test(int);
__attribute__((nothrow)) int acc_async_test_all(void);
__attribute__((nothrow)) void acc_wait(int);
__attribute__((nothrow)) void acc_wait_async(int, int);
__attribute__((nothrow)) void acc_wait_all(void);
__attribute__((nothrow)) void acc_wait_all_async(int);
__attribute__((nothrow)) void acc_init(enum acc_device_t);
__attribute__((nothrow)) void acc_shutdown(enum acc_device_t);
__attribute__((nothrow)) int acc_on_device(enum acc_device_t __arg);
__attribute__((nothrow)) void * acc_malloc(unsigned long);
__attribute__((nothrow)) void acc_free(void * );
__attribute__((nothrow)) void * acc_copyin(void * , unsigned long);
__attribute__((nothrow)) void * acc_present_or_copyin(void * , unsigned long);
__attribute__((nothrow)) void * acc_create(void * , unsigned long);
__attribute__((nothrow)) void * acc_present_or_create(void * , unsigned long);
__attribute__((nothrow)) void acc_copyout(void * , unsigned long);
__attribute__((nothrow)) void acc_delete(void * , unsigned long);
__attribute__((nothrow)) void acc_update_device(void * , unsigned long);
__attribute__((nothrow)) void acc_update_self(void * , unsigned long);
__attribute__((nothrow)) void acc_map_data(void * , void * , unsigned long);
__attribute__((nothrow)) void acc_unmap_data(void * );
__attribute__((nothrow)) void * acc_deviceptr(void * );
__attribute__((nothrow)) void * acc_hostptr(void * );
__attribute__((nothrow)) int acc_is_present(void * , unsigned long);
__attribute__((nothrow)) void acc_memcpy_to_device(void * , void * , unsigned long);
__attribute__((nothrow)) void acc_memcpy_from_device(void * , void * , unsigned long);
__attribute__((nothrow)) void * acc_get_current_cuda_device(void);
__attribute__((nothrow)) void * acc_get_current_cuda_context(void);
__attribute__((nothrow)) void * acc_get_cuda_stream(int);
__attribute__((nothrow)) int acc_set_cuda_stream(int, void * );
# 56 "a.c" 2
# 1 "timer.h" 1
# 1 "/usr/include/stdlib.h" 1 3 4
# 65 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/sys/wait.h" 1 3 4
# 79 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/sys/_types/_pid_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_pid_t.h" 3 4
# 90 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/_types/_id_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_id_t.h" 3 4
# 91 "/usr/include/sys/wait.h" 2 3 4
# 109 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/sys/signal.h" 1 3 4
# 73 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 74 "/usr/include/sys/signal.h" 2 3 4
# 82 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/machine/signal.h" 1 3 4
# 32 "/usr/include/machine/signal.h" 3 4
# 1 "/usr/include/i386/signal.h" 1 3 4
# 39 "/usr/include/i386/signal.h" 3 4
# 33 "/usr/include/machine/signal.h" 2 3 4
# 83 "/usr/include/sys/signal.h" 2 3 4
# 146 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/machine/_mcontext.h" 1 3 4
# 29 "/usr/include/machine/_mcontext.h" 3 4
# 1 "/usr/include/i386/_mcontext.h" 1 3 4
# 34 "/usr/include/i386/_mcontext.h" 3 4
# 1 "/usr/include/mach/machine/_structs.h" 1 3 4
# 33 "/usr/include/mach/machine/_structs.h" 3 4
# 1 "/usr/include/mach/i386/_structs.h" 1 3 4
# 46 "/usr/include/mach/i386/_structs.h" 3 4
# 92 "/usr/include/mach/i386/_structs.h" 3 4
# 150 "/usr/include/mach/i386/_structs.h" 3 4
# 194 "/usr/include/mach/i386/_structs.h" 3 4
# 213 "/usr/include/mach/i386/_structs.h" 3 4
# 229 "/usr/include/mach/i386/_structs.h" 3 4
# 245 "/usr/include/mach/i386/_structs.h" 3 4
# 259 "/usr/include/mach/i386/_structs.h" 3 4
# 281 "/usr/include/mach/i386/_structs.h" 3 4
# 575 "/usr/include/mach/i386/_structs.h" 3 4
# 595 "/usr/include/mach/i386/_structs.h" 3 4
# 627 "/usr/include/mach/i386/_structs.h" 3 4
# 682 "/usr/include/mach/i386/_structs.h" 3 4
# 1140 "/usr/include/mach/i386/_structs.h" 3 4
# 1160 "/usr/include/mach/i386/_structs.h" 3 4
# 1188 "/usr/include/mach/i386/_structs.h" 3 4
# 34 "/usr/include/mach/machine/_structs.h" 2 3 4
# 35 "/usr/include/i386/_mcontext.h" 2 3 4
# 97 "/usr/include/i386/_mcontext.h" 3 4
# 156 "/usr/include/i386/_mcontext.h" 3 4
# 30 "/usr/include/machine/_mcontext.h" 2 3 4
# 147 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_pthread/_pthread_attr_t.h" 1 3 4
# 31 "/usr/include/sys/_pthread/_pthread_attr_t.h" 3 4
# 149 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_sigaltstack.h" 1 3 4
# 42 "/usr/include/sys/_types/_sigaltstack.h" 3 4
# 151 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_ucontext.h" 1 3 4
# 39 "/usr/include/sys/_types/_ucontext.h" 3 4
# 1 "/usr/include/machine/_mcontext.h" 1 3 4
# 40 "/usr/include/sys/_types/_ucontext.h" 2 3 4
# 152 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_sigset_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_sigset_t.h" 3 4
# 155 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_uid_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_uid_t.h" 3 4
# 157 "/usr/include/sys/signal.h" 2 3 4
# 269 "/usr/include/sys/signal.h" 3 4
# 331 "/usr/include/sys/signal.h" 3 4
# 348 "/usr/include/sys/signal.h" 3 4
# 367 "/usr/include/sys/signal.h" 3 4
# 389 "/usr/include/sys/signal.h" 3 4
void (* signal(int, void (* )(int)))(int);
# 110 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/resource.h" 1 3 4
# 72 "/usr/include/sys/resource.h" 3 4
# 1 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include/stdint.h" 1 3 4
# 9 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include/stdint.h" 3 4
# 1 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/stdint.h" 1 3 4
# 32 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/stdint.h" 3 4
# 1 "/usr/include/_types/_uint8_t.h" 1 3 4
# 31 "/usr/include/_types/_uint8_t.h" 3 4
# 33 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint16_t.h" 1 3 4
# 31 "/usr/include/_types/_uint16_t.h" 3 4
# 34 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint32_t.h" 1 3 4
# 31 "/usr/include/_types/_uint32_t.h" 3 4
# 35 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint64_t.h" 1 3 4
# 31 "/usr/include/_types/_uint64_t.h" 3 4
# 36 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/stdint.h" 2 3 4
# 67 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/stdint.h" 3 4
# 1 "/usr/include/_types/_intmax_t.h" 1 3 4
# 32 "/usr/include/_types/_intmax_t.h" 3 4
# 68 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uintmax_t.h" 1 3 4
# 32 "/usr/include/_types/_uintmax_t.h" 3 4
# 69 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include-fixed/stdint.h" 2 3 4
# 10 "/usr/local/Cellar/gcc/7.1.0/lib/gcc/7/gcc/x86_64-apple-darwin16.5.0/7.1.0/include/stdint.h" 2 3 4
# 73 "/usr/include/sys/resource.h" 2 3 4
# 1 "/usr/include/sys/_types/_timeval.h" 1 3 4
# 34 "/usr/include/sys/_types/_timeval.h" 3 4
# 81 "/usr/include/sys/resource.h" 2 3 4
# 89 "/usr/include/sys/resource.h" 3 4
# 152 "/usr/include/sys/resource.h" 3 4
# 163 "/usr/include/sys/resource.h" 3 4
# 193 "/usr/include/sys/resource.h" 3 4
# 365 "/usr/include/sys/resource.h" 3 4
# 393 "/usr/include/sys/resource.h" 3 4
# 424 "/usr/include/sys/resource.h" 3 4
int getpriority(int, unsigned int);
int getiopolicy_np(int, int);
int getrlimit(int, struct rlimit * ) __asm__("_getrlimit");
int getrusage(int, struct rusage * );
int setpriority(int, unsigned int, int);
int setiopolicy_np(int, int, int);
int setrlimit(int, struct rlimit const * ) __asm__("_setrlimit");
# 111 "/usr/include/sys/wait.h" 2 3 4
# 186 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/machine/endian.h" 1 3 4
# 35 "/usr/include/machine/endian.h" 3 4
# 1 "/usr/include/i386/endian.h" 1 3 4
# 99 "/usr/include/i386/endian.h" 3 4
# 1 "/usr/include/sys/_endian.h" 1 3 4
# 130 "/usr/include/sys/_endian.h" 3 4
# 1 "/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 66 "/usr/include/libkern/_OSByteOrder.h" 3 4
# 1 "/usr/include/libkern/i386/_OSByteOrder.h" 1 3 4
# 44 "/usr/include/libkern/i386/_OSByteOrder.h" 3 4
# 44 "/usr/include/libkern/i386/_OSByteOrder.h"
static inline unsigned short _OSSwapInt16(unsigned short _data)
{
# 50 "/usr/include/libkern/i386/_OSByteOrder.h"
return (unsigned short)((_data << (8)) | (_data >> (8)));
}
# 53 "/usr/include/libkern/i386/_OSByteOrder.h"
static inline unsigned int _OSSwapInt32(unsigned int _data)
{
# 62 "/usr/include/libkern/i386/_OSByteOrder.h"
__asm__("bswap   %0" : "+r"(_data));
# 63 "/usr/include/libkern/i386/_OSByteOrder.h"
return _data;
}
# 91 "/usr/include/libkern/i386/_OSByteOrder.h" 3 4
# 91 "/usr/include/libkern/i386/_OSByteOrder.h"
static inline unsigned long long _OSSwapInt64(unsigned long long _data)
{
# 97 "/usr/include/libkern/i386/_OSByteOrder.h"
__asm__("bswap   %0" : "+r"(_data));
# 98 "/usr/include/libkern/i386/_OSByteOrder.h"
return _data;
}
# 67 "/usr/include/libkern/_OSByteOrder.h" 2 3 4
# 131 "/usr/include/sys/_endian.h" 2 3 4
# 100 "/usr/include/i386/endian.h" 2 3 4
# 36 "/usr/include/machine/endian.h" 2 3 4
# 187 "/usr/include/sys/wait.h" 2 3 4
# 247 "/usr/include/sys/wait.h" 3 4
int wait(int * ) __asm__("_wait");
int waitpid(int, int * , int) __asm__("_waitpid");
int waitid(enum anon_type_7_idtype_t, unsigned int, struct __siginfo * , int) __asm__("_waitid");
int wait3(int * , int, struct rusage * );
int wait4(int, int * , int, struct rusage * );
# 66 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/alloca.h" 1 3 4
# 31 "/usr/include/alloca.h" 3 4
void * alloca(unsigned long);
# 68 "/usr/include/stdlib.h" 2 3 4
# 76 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/sys/_types/_ct_rune_t.h" 1 3 4
# 32 "/usr/include/sys/_types/_ct_rune_t.h" 3 4
# 77 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_rune_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_rune_t.h" 3 4
# 78 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 81 "/usr/include/stdlib.h" 2 3 4
# 117 "/usr/include/stdlib.h" 3 4
# 117 "/usr/include/stdlib.h"
extern int __mb_cur_max;
# 135 "/usr/include/stdlib.h" 3 4
__attribute__((noreturn)) void abort(void);
__attribute__((const)) int abs(int);
int atexit(void (* )(void));
double atof(char const * );
int atoi(char const * );
long atol(char const * );
long long atoll(char const * );
void * bsearch(void const * __key, void const * __base, unsigned long __nel, unsigned long __width, int (* __compar)(void const * , void const * ));
__attribute__((warn_unused_result, alloc_size(1, 2))) void * calloc(unsigned long __count, unsigned long __size);
__attribute__((const)) struct anon_type_10_div_t div(int, int);
__attribute__((noreturn)) void exit(int);
void free(void * );
char * getenv(char const * );
__attribute__((const)) long labs(long);
__attribute__((const)) struct anon_type_11_ldiv_t ldiv(long, long);
long long llabs(long long);
struct anon_type_12_lldiv_t lldiv(long long, long long);
__attribute__((warn_unused_result, alloc_size(1))) void * malloc(unsigned long __size);
int mblen(char const * __s, unsigned long __n);
unsigned long mbstowcs(int * restrict, char const * restrict, unsigned long);
int mbtowc(int * restrict, char const * restrict, unsigned long);
int posix_memalign(void * * __memptr, unsigned long __alignment, unsigned long __size);
void qsort(void * __base, unsigned long __nel, unsigned long __width, int (* __compar)(void const * , void const * ));
int rand(void);
__attribute__((warn_unused_result, alloc_size(2))) void * realloc(void * __ptr, unsigned long __size);
void srand(unsigned int);
double strtod(char const * , char * * ) __asm__("_strtod");
float strtof(char const * , char * * ) __asm__("_strtof");
long strtol(char const * __str, char * * __endptr, int __base);
long double strtold(char const * , char * * );
long long strtoll(char const * __str, char * * __endptr, int __base);
unsigned long strtoul(char const * __str, char * * __endptr, int __base);
unsigned long long strtoull(char const * __str, char * * __endptr, int __base);
# 192 "/usr/include/stdlib.h" 3 4
int system(char const * ) __asm__("_system");
unsigned long wcstombs(char * restrict, int const * restrict, unsigned long);
int wctomb(char * , int);
__attribute__((noreturn)) void _Exit(int);
long a64l(char const * );
double drand48(void);
char * ecvt(double, int, int * restrict, int * restrict);
double erand48(unsigned short [3]);
char * fcvt(double, int, int * restrict, int * restrict);
char * gcvt(double, int, char * );
int getsubopt(char * * , char * const * , char * * );
int grantpt(int);
char * initstate(unsigned int, char * , unsigned long);
long jrand48(unsigned short [3]);
char * l64a(long);
void lcong48(unsigned short [7]);
long lrand48(void);
char * mktemp(char * );
int mkstemp(char * );
long mrand48(void);
long nrand48(unsigned short [3]);
int posix_openpt(int);
char * ptsname(int);
int ptsname_r(int fildes, char * buffer, unsigned long buflen);
int putenv(char * ) __asm__("_putenv");
long random(void);
int rand_r(unsigned int * );
char * realpath(char const * restrict, char * restrict) __asm__("_realpath$DARWIN_EXTSN");
unsigned short * seed48(unsigned short [3]);
int setenv(char const * __name, char const * __value, int __overwrite) __asm__("_setenv");
void setkey(char const * ) __asm__("_setkey");
char * setstate(char const * );
void srand48(long);
void srandom(unsigned int);
int unlockpt(int);
int unsetenv(char const * ) __asm__("_unsetenv");
# 266 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/sys/_types/_dev_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_dev_t.h" 3 4
# 267 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_mode_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_mode_t.h" 3 4
# 268 "/usr/include/stdlib.h" 2 3 4
unsigned int arc4random(void);
void arc4random_addrandom(unsigned char * , int);
void arc4random_buf(void * __buf, unsigned long __nbytes);
void arc4random_stir(void);
unsigned int arc4random_uniform(unsigned int __upper_bound);
char * cgetcap(char * , char const * , int);
int cgetclose(void);
int cgetent(char * * , char * * , char const * );
int cgetfirst(char * * , char * * );
int cgetmatch(char const * , char const * );
int cgetnext(char * * , char * * );
int cgetnum(char * , char const * , long * );
int cgetset(char const * );
int cgetstr(char * , char const * , char * * );
int cgetustr(char * , char const * , char * * );
__attribute__((deprecated)) int daemon(int, int) __asm__("_daemon$1050");
char * devname(int, unsigned short);
char * devname_r(int, unsigned short, char * buf, int len);
char * getbsize(int * , long * );
int getloadavg(double [], int);
char const * getprogname(void);
int heapsort(void * __base, unsigned long __nel, unsigned long __width, int (* __compar)(void const * , void const * ));
int mergesort(void * __base, unsigned long __nel, unsigned long __width, int (* __compar)(void const * , void const * ));
void psort(void * __base, unsigned long __nel, unsigned long __width, int (* __compar)(void const * , void const * ));
void psort_r(void * __base, unsigned long __nel, unsigned long __width, void * , int (* __compar)(void * , void const * , void const * ));
void qsort_r(void * __base, unsigned long __nel, unsigned long __width, void * , int (* __compar)(void * , void const * , void const * ));
int radixsort(unsigned char const * * __base, int __nel, unsigned char const * __table, unsigned int __endbyte);
void setprogname(char const * );
int sradixsort(unsigned char const * * __base, int __nel, unsigned char const * __table, unsigned int __endbyte);
void sranddev(void);
void srandomdev(void);
__attribute__((alloc_size(2))) void * reallocf(void * __ptr, unsigned long __size);
long long strtoq(char const * __str, char * * __endptr, int __base);
unsigned long long strtouq(char const * __str, char * * __endptr, int __base);
# 346 "/usr/include/stdlib.h"
extern char * suboptarg;
__attribute__((alloc_size(1))) void * valloc(unsigned long);
# 5 "timer.h" 2
# 1 "/usr/include/sys/time.h" 1 3 4
# 75 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/sys/_types/_fd_def.h" 1 3 4
# 48 "/usr/include/sys/_types/_fd_def.h" 3 4
# 55 "/usr/include/sys/_types/_fd_def.h"
static inline int __darwin_fd_isset(int _n, struct fd_set const * _p)
{
# 58 "/usr/include/sys/_types/_fd_def.h"
return (*((_p->fds_bits) + (((unsigned long)(_n)) / ((sizeof(int)) * (8))))) & ((int)(((unsigned long)(1)) << (((unsigned long)(_n)) % ((sizeof(int)) * (8)))));
}
# 76 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_timespec.h" 1 3 4
# 33 "/usr/include/sys/_types/_timespec.h" 3 4
# 77 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_timeval64.h" 1 3 4
# 34 "/usr/include/sys/_types/_timeval64.h" 3 4
# 81 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_time_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_time_t.h" 3 4
# 85 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_suseconds_t.h" 3 4
# 86 "/usr/include/sys/time.h" 2 3 4
# 110 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/sys/_types/_fd_setsize.h" 1 3 4
# 111 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_set.h" 1 3 4
# 112 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_clr.h" 1 3 4
# 113 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_isset.h" 1 3 4
# 114 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_zero.h" 1 3 4
# 115 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_copy.h" 1 3 4
# 119 "/usr/include/sys/time.h" 2 3 4
# 129 "/usr/include/sys/time.h" 3 4
# 172 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 68 "/usr/include/time.h" 3 4
# 1 "/usr/include/sys/_types/_clock_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_clock_t.h" 3 4
# 69 "/usr/include/time.h" 2 3 4
# 97 "/usr/include/time.h" 3 4
# 97 "/usr/include/time.h"
extern char * tzname[];
# 100 "/usr/include/time.h"
extern int getdate_err;
# 102 "/usr/include/time.h"
extern long timezone;
# 104 "/usr/include/time.h"
extern int daylight;
char * asctime(struct tm const * );
unsigned long clock(void) __asm__("_clock");
char * ctime(long const * );
double difftime(long, long);
struct tm * getdate(char const * );
struct tm * gmtime(long const * );
struct tm * localtime(long const * );
long mktime(struct tm * ) __asm__("_mktime");
unsigned long strftime(char * restrict, unsigned long, char const * restrict, struct tm const * restrict) __asm__("_strftime");
char * strptime(char const * restrict, char const * restrict, struct tm * restrict) __asm__("_strptime");
long time(long * );
void tzset(void);
char * asctime_r(struct tm const * restrict, char * restrict);
char * ctime_r(long const * , char * );
struct tm * gmtime_r(long const * restrict, struct tm * restrict);
struct tm * localtime_r(long const * restrict, struct tm * restrict);
long posix2time(long);
void tzsetwall(void);
long time2posix(long);
long timelocal(struct tm * const);
long timegm(struct tm * const);
int nanosleep(struct timespec const * __rqtp, struct timespec * __rmtp) __asm__("_nanosleep");
# 152 "/usr/include/time.h" 3 4
int clock_getres(enum anon_type_13_clockid_t __clock_id, struct timespec * __res);
int clock_gettime(enum anon_type_13_clockid_t __clock_id, struct timespec * __tp);
unsigned long long clock_gettime_nsec_np(enum anon_type_13_clockid_t __clock_id);
int clock_settime(enum anon_type_13_clockid_t __clock_id, struct timespec const * __tp);
# 185 "/usr/include/sys/time.h" 2 3 4
int adjtime(struct timeval const * , struct timeval * );
int futimes(int, struct timeval const * );
int lutimes(char const * , struct timeval const * );
int settimeofday(struct timeval const * , struct timezone const * );
int getitimer(int, struct itimerval * );
int gettimeofday(struct timeval * restrict, void * restrict);
# 1 "/usr/include/sys/_select.h" 1 3 4
# 39 "/usr/include/sys/_select.h" 3 4
int select(int, struct fd_set * restrict, struct fd_set * restrict, struct fd_set * restrict, struct timeval * restrict) __asm__("_select$1050");
# 200 "/usr/include/sys/time.h" 2 3 4
int setitimer(int, struct itimerval const * restrict, struct itimerval * restrict);
int utimes(char const * , struct timeval const * );
# 11 "timer.h" 2
# 18 "timer.h" 
# 18 "timer.h"
struct timeval timerStart;
# 21 "timer.h"
void StartTimer()
{
# 33 "timer.h" 
# 33 "timer.h" 3 4
# 33 "timer.h" 
# 33 "timer.h"
gettimeofday(&(timerStart), (void * )(0));
}
# 38 "timer.h"
double GetTimer()
{
# 45 "timer.h"
struct timeval timerStop;
# 45 "timer.h"
struct timeval timerElapsed;
# 46 "timer.h" 3 4
# 46 "timer.h" 
# 46 "timer.h"
gettimeofday(&(timerStop), (void * )(0));
# 47 "timer.h" 3 4
# 47 "timer.h"
do {
{
# 47 "timer.h" 
# 47 "timer.h" 3 4
# 47 "timer.h" 
# 47 "timer.h" 3 4
# 47 "timer.h" 
# 47 "timer.h" 3 4
# 47 "timer.h"
((&(timerElapsed))->tv_sec) = (((&(timerStop))->tv_sec) - ((&(timerStart))->tv_sec));
# 47 "timer.h" 
# 47 "timer.h" 3 4
# 47 "timer.h" 
# 47 "timer.h" 3 4
# 47 "timer.h" 
# 47 "timer.h" 3 4
# 47 "timer.h"
((&(timerElapsed))->tv_usec) = (((&(timerStop))->tv_usec) - ((&(timerStart))->tv_usec));
# 47 "timer.h"
if(((&(timerElapsed))->tv_usec) < (0)) {
# 47 "timer.h" 
# 47 "timer.h" 3 4
# 47 "timer.h"
((&(timerElapsed))->tv_sec)--;
# 47 "timer.h" 
# 47 "timer.h" 3 4
# 47 "timer.h"
((&(timerElapsed))->tv_usec) += (0xF4240);
}
}
}
while(0);
# 48 "timer.h"
return (((&(timerElapsed))->tv_sec) * (1000.0)) + (((&(timerElapsed))->tv_usec) / (1000.0));
}
# 57 "a.c" 2
# 63 "a.c"
double A[4096][4096];
# 64 "a.c"
double Anew[4096][4096];
# 66 "a.c"
int main(int argc, char * * argv)
{
# 68 "a.c"
printf("aa");
{
# 70 "a.c"
int b;
# 72 "a.c"
double * * AA;
# 73 "a.c"
double AAnew[3][3];
# 74 "a.c"
int a;
# 75 "a.c"
int const n = 4096;
# 76 "a.c"
int const m = 4096;
# 90 "a.c" 
{
# 90 "a.c"
int const iter_max = 1000;
# 94 "a.c" 3 4
# 94 "a.c" 
# 94 "a.c" 3 4
# 94 "a.c" 
# 94 "a.c" 3 4
# 94 "a.c" 
# 94 "a.c" 3 4
# 94 "a.c" 
# 94 "a.c"
__builtin___memset_chk(A, 0, (n * m) * (sizeof(double)), __builtin_object_size(A, 0));
# 96 "a.c" 3 4
# 96 "a.c" 
# 96 "a.c" 3 4
# 96 "a.c" 
# 96 "a.c" 3 4
# 96 "a.c" 
# 96 "a.c" 3 4
# 96 "a.c" 
# 96 "a.c"
__builtin___memset_chk(Anew, 0, (n * m) * (sizeof(double)), __builtin_object_size(Anew, 0));
{
# 98 "a.c"
double const tol = 1.0e-6;
# 99 "a.c"
double error = 1.0;
{
# 102 "a.c"
int j;
#pragma acc kernels
# 103 "a.c"
for(j = (0); j < n; j++) {
{
# 105 "a.c"
(A[j][0]) = (1.0);
# 106 "a.c"
(Anew[j][0]) = (1.0);
}
}
}
# 108 "a.c"
(AAnew[0][0]) = (1);
# 111 "a.c"
printf("Jacobi relaxation Calculation: %d x %d mesh\n", n, m);
# 113 "a.c"
StartTimer();
{
# 114 "a.c"
int iter = 0;
# 115 "a.c"
int l;
# 116 "a.c"
for(l = (0); l < (1); l++) {
{
# 117 "a.c"
while((error > tol) && (iter < iter_max)) {
{
# 120 "a.c"
error = (0.0);
{
# 122 "a.c"
int j;
#pragma acc kernels
# 123 "a.c"
for(j = (1); j < (n - (1)); j++) {
{
{
# 125 "a.c"
int i;
# 125 "a.c"
for(i = (1); i < (m - (1)); i++) {
{
# 127 "a.c"
(Anew[j][i]) = ((0.25) * ((((A[j][i + (1)]) + (A[j][i - (1)])) + (A[j - (1)][i])) + (A[j + (1)][i])));
# 129 "a.c"
error = (fmax(error, fabs((Anew[j][i]) - (A[j][i]))));
}
}
}
}
}
}
# 132 "a.c"
(AAnew[0][0]) = (1);
{
# 134 "a.c"
int j;
#pragma acc kernels
# 135 "a.c"
for(j = (1); j < (n - (1)); j++) {
{
{
# 137 "a.c"
int i;
# 137 "a.c"
for(i = (1); i < (m - (1)); i++) {
{
# 139 "a.c"
(A[j][i]) = (Anew[j][i]);
}
}
}
# 142 "a.c"
(AAnew[0][0]) = (1);
}
}
}
# 147 "a.c"
(AAnew[0][0]) = (1);
# 148 "a.c"
if((iter % (100)) == (0)) {
# 148 "a.c"
printf("%5d, %0.6f\n", iter, error);
}
# 149 "a.c"
iter++;
}
}
# 151 "a.c"
(A[0][0]) = (A[0][0]);
}
}
#pragma acc update host(A,Anew)
{
# 156 "a.c"
int cou = 0;
{
# 157 "a.c"
int i;
# 157 "a.c"
for(i = (0); i < n; i++) {
{
{
# 158 "a.c"
int j;
# 158 "a.c"
for(j = (0); j < m; j++) {
{
# 159 "a.c"
if((A[i][j]) > (0.1)) {
# 160 "a.c"
printf("%f ", A[i][j]);
# 161 "a.c"
cou++;
}
# 163 "a.c"
if((A[i][j]) > (0.1)) {
# 164 "a.c"
printf("%f ", Anew[i][j]);
# 165 "a.c"
cou++;
}
}
}
}
}
}
}
{
# 169 "a.c"
double runtime = GetTimer();
# 171 "a.c"
printf(" total: %f s %d\n", runtime / (1000), cou);
# 173 "a.c"
exit(0);
}
}
}
}
}
}
}
