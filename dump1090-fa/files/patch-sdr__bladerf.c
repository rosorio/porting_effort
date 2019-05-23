--- sdr_bladerf.c.orig	2019-05-03 16:16:14 UTC
+++ sdr_bladerf.c
@@ -102,7 +102,7 @@ static void show_config()
     int status;
 
     unsigned rate;
-    unsigned freq;
+    unsigned long freq;
     bladerf_lpf_mode lpf_mode;
     unsigned lpf_bw;
     bladerf_lna_gain lna_gain;
