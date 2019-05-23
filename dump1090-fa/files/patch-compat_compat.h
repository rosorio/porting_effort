--- compat/compat.h.orig	2019-05-03 16:02:58 UTC
+++ compat/compat.h
@@ -20,7 +20,7 @@
 
 #else // other platforms
 
-# include <endian.h>
+# include <sys/endian.h>
 
 #endif
 
