--- sdr_rtlsdr.c.orig	2019-05-03 16:40:07 UTC
+++ sdr_rtlsdr.c
@@ -119,18 +119,18 @@ static int find_device_index(char *s)
     }
 
     /* does string prefix match a serial */
-    for (int i = 0; i < device_count; i++) {
+    for (int j = 0; j < device_count; j++) {
         char serial[256];
-        if (rtlsdr_get_device_usb_strings(i, NULL, NULL, serial) == 0 && !strncmp(s, serial, strlen(s))) {
-            return i;
+        if (rtlsdr_get_device_usb_strings(j, NULL, NULL, serial) == 0 && !strncmp(s, serial, strlen(s))) {
+            return j;
         }
     }
 
     /* does string suffix match a serial */
-    for (int i = 0; i < device_count; i++) {
+    for (int k = 0; k < device_count; k++) {
         char serial[256];
-        if (rtlsdr_get_device_usb_strings(i, NULL, NULL, serial) == 0 && strlen(s) < strlen(serial) && !strcmp(serial + strlen(serial) - strlen(s), s)) {
-            return i;
+        if (rtlsdr_get_device_usb_strings(k, NULL, NULL, serial) == 0 && strlen(s) < strlen(serial) && !strcmp(serial + strlen(serial) - strlen(s), s)) {
+            return k;
         }
     }
 
