--- sdr.c.orig	2019-05-03 16:32:15 UTC
+++ sdr.c
@@ -125,8 +125,8 @@ bool sdrHandleOption(int argc, char **argv, int *jptr)
         }
 
         fprintf(stderr, "SDR type '%s' not recognized; supported SDR types are:\n", argv[j]);
-        for (int i = 0; sdr_handlers[i].name; ++i) {
-            fprintf(stderr, "  %s\n", sdr_handlers[i].name);
+        for (int k = 0; sdr_handlers[k].name; ++k) {
+            fprintf(stderr, "  %s\n", sdr_handlers[k].name);
         }
 
         return false;
