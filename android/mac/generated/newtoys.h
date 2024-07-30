USE_TOYBOX(NEWTOY(toybox, 0, TOYFLAG_STAYROOT|TOYFLAG_NOHELP))
USE_SH(OLDTOY(-bash, sh, 0))
USE_SH(OLDTOY(-sh, sh, 0))
USE_SH(OLDTOY(-toysh, sh, 0))
USE_SH(OLDTOY(., source, TOYFLAG_NOFORK))
USE_TRUE(OLDTOY(:, true, TOYFLAG_NOFORK|TOYFLAG_NOHELP))
USE_TEST_GLUE(OLDTOY([, test, TOYFLAG_BIN|TOYFLAG_MAYFORK|TOYFLAG_NOHELP))
USE_SH(OLDTOY([[, test, TOYFLAG_NOFORK|TOYFLAG_NOHELP))
USE_ACPI(NEWTOY(acpi, "abctV", TOYFLAG_USR|TOYFLAG_BIN))
USE_GROUPADD(OLDTOY(addgroup, groupadd, TOYFLAG_NEEDROOT|TOYFLAG_SBIN))
USE_USERADD(OLDTOY(adduser, useradd, TOYFLAG_NEEDROOT|TOYFLAG_UMASK|TOYFLAG_SBIN))
USE_ARCH(NEWTOY(arch, 0, TOYFLAG_USR|TOYFLAG_BIN))
USE_ARP(NEWTOY(arp, "vi:nDsdap:A:H:[+Ap][!sd]", TOYFLAG_USR|TOYFLAG_BIN))
USE_ARPING(NEWTOY(arping, "<1>1s:I:w#<0c#<0AUDbqf[+AU][+Df]", TOYFLAG_USR|TOYFLAG_SBIN))
USE_ASCII(NEWTOY(ascii, 0, TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_LINEBUF))
USE_AWK(NEWTOY(awk, "F:v*f*bc", TOYFLAG_USR|TOYFLAG_BIN))
USE_BASE32(NEWTOY(base32, "diw#<0=76[!dw]", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_LINEBUF))
USE_BASE64(NEWTOY(base64, "diw#<0=76[!dw]", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_LINEBUF))
USE_BASENAME(NEWTOY(basename, "^<1as:", TOYFLAG_USR|TOYFLAG_BIN))
USE_SH(OLDTOY(bash, sh, TOYFLAG_BIN))
USE_BC(NEWTOY(bc, "i(interactive)l(mathlib)q(quiet)s(standard)w(warn)", TOYFLAG_USR|TOYFLAG_BIN))
USE_BLKDISCARD(NEWTOY(blkdiscard, "<1>1f(force)l(length)#<0o(offset)#<0s(secure)z(zeroout)[!sz]", TOYFLAG_BIN))
USE_BLKID(NEWTOY(blkid, "ULo:s*[!LU]", TOYFLAG_BIN|TOYFLAG_LINEBUF))
USE_BLOCKDEV(NEWTOY(blockdev, "<1>1(setro)(setrw)(getro)(getss)(getbsz)(setbsz)#<0(getsz)(getsize)(getsize64)(getra)(setra)#<0(flushbufs)(rereadpt)",TOYFLAG_SBIN))
USE_BOOTCHARTD(NEWTOY(bootchartd, 0, TOYFLAG_STAYROOT|TOYFLAG_USR|TOYFLAG_BIN))
USE_BRCTL(NEWTOY(brctl, "<1", TOYFLAG_USR|TOYFLAG_SBIN))
USE_BUNZIP2(NEWTOY(bunzip2, "cftkv", TOYFLAG_USR|TOYFLAG_BIN))
USE_BZCAT(NEWTOY(bzcat, 0, TOYFLAG_USR|TOYFLAG_BIN))
USE_CAL(NEWTOY(cal, ">3h", TOYFLAG_USR|TOYFLAG_BIN))
USE_CAT(NEWTOY(cat, "uvte", TOYFLAG_BIN))
USE_SH(NEWTOY(cd, ">1LP[-LP]", TOYFLAG_NOFORK))
USE_CHATTR(NEWTOY(chattr, "?p#v#R", TOYFLAG_BIN))
USE_CHCON(NEWTOY(chcon, "<2hvR", TOYFLAG_USR|TOYFLAG_BIN))
USE_CHGRP(NEWTOY(chgrp, "<2h(no-dereference)PLHRfv[-HLP]", TOYFLAG_BIN))
USE_CHMOD(NEWTOY(chmod, "<2?vfR[-vf]", TOYFLAG_BIN))
USE_CHOWN(OLDTOY(chown, chgrp, TOYFLAG_BIN))
USE_CHROOT(NEWTOY(chroot, "^<1", TOYFLAG_USR|TOYFLAG_SBIN|TOYFLAG_ARGFAIL(125)))
USE_CHRT(NEWTOY(chrt, "^mp#<0iRbrfo[!ibrfo]", TOYFLAG_USR|TOYFLAG_BIN))
USE_CHSH(NEWTOY(chsh, ">1R:s:a", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_STAYROOT))
USE_CHVT(NEWTOY(chvt, "<1>1", TOYFLAG_USR|TOYFLAG_BIN))
USE_CKSUM(NEWTOY(cksum, "HIPLN", TOYFLAG_BIN))
USE_CLEAR(NEWTOY(clear, NULL, TOYFLAG_USR|TOYFLAG_BIN))
USE_CMP(NEWTOY(cmp, "<1>4ls(silent)(quiet)n#<1[!ls]", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_ARGFAIL(2)))
USE_COMM(NEWTOY(comm, "<2>2321", TOYFLAG_USR|TOYFLAG_BIN))
USE_COUNT(NEWTOY(count, "<0>0l", TOYFLAG_USR|TOYFLAG_BIN))
USE_CP(NEWTOY(cp, "<1(preserve):;D(parents)RHLPprudaslv(verbose)nF(remove-destination)fit:T[-HLPd][-niu][+Rr]", TOYFLAG_BIN))
USE_CPIO(NEWTOY(cpio, "(ignore-devno)(renumber-inodes)(quiet)(no-preserve-owner)R(owner):md(make-directories)uLH:p|i|t|F:v(verbose)o|[!pio][!pot][!pF]", TOYFLAG_BIN))
USE_CRC32(NEWTOY(crc32, 0, TOYFLAG_BIN))
USE_CROND(NEWTOY(crond, "fbSl#<0=8d#<0L:c:[-bf][-LS][-ld]", TOYFLAG_USR|TOYFLAG_SBIN|TOYFLAG_NEEDROOT))
USE_CRONTAB(NEWTOY(crontab, "c:u:elr[!elr]", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_STAYROOT))
USE_CSPLIT(NEWTOY(csplit, "<2skf:n#", TOYFLAG_USR|TOYFLAG_BIN))
USE_CUT(NEWTOY(cut, "b*|c*|f*|F(regex-fields)*|C*|O(output-delimiter):d:sD(allow-duplicates)n[!cbfF]", TOYFLAG_USR|TOYFLAG_BIN))
USE_DATE(NEWTOY(date, ">1d:D:I(iso-8601):;r:s:u(utc)[!dr]", TOYFLAG_BIN))
USE_DD(NEWTOY(dd, 0, TOYFLAG_USR|TOYFLAG_BIN))
USE_DEALLOCVT(NEWTOY(deallocvt, ">1", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_NEEDROOT))
USE_SH(NEWTOY(declare, "pAailunxr", TOYFLAG_NOFORK))
USE_GROUPDEL(OLDTOY(delgroup, groupdel, TOYFLAG_NEEDROOT|TOYFLAG_SBIN))
USE_USERDEL(OLDTOY(deluser, userdel, TOYFLAG_NEEDROOT|TOYFLAG_SBIN))
USE_DEMO_MANY_OPTIONS(NEWTOY(demo_many_options, "ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba", TOYFLAG_BIN))
USE_DEMO_NUMBER(NEWTOY(demo_number, "D#=3<3M#<0hcdbs", TOYFLAG_BIN))
USE_DEMO_SCANKEY(NEWTOY(demo_scankey, 0, TOYFLAG_BIN))
USE_DEMO_UTF8TOWC(NEWTOY(demo_utf8towc, 0, TOYFLAG_USR|TOYFLAG_BIN))
USE_DEVMEM(NEWTOY(devmem, "<1>3", TOYFLAG_USR|TOYFLAG_SBIN))
USE_DF(NEWTOY(df, "HPkhit*a[-HPh]", TOYFLAG_BIN))
USE_DHCP(NEWTOY(dhcp, "V:H:F:x*r:O*A#<0=20T#<0=3t#<0=3s:p:i:SBRCaovqnbf", TOYFLAG_SBIN|TOYFLAG_ROOTONLY))
USE_DHCP6(NEWTOY(dhcp6, "r:A#<0T#<0t#<0s:p:i:SRvqnbf", TOYFLAG_SBIN|TOYFLAG_ROOTONLY))
USE_DHCPD(NEWTOY(dhcpd, ">1P#<0>65535fi:S46[!46]", TOYFLAG_SBIN|TOYFLAG_ROOTONLY))
USE_DIFF(NEWTOY(diff, "<2>2(unchanged-line-format):;(old-line-format):;(new-line-format):;(color)(strip-trailing-cr)B(ignore-blank-lines)d(minimal)b(ignore-space-change)ut(expand-tabs)w(ignore-all-space)i(ignore-case)T(initial-tab)s(report-identical-files)q(brief)a(text)S(starting-file):F(show-function-line):;L(label)*N(new-file)r(recursive)U(unified)#<0=3", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_ARGFAIL(2)))
USE_DIRNAME(NEWTOY(dirname, "<1", TOYFLAG_USR|TOYFLAG_BIN))
USE_DMESG(NEWTOY(dmesg, "w(follow)CSTtrs#<1n#c[!Ttr][!Cc][!Sw]", TOYFLAG_BIN))
USE_DNSDOMAINNAME(NEWTOY(dnsdomainname, ">0", TOYFLAG_BIN))
USE_DOS2UNIX(NEWTOY(dos2unix, 0, TOYFLAG_BIN))
USE_DU(NEWTOY(du, "d#<0=-1hmlcaHkKLsxb[-HL][-kKmh]", TOYFLAG_USR|TOYFLAG_BIN))
USE_DUMPLEASES(NEWTOY(dumpleases, ">0arf:[!ar]", TOYFLAG_USR|TOYFLAG_BIN))
USE_ECHO(NEWTOY(echo, "^?Een[-eE]", TOYFLAG_BIN|TOYFLAG_MAYFORK|TOYFLAG_LINEBUF))
USE_EGREP(OLDTOY(egrep, grep, TOYFLAG_BIN|TOYFLAG_ARGFAIL(2)|TOYFLAG_LINEBUF|TOYFLAG_AUTOCONF))
USE_EJECT(NEWTOY(eject, ">1stT[!tT]", TOYFLAG_USR|TOYFLAG_BIN))
USE_ENV(NEWTOY(env, "^e:i0u*", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_ARGFAIL(125)))
USE_SH(NEWTOY(eval, 0, TOYFLAG_NOFORK))
USE_SH(NEWTOY(exec, "^cla:", TOYFLAG_NOFORK))
USE_SH(NEWTOY(exit, 0, TOYFLAG_NOFORK))
USE_EXPAND(NEWTOY(expand, "t*", TOYFLAG_USR|TOYFLAG_BIN))
USE_SH(NEWTOY(export, "np", TOYFLAG_NOFORK))
USE_EXPR(NEWTOY(expr, 0, TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_ARGFAIL(2)))
USE_FACTOR(NEWTOY(factor, "?hx", TOYFLAG_USR|TOYFLAG_BIN))
USE_FALLOCATE(NEWTOY(fallocate, ">1l#|o#", TOYFLAG_USR|TOYFLAG_BIN))
USE_FALSE(NEWTOY(false, NULL, TOYFLAG_BIN|TOYFLAG_NOHELP|TOYFLAG_MAYFORK))
USE_FDISK(NEWTOY(fdisk, "C#<0H#<0S#<0b#<512ul", TOYFLAG_SBIN))
USE_FGREP(OLDTOY(fgrep, grep, TOYFLAG_BIN|TOYFLAG_ARGFAIL(2)|TOYFLAG_LINEBUF|TOYFLAG_AUTOCONF))
USE_FILE(NEWTOY(file, "<1b(brief)hLs[!hL]", TOYFLAG_USR|TOYFLAG_BIN))
USE_FIND(NEWTOY(find, "?^HL[-HL]", TOYFLAG_USR|TOYFLAG_BIN))
USE_FLOCK(NEWTOY(flock, "<1>1nsux[-sux]", TOYFLAG_USR|TOYFLAG_BIN))
USE_FMT(NEWTOY(fmt, "w#<0=75", TOYFLAG_USR|TOYFLAG_BIN))
USE_FOLD(NEWTOY(fold, "bsw#<1=80", TOYFLAG_USR|TOYFLAG_BIN))
USE_FREE(NEWTOY(free, "hgmkb[!hgmkb]", TOYFLAG_USR|TOYFLAG_BIN))
USE_FREERAMDISK(NEWTOY(freeramdisk, "<1>1", TOYFLAG_SBIN|TOYFLAG_NEEDROOT))
USE_FSCK(NEWTOY(fsck, "?t:ANPRTVsC#", TOYFLAG_USR|TOYFLAG_BIN))
USE_FSFREEZE(NEWTOY(fsfreeze, "<1>1f|u|[!fu]", TOYFLAG_USR|TOYFLAG_SBIN))
USE_FSTYPE(NEWTOY(fstype, "<1", TOYFLAG_BIN|TOYFLAG_LINEBUF))
USE_FSYNC(NEWTOY(fsync, "<1d", TOYFLAG_BIN))
USE_FTPGET(NEWTOY(ftpget, "<2>3P:cp:u:vgslLmMdD[-gs][!gslLmMdD][!clL]", TOYFLAG_USR|TOYFLAG_BIN))
USE_FTPPUT(OLDTOY(ftpput, ftpget, TOYFLAG_USR|TOYFLAG_BIN))
USE_GETCONF(NEWTOY(getconf, ">2al", TOYFLAG_USR|TOYFLAG_BIN))
USE_GETENFORCE(NEWTOY(getenforce, ">0", TOYFLAG_USR|TOYFLAG_SBIN))
USE_GETFATTR(NEWTOY(getfattr, "(only-values)dhn:", TOYFLAG_USR|TOYFLAG_BIN))
USE_GETOPT(NEWTOY(getopt, "^a(alternative)n:(name)o:(options)l*(long)(longoptions)Tu", TOYFLAG_USR|TOYFLAG_BIN))
USE_GETTY(NEWTOY(getty, "<2t#<0H:I:l:f:iwnmLh", TOYFLAG_SBIN))
USE_GITCHECKOUT(NEWTOY(gitcheckout, "<1", TOYFLAG_USR|TOYFLAG_BIN))
USE_GITCLONE(NEWTOY(gitclone, "<1", TOYFLAG_USR|TOYFLAG_BIN))
USE_GITFETCH(NEWTOY(gitfetch, 0, TOYFLAG_USR|TOYFLAG_BIN))
USE_GITINIT(NEWTOY(gitinit, "<1", TOYFLAG_USR|TOYFLAG_BIN))
USE_GITREMOTE(NEWTOY(gitremote, "<1", TOYFLAG_USR|TOYFLAG_BIN))
USE_GPIODETECT(NEWTOY(gpiodetect, ">0", TOYFLAG_USR|TOYFLAG_BIN))
USE_GPIOFIND(NEWTOY(gpiofind, "<1>1", TOYFLAG_USR|TOYFLAG_BIN))
USE_GPIOGET(NEWTOY(gpioget, "<2l", TOYFLAG_USR|TOYFLAG_BIN))
USE_GPIOINFO(NEWTOY(gpioinfo, 0, TOYFLAG_USR|TOYFLAG_BIN))
USE_GPIOSET(NEWTOY(gpioset, "<2l", TOYFLAG_USR|TOYFLAG_BIN))
USE_GREP(NEWTOY(grep, "(line-buffered)(color):;(exclude-dir)*S(exclude)*M(include)*ZzEFHIab(byte-offset)h(no-filename)ino(only-matching)rRsvwc(count)L(files-without-match)l(files-with-matches)q(quiet)(silent)e*f*C#B#A#m#x[!wx][!EF]", TOYFLAG_BIN|TOYFLAG_ARGFAIL(2)|TOYFLAG_LINEBUF|TOYFLAG_AUTOCONF))
USE_GROUPADD(NEWTOY(groupadd, "<1>2R:g#<0>2147483647S", TOYFLAG_NEEDROOT|TOYFLAG_SBIN))
USE_GROUPDEL(NEWTOY(groupdel, "<1>2?", TOYFLAG_NEEDROOT|TOYFLAG_SBIN))
USE_GROUPS(NEWTOY(groups, NULL, TOYFLAG_USR|TOYFLAG_BIN))
USE_GUNZIP(NEWTOY(gunzip, "cdfkt123456789[-123456789]", TOYFLAG_USR|TOYFLAG_BIN))
USE_GZIP(NEWTOY(gzip,    "n(no-name)cdfkt123456789[-123456789]", TOYFLAG_USR|TOYFLAG_BIN))
USE_REBOOT(OLDTOY(halt, reboot, TOYFLAG_SBIN|TOYFLAG_NEEDROOT))
USE_HD(OLDTOY(hd, hexdump, TOYFLAG_USR|TOYFLAG_BIN))
USE_HEAD(NEWTOY(head, "?n(lines)#<0=10c(bytes)#<0qv[-nc]", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_LINEBUF))
USE_HELLO(NEWTOY(hello, 0, TOYFLAG_USR|TOYFLAG_BIN))
USE_HELP(NEWTOY(help, "ahu", TOYFLAG_BIN|TOYFLAG_MAYFORK))
USE_HEXDUMP(NEWTOY(hexdump, "bcCdn#<0os#<0vx[!bcCdox]", TOYFLAG_USR|TOYFLAG_BIN))
USE_HEXEDIT(NEWTOY(hexedit, "<1>1r", TOYFLAG_USR|TOYFLAG_BIN))
USE_HOST(NEWTOY(host, "<1>2avt:", TOYFLAG_USR|TOYFLAG_BIN))
USE_HOSTID(NEWTOY(hostid, ">0", TOYFLAG_USR|TOYFLAG_BIN))
USE_HOSTNAME(NEWTOY(hostname, ">1bdsfF:[!bdsf]", TOYFLAG_BIN))
USE_HTTPD(NEWTOY(httpd, ">1v", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_LINEBUF))
USE_HWCLOCK(NEWTOY(hwclock, ">0(fast)f(rtc):u(utc)l(localtime)t(systz)s(hctosys)r(show)w(systohc)[-ul][!rtsw]", TOYFLAG_SBIN))
USE_I2CDETECT(NEWTOY(i2cdetect, ">3aF#<0>63lqry[!qr][!Fl]", TOYFLAG_USR|TOYFLAG_SBIN))
USE_I2CDUMP(NEWTOY(i2cdump, "<2>2fy", TOYFLAG_USR|TOYFLAG_SBIN))
USE_I2CGET(NEWTOY(i2cget, "<2>3fy", TOYFLAG_USR|TOYFLAG_SBIN))
USE_I2CSET(NEWTOY(i2cset, "<4fy", TOYFLAG_USR|TOYFLAG_SBIN))
USE_I2CTRANSFER(NEWTOY(i2ctransfer, "<2vfy", TOYFLAG_USR|TOYFLAG_SBIN))
USE_ICONV(NEWTOY(iconv, "cst:f:", TOYFLAG_USR|TOYFLAG_BIN))
USE_ID(NEWTOY(id, ">1"USE_ID_Z("Z")"nGgru[!"USE_ID_Z("Z")"Ggu]", TOYFLAG_USR|TOYFLAG_BIN))
USE_IFCONFIG(NEWTOY(ifconfig, "^?aS", TOYFLAG_SBIN))
USE_INIT(NEWTOY(init, "", TOYFLAG_SBIN))
USE_INOTIFYD(NEWTOY(inotifyd, "<2", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_LINEBUF))
USE_INSMOD(NEWTOY(insmod, "<1", TOYFLAG_SBIN|TOYFLAG_NEEDROOT))
USE_INSTALL(NEWTOY(install, "<1cdDp(preserve-timestamps)svt:m:o:g:", TOYFLAG_USR|TOYFLAG_BIN))
USE_IONICE(NEWTOY(ionice, "^tc#<0>3=2n#<0>7=5p#", TOYFLAG_USR|TOYFLAG_BIN))
USE_IORENICE(NEWTOY(iorenice, "<1>3", TOYFLAG_USR|TOYFLAG_BIN))
USE_IOTOP(NEWTOY(iotop, ">0AaKO" "Hk*o*p*u*s#<1=7d%<100=3000m#n#<1bq", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_STAYROOT))
USE_IP(NEWTOY(ip, NULL, TOYFLAG_SBIN))
USE_IP(OLDTOY(ipaddr, ip, TOYFLAG_SBIN))
USE_IPCRM(NEWTOY(ipcrm, "m*M*s*S*q*Q*", TOYFLAG_USR|TOYFLAG_BIN))
USE_IPCS(NEWTOY(ipcs, "acptulsqmi#", TOYFLAG_USR|TOYFLAG_BIN))
USE_IP(OLDTOY(iplink, ip, TOYFLAG_SBIN))
USE_IP(OLDTOY(iproute, ip, TOYFLAG_SBIN))
USE_IP(OLDTOY(iprule, ip, TOYFLAG_SBIN))
USE_IP(OLDTOY(iptunnel, ip, TOYFLAG_SBIN))
USE_SH(NEWTOY(jobs, "lnprs", TOYFLAG_NOFORK))
USE_KILL(NEWTOY(kill, "?ls: ", TOYFLAG_BIN|TOYFLAG_MAYFORK))
USE_KILLALL(NEWTOY(killall, "?s:ilqvw", TOYFLAG_USR|TOYFLAG_BIN))
USE_KILLALL5(NEWTOY(killall5, "?o*ls: [!lo][!ls]", TOYFLAG_SBIN))
USE_KLOGD(NEWTOY(klogd, "c#<1>8n", TOYFLAG_SBIN))
USE_LAST(NEWTOY(last, "f:W", TOYFLAG_BIN))
USE_LINK(NEWTOY(link, "<2>2", TOYFLAG_USR|TOYFLAG_BIN))
USE_LINUX32(NEWTOY(linux32, 0, TOYFLAG_USR|TOYFLAG_BIN))
USE_LN(NEWTOY(ln, "<1rt:Tvnfs", TOYFLAG_BIN))
USE_LOAD_POLICY(NEWTOY(load_policy, "<1>1", TOYFLAG_USR|TOYFLAG_SBIN))
USE_SH(NEWTOY(local, 0, TOYFLAG_NOFORK))
USE_LOG(NEWTOY(log, "p:t:", TOYFLAG_USR|TOYFLAG_SBIN))
USE_LOGGER(NEWTOY(logger, "t:p:s", TOYFLAG_USR|TOYFLAG_BIN))
USE_LOGIN(NEWTOY(login, ">1f:ph:", TOYFLAG_BIN|TOYFLAG_NEEDROOT))
USE_LOGNAME(NEWTOY(logname, ">0", TOYFLAG_USR|TOYFLAG_BIN))
USE_LOGPATH(NEWTOY(logpath, 0, TOYFLAG_NOHELP|TOYFLAG_USR|TOYFLAG_BIN))
USE_LOSETUP(NEWTOY(losetup, ">2S(sizelimit)#s(show)ro#j:fdcaD[!afj]", TOYFLAG_SBIN))
USE_LS(NEWTOY(ls, "(sort):(color):;(full-time)(show-control-chars)\377(block-size)#=1024<1\241(group-directories-first)\376ZgoACFHLNRSUXabcdfhikl@mnpqrstuw#=80<0x1[-Cxm1][-Cxml][-Cxmo][-Cxmg][-cu][-ftS][-HL][-Nqb][-k\377]", TOYFLAG_BIN))
USE_LSATTR(NEWTOY(lsattr, "ldapvR", TOYFLAG_BIN))
USE_LSMOD(NEWTOY(lsmod, NULL, TOYFLAG_SBIN))
USE_LSOF(NEWTOY(lsof, "lp*t", TOYFLAG_USR|TOYFLAG_BIN))
USE_LSPCI(NEWTOY(lspci, "eDmkn@x@i:", TOYFLAG_USR|TOYFLAG_BIN))
USE_LSUSB(NEWTOY(lsusb, "i:", TOYFLAG_USR|TOYFLAG_BIN))
USE_MAKEDEVS(NEWTOY(makedevs, "<1>1d:", TOYFLAG_USR|TOYFLAG_BIN))
USE_MAN(NEWTOY(man, "k:M:", TOYFLAG_USR|TOYFLAG_BIN))
USE_MCOOKIE(NEWTOY(mcookie, "v(verbose)V(version)", TOYFLAG_USR|TOYFLAG_BIN))
USE_MD5SUM(NEWTOY(md5sum, "bc(check)s(status)[!bc]", TOYFLAG_USR|TOYFLAG_BIN))
USE_MDEV(NEWTOY(mdev, "s", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_UMASK))
USE_MEMEATER(NEWTOY(memeater, "<1>1M", TOYFLAG_USR|TOYFLAG_BIN))
USE_MICROCOM(NEWTOY(microcom, "<1>1s#X", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_NOBUF))
USE_MIX(NEWTOY(mix, "c:d:l#r#", TOYFLAG_USR|TOYFLAG_BIN))
USE_MKDIR(NEWTOY(mkdir, "<1"USE_MKDIR_Z("Z:")"vp(parent)(parents)m:", TOYFLAG_BIN|TOYFLAG_UMASK))
USE_MKE2FS(NEWTOY(mke2fs, "<1>2g:Fnqm#N#i#b#", TOYFLAG_SBIN))
USE_MKFIFO(NEWTOY(mkfifo, "<1"USE_MKFIFO_Z("Z:")"m:", TOYFLAG_USR|TOYFLAG_BIN))
USE_MKNOD(NEWTOY(mknod, "<2>4m(mode):"USE_MKNOD_Z("Z:"), TOYFLAG_BIN|TOYFLAG_UMASK))
USE_MKPASSWD(NEWTOY(mkpasswd, ">2S:m:P#=0<0", TOYFLAG_USR|TOYFLAG_BIN))
USE_MKSWAP(NEWTOY(mkswap, "<1>1L:", TOYFLAG_SBIN))
USE_MKTEMP(NEWTOY(mktemp, ">1(tmpdir);:uqd(directory)p:t", TOYFLAG_BIN))
USE_MODINFO(NEWTOY(modinfo, "<1b:k:F:0", TOYFLAG_SBIN))
USE_MODPROBE(NEWTOY(modprobe, "alrqvsDbd*", TOYFLAG_SBIN))
USE_MORE(NEWTOY(more, 0, TOYFLAG_USR|TOYFLAG_BIN))
USE_MOUNT(NEWTOY(mount, "?RO:afnrvwt:o*[-rw]", TOYFLAG_BIN|TOYFLAG_STAYROOT))
USE_MOUNTPOINT(NEWTOY(mountpoint, "<1qdx[-dx]", TOYFLAG_BIN))
USE_MV(NEWTOY(mv, "<1x(swap)v(verbose)nF(remove-destination)fit:T[-ni]", TOYFLAG_BIN))
USE_NBD_CLIENT(OLDTOY(nbd-client, nbd_client, TOYFLAG_USR|TOYFLAG_BIN))
USE_NBD_SERVER(OLDTOY(nbd-server, nbd_server, TOYFLAG_USR|TOYFLAG_BIN))
USE_NBD_CLIENT(NEWTOY(nbd_client, "<3>3b#<1>4294967295=4096ns", 0))
USE_NBD_SERVER(NEWTOY(nbd_server, "<1>1r", 0))
USE_NETCAT(OLDTOY(nc, netcat, TOYFLAG_USR|TOYFLAG_BIN))
USE_NETCAT(NEWTOY(netcat, "^tElLw#<1W#<1p#<1>65535q#<1O:o:s:f:46uUnz[!tlL][!Lw][!Lu][!46U][!oO]", TOYFLAG_BIN))
USE_NETSTAT(NEWTOY(netstat, "pWrxwutneal", TOYFLAG_BIN))
USE_NICE(NEWTOY(nice, "^<1n#", TOYFLAG_BIN))
USE_NL(NEWTOY(nl, "v#=1l#w#<0=6b:n:s:E", TOYFLAG_USR|TOYFLAG_BIN))
USE_NOHUP(NEWTOY(nohup, "<1^", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_ARGFAIL(125)))
USE_NPROC(NEWTOY(nproc, "(all)", TOYFLAG_USR|TOYFLAG_BIN))
USE_NSENTER(NEWTOY(nsenter, "<1a(all)F(no-fork)t#<1(target)C(cgroup):; i(ipc):; m(mount):; n(net):; p(pid):; u(uts):; U(user):; ", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_STAYROOT))
USE_OD(NEWTOY(od, "j#vw#<1=16N#xsodcbA:t*", TOYFLAG_USR|TOYFLAG_BIN))
USE_ONEIT(NEWTOY(oneit, "^<1nc:p3[!pn]", TOYFLAG_SBIN))
USE_OPENVT(NEWTOY(openvt, "^<1c#<1>63sw", TOYFLAG_BIN|TOYFLAG_NEEDROOT))
USE_PARTPROBE(NEWTOY(partprobe, "<1", TOYFLAG_SBIN))
USE_PASSWD(NEWTOY(passwd, ">1a:dlu", TOYFLAG_STAYROOT|TOYFLAG_USR|TOYFLAG_BIN))
USE_PASTE(NEWTOY(paste, "d:s", TOYFLAG_USR|TOYFLAG_BIN))
USE_PATCH(NEWTOY(patch, ">2(no-backup-if-mismatch)(dry-run)F#g#fulp#v(verbose)@d:i:Rs(quiet)[!sv]", TOYFLAG_USR|TOYFLAG_BIN))
USE_PGREP(NEWTOY(pgrep, "?cld:u*U*t*s*P*g*G*fnovxL:[-no]", TOYFLAG_USR|TOYFLAG_BIN))
USE_PIDOF(NEWTOY(pidof, "so:x", TOYFLAG_BIN))
USE_PING(NEWTOY(ping, "<1>1m#t#<0>255=64c#<0=3s#<0>4064=56i%W#<0=3w#<0qf46I:[-46]", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_LINEBUF))
USE_PING(OLDTOY(ping6, ping, TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_LINEBUF))
USE_PIVOT_ROOT(NEWTOY(pivot_root, "<2>2", TOYFLAG_SBIN))
USE_PKILL(NEWTOY(pkill,    "?Vu*U*t*s*P*g*G*fnovxl:[-no]", TOYFLAG_USR|TOYFLAG_BIN))
USE_PMAP(NEWTOY(pmap, "<1pqx", TOYFLAG_USR|TOYFLAG_BIN))
USE_REBOOT(OLDTOY(poweroff, reboot, TOYFLAG_SBIN|TOYFLAG_NEEDROOT))
USE_PRINTENV(NEWTOY(printenv, "(null)0", TOYFLAG_BIN))
USE_PRINTF(NEWTOY(printf, "<1?^", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_MAYFORK))
USE_ULIMIT(OLDTOY(prlimit, ulimit, TOYFLAG_USR|TOYFLAG_BIN))
USE_PS(NEWTOY(ps, "k(sort)*P(ppid)*aAdeflMno*O*p(pid)*s*t*Tu*U*g*G*wZ[!ol][+Ae][!oO]", TOYFLAG_BIN))
USE_PWD(NEWTOY(pwd, ">0LP[-LP]", TOYFLAG_BIN|TOYFLAG_MAYFORK))
USE_PWDX(NEWTOY(pwdx, "<1a", TOYFLAG_USR|TOYFLAG_BIN))
USE_PWGEN(NEWTOY(pwgen, ">2r(remove):c(capitalize)n(numerals)y(symbols)s(secure)B(ambiguous)h(help)C1vA(no-capitalize)0(no-numerals)[-cA][-n0][-C1]", TOYFLAG_USR|TOYFLAG_BIN))
USE_READAHEAD(NEWTOY(readahead, NULL, TOYFLAG_BIN))
USE_READELF(NEWTOY(readelf, "<1(dyn-syms)Aadehlnp:SsWx:", TOYFLAG_USR|TOYFLAG_BIN))
USE_READLINK(NEWTOY(readlink, "<1vnf(canonicalize)emqz[-mef][-qv]", TOYFLAG_USR|TOYFLAG_BIN))
USE_REALPATH(NEWTOY(realpath, "<1(relative-base):R(relative-to):s(no-symlinks)LPemqz[-Ps][-LP][-me]", TOYFLAG_USR|TOYFLAG_BIN))
USE_REBOOT(NEWTOY(reboot, "d:fn", TOYFLAG_SBIN|TOYFLAG_NEEDROOT))
USE_RENICE(NEWTOY(renice, "<1gpun#|", TOYFLAG_USR|TOYFLAG_BIN))
USE_RESET(NEWTOY(reset, 0, TOYFLAG_USR|TOYFLAG_BIN))
USE_RESTORECON(NEWTOY(restorecon, "<1DFnRrv", TOYFLAG_USR|TOYFLAG_SBIN))
USE_SH(NEWTOY(return, ">1", TOYFLAG_NOFORK))
USE_REV(NEWTOY(rev, NULL, TOYFLAG_USR|TOYFLAG_BIN))
USE_RFKILL(NEWTOY(rfkill, "<1>2", TOYFLAG_USR|TOYFLAG_SBIN))
USE_RM(NEWTOY(rm, "f(force)iRrv[-fi]", TOYFLAG_BIN))
USE_RMDIR(NEWTOY(rmdir, "<1(ignore-fail-on-non-empty)p(parents)", TOYFLAG_BIN))
USE_RMMOD(NEWTOY(rmmod, "<1wf", TOYFLAG_SBIN|TOYFLAG_NEEDROOT))
USE_ROUTE(NEWTOY(route, "?neA:", TOYFLAG_SBIN))
USE_RTCWAKE(NEWTOY(rtcwake, "(list-modes);(auto)a(device)d:(local)l(mode)m:(seconds)s#(time)t#(utc)u(verbose)v[!alu]", TOYFLAG_USR|TOYFLAG_BIN))
USE_RUNCON(NEWTOY(runcon, "^<2", TOYFLAG_USR|TOYFLAG_SBIN))
USE_SED(NEWTOY(sed, "(help)(version)(tarxform)e*f*i:;nErz(null-data)s[+Er]", TOYFLAG_BIN|TOYFLAG_AUTOCONF))
USE_SENDEVENT(NEWTOY(sendevent, "<4>4", TOYFLAG_USR|TOYFLAG_SBIN))
USE_SEQ(NEWTOY(seq, "<1>3?f:s:w[!fw]", TOYFLAG_USR|TOYFLAG_BIN))
USE_SH(NEWTOY(set, 0, TOYFLAG_NOFORK))
USE_SETENFORCE(NEWTOY(setenforce, "<1>1", TOYFLAG_USR|TOYFLAG_SBIN))
USE_SETFATTR(NEWTOY(setfattr, "hn:|v:x:|[!xv]", TOYFLAG_USR|TOYFLAG_BIN))
USE_SETSID(NEWTOY(setsid, "^<1wc@d[!dc]", TOYFLAG_USR|TOYFLAG_BIN))
USE_SH(NEWTOY(sh, "0^(noediting)(noprofile)(norc)sc:i", TOYFLAG_BIN))
USE_SHA1SUM(OLDTOY(sha1sum, md5sum, TOYFLAG_USR|TOYFLAG_BIN))
USE_SHA224SUM(OLDTOY(sha224sum, md5sum, TOYFLAG_USR|TOYFLAG_BIN))
USE_SHA256SUM(OLDTOY(sha256sum, md5sum, TOYFLAG_USR|TOYFLAG_BIN))
USE_SHA384SUM(OLDTOY(sha384sum, md5sum, TOYFLAG_USR|TOYFLAG_BIN))
USE_SHA3SUM(NEWTOY(sha3sum, "bSa#<128>512=224", TOYFLAG_USR|TOYFLAG_BIN))
USE_SHA512SUM(OLDTOY(sha512sum, md5sum, TOYFLAG_USR|TOYFLAG_BIN))
USE_SH(NEWTOY(shift, ">1", TOYFLAG_NOFORK))
USE_SHRED(NEWTOY(shred, "<1zxus#<1n#<1o#<0f", TOYFLAG_USR|TOYFLAG_BIN))
USE_SHUF(NEWTOY(shuf, "zen#<0", TOYFLAG_USR|TOYFLAG_BIN))
USE_SKELETON(NEWTOY(skeleton, "(walrus)(blubber):;(also):h(hlong):; g(glong): f(longf):;e@d*c#b:a", TOYFLAG_USR|TOYFLAG_BIN))
USE_SKELETON_ALIAS(NEWTOY(skeleton_alias, "b#dq", TOYFLAG_USR|TOYFLAG_BIN))
USE_SLEEP(NEWTOY(sleep, "<1", TOYFLAG_BIN))
USE_SNTP(NEWTOY(sntp, ">1M :m :Sp:t#<0=1>16asdDqr#<4>17=10[!as]", TOYFLAG_USR|TOYFLAG_BIN))
USE_SORT(NEWTOY(sort, USE_SORT_FLOAT("g")"S:T:m" "o:k*t:" "xVbMCcszdfirun", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_ARGFAIL(2)))
USE_SH(NEWTOY(source, "<1", TOYFLAG_NOFORK))
USE_SPLIT(NEWTOY(split, ">2a#<1=2>9b#<1l#<1n#<1[!bl][!bn][!ln]", TOYFLAG_USR|TOYFLAG_BIN))
USE_STAT(NEWTOY(stat, "<1c:(format)fLt", TOYFLAG_BIN))
USE_STRACE(NEWTOY(strace, "^p#s#v", TOYFLAG_USR|TOYFLAG_SBIN))
USE_STRINGS(NEWTOY(strings, "t:an#=4<1fo", TOYFLAG_USR|TOYFLAG_BIN))
USE_STTY(NEWTOY(stty, "?aF:g[!ag]", TOYFLAG_BIN))
USE_SU(NEWTOY(su, "^lmpu:g:c:s:[!lmp]", TOYFLAG_BIN|TOYFLAG_ROOTONLY))
USE_SULOGIN(NEWTOY(sulogin, "t#<0=0", TOYFLAG_SBIN|TOYFLAG_NEEDROOT))
USE_SWAPOFF(NEWTOY(swapoff, "<1>1av", TOYFLAG_SBIN|TOYFLAG_NEEDROOT))
USE_SWAPON(NEWTOY(swapon, "<1>1p#<0>32767d", TOYFLAG_SBIN|TOYFLAG_NEEDROOT))
USE_SWITCH_ROOT(NEWTOY(switch_root, "<2c:h", TOYFLAG_SBIN))
USE_SYNC(NEWTOY(sync, NULL, TOYFLAG_BIN))
USE_SYSCTL(NEWTOY(sysctl, "^neNqwpaA[!ap][!aq][!aw][+aA]", TOYFLAG_SBIN))
USE_SYSLOGD(NEWTOY(syslogd,">0l#<1>8=8R:b#<0>99=1s#<0=200m#<0>71582787=20O:p:f:a:nSKLD", TOYFLAG_SBIN|TOYFLAG_STAYROOT))
USE_TAC(NEWTOY(tac, NULL, TOYFLAG_USR|TOYFLAG_BIN))
USE_TAIL(NEWTOY(tail, "?fFs:c(bytes)-n(lines)-[-cn][-fF]", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_LINEBUF))
USE_TAR(NEWTOY(tar, "&(one-file-system)(no-ignore-case)(ignore-case)(no-anchored)(anchored)(no-wildcards)(wildcards)(no-wildcards-match-slash)(wildcards-match-slash)(show-transformed-names)(selinux)(restrict)(full-time)(no-recursion)(null)(numeric-owner)(no-same-permissions)(overwrite)(exclude)*(sort);:(mode):(mtime):(group):(owner):(to-command):~(strip-components)(strip)#~(transform)(xform)*o(no-same-owner)p(same-permissions)k(keep-old)c(create)|h(dereference)x(extract)|t(list)|v(verbose)J(xz)j(bzip2)z(gzip)S(sparse)O(to-stdout)P(absolute-names)m(touch)X(exclude-from)*T(files-from)*I(use-compress-program):C(directory):f(file):as[!txc][!jzJa]", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_UMASK))
USE_TASKSET(NEWTOY(taskset, "<1^pa", TOYFLAG_USR|TOYFLAG_BIN))
USE_TCPSVD(NEWTOY(tcpsvd, "^<3c#=30<1b#=20<0C:u:l:hEv", TOYFLAG_USR|TOYFLAG_BIN))
USE_TEE(NEWTOY(tee, "ia", TOYFLAG_USR|TOYFLAG_BIN))
USE_TELNET(NEWTOY(telnet, "<1>2", TOYFLAG_BIN))
USE_TELNETD(NEWTOY(telnetd, "w#<0b:p#<0>65535=23f:l:FSKi[!wi]", TOYFLAG_USR|TOYFLAG_BIN))
USE_TEST(NEWTOY(test, 0, TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_NOHELP|TOYFLAG_MAYFORK))
USE_TFTP(NEWTOY(tftp, "<1b#<8>65464r:l:g|p|[!gp]", TOYFLAG_USR|TOYFLAG_BIN))
USE_TFTPD(NEWTOY(tftpd, "rcu:l", TOYFLAG_BIN))
USE_TIME(NEWTOY(time, "<1^pv[-pv]", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_MAYFORK))
USE_TIMEOUT(NEWTOY(timeout, "<2^(foreground)(preserve-status)vk:s(signal):i", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_ARGFAIL(125)))
USE_TOP(NEWTOY(top, ">0O*h" "Hk*o*p*u*s#<1d%<100=3000m#n#<1bq[!oO]", TOYFLAG_USR|TOYFLAG_BIN))
USE_TOUCH(NEWTOY(touch, "<1acd:fmr:t:h[!dtr]", TOYFLAG_BIN))
USE_SH(OLDTOY(toysh, sh, TOYFLAG_BIN))
USE_TR(NEWTOY(tr, "^<1>2Ccstd[+cC]", TOYFLAG_USR|TOYFLAG_BIN))
USE_TRACEROUTE(NEWTOY(traceroute, "<1>2i:f#<1>255=1z#<0>86400=0g*w#<0>86400=5t#<0>255=0s:q#<1>255=3p#<1>65535=33434m#<1>255=30rvndlIUF64", TOYFLAG_STAYROOT|TOYFLAG_USR|TOYFLAG_BIN))
USE_TRACEROUTE(OLDTOY(traceroute6,traceroute, TOYFLAG_STAYROOT|TOYFLAG_USR|TOYFLAG_BIN))
USE_TRUE(NEWTOY(true, NULL, TOYFLAG_BIN|TOYFLAG_NOHELP|TOYFLAG_MAYFORK))
USE_TRUNCATE(NEWTOY(truncate, "<1s:|c", TOYFLAG_USR|TOYFLAG_BIN))
USE_TS(NEWTOY(ts, "ims", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_LINEBUF))
USE_TSORT(NEWTOY(tsort, ">1", TOYFLAG_USR|TOYFLAG_BIN))
USE_TTY(NEWTOY(tty, "s", TOYFLAG_USR|TOYFLAG_BIN))
USE_TUNCTL(NEWTOY(tunctl, "<1>1t|d|u:T[!td]", TOYFLAG_USR|TOYFLAG_BIN))
USE_UCLAMPSET(NEWTOY(uclampset, "p#am#<-1>1024M#<-1>1024R", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_STAYROOT))
USE_TCPSVD(OLDTOY(udpsvd, tcpsvd, TOYFLAG_USR|TOYFLAG_BIN))
USE_ULIMIT(NEWTOY(ulimit, ">1P#<1SHavutsrRqpnmlifedc[-SH][!apvutsrRqnmlifedc]", TOYFLAG_USR|TOYFLAG_BIN))
USE_UMOUNT(NEWTOY(umount, "cndDflrat*v[!na]", TOYFLAG_BIN|TOYFLAG_STAYROOT))
USE_UNAME(NEWTOY(uname, "paomvrns", TOYFLAG_BIN))
USE_UNICODE(NEWTOY(unicode, "<1", TOYFLAG_USR|TOYFLAG_BIN))
USE_UNIQ(NEWTOY(uniq, "f#s#w#zicdu", TOYFLAG_USR|TOYFLAG_BIN))
USE_UNIX2DOS(NEWTOY(unix2dos, 0, TOYFLAG_BIN))
USE_UNLINK(NEWTOY(unlink, "<1>1", TOYFLAG_USR|TOYFLAG_BIN))
USE_SH(NEWTOY(unset, "fvn[!fv]", TOYFLAG_NOFORK))
USE_UNSHARE(NEWTOY(unshare, "<1^a(all)f(fork)r(map-root-user)C(cgroup):; i(ipc):; m(mount):; n(net):; p(pid):; u(uts):; U(user):; ", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_STAYROOT))
USE_UPTIME(NEWTOY(uptime, ">0ps", TOYFLAG_USR|TOYFLAG_BIN))
USE_USERADD(NEWTOY(useradd, "<1>2u#<0G:s:g:h:SDH", TOYFLAG_NEEDROOT|TOYFLAG_UMASK|TOYFLAG_SBIN))
USE_USERDEL(NEWTOY(userdel, "<1>1r", TOYFLAG_NEEDROOT|TOYFLAG_SBIN))
USE_USLEEP(NEWTOY(usleep, "<1>1", TOYFLAG_BIN))
USE_UUDECODE(NEWTOY(uudecode, ">1o:", TOYFLAG_USR|TOYFLAG_BIN|TOYFLAG_UMASK))
USE_UUENCODE(NEWTOY(uuencode, "<1>2m", TOYFLAG_USR|TOYFLAG_BIN))
USE_UUIDGEN(NEWTOY(uuidgen, ">0r(random)", TOYFLAG_USR|TOYFLAG_BIN))
USE_VCONFIG(NEWTOY(vconfig, "<2>4", TOYFLAG_NEEDROOT|TOYFLAG_SBIN))
USE_VI(NEWTOY(vi, ">1s:c:", TOYFLAG_USR|TOYFLAG_BIN))
USE_VMSTAT(NEWTOY(vmstat, ">2n", TOYFLAG_BIN|TOYFLAG_LINEBUF))
USE_W(NEWTOY(w, NULL, TOYFLAG_USR|TOYFLAG_BIN))
USE_SH(NEWTOY(wait, "n", TOYFLAG_NOFORK))
USE_WATCH(NEWTOY(watch, "^<1n%<100=2000tebx", TOYFLAG_USR|TOYFLAG_BIN))
USE_WATCHDOG(NEWTOY(watchdog, "<1>1Ft#=4<1T#=60<1", TOYFLAG_NEEDROOT|TOYFLAG_SBIN))
USE_WC(NEWTOY(wc, "Lcmwl", TOYFLAG_USR|TOYFLAG_BIN))
USE_WGET(NEWTOY(wget, "<1>1(max-redirect)#<0=20d(debug)O(output-document):p(post-data):", TOYFLAG_USR|TOYFLAG_BIN))
USE_WHICH(NEWTOY(which, "<1a", TOYFLAG_USR|TOYFLAG_BIN))
USE_WHO(NEWTOY(who, "a", TOYFLAG_USR|TOYFLAG_BIN))
USE_WHOAMI(OLDTOY(whoami, logname, TOYFLAG_USR|TOYFLAG_BIN))
USE_XARGS(NEWTOY(xargs, "^E:P#<0(null)=1optr(no-run-if-empty)n#<1(max-args)s#0[!0E]", TOYFLAG_USR|TOYFLAG_BIN))
USE_XXD(NEWTOY(xxd, ">1c#<0>256l#o#g#<0=2eiprs#[!rs][!re]", TOYFLAG_USR|TOYFLAG_BIN))
USE_XZCAT(NEWTOY(xzcat, NULL, TOYFLAG_USR|TOYFLAG_BIN))
USE_YES(NEWTOY(yes, 0, TOYFLAG_USR|TOYFLAG_BIN))
USE_ZCAT(NEWTOY(zcat,     "cdfkt123456789[-123456789]", TOYFLAG_USR|TOYFLAG_BIN))
