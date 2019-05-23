--- track.c.orig	2019-05-03 16:28:41 UTC
+++ track.c
@@ -1245,28 +1245,28 @@ static void trackMatchAC(uint64_t now)
     }
 
     // reset counts for next time
-    for (unsigned i = 0; i < 4096; ++i) {
-        if (!modeAC_count[i])
+    for (unsigned j = 0; j < 4096; ++j) {
+        if (!modeAC_count[j])
             continue;
 
-        if ((modeAC_count[i] - modeAC_lastcount[i]) < TRACK_MODEAC_MIN_MESSAGES) {
-            if (++modeAC_age[i] > 15) {
+        if ((modeAC_count[j] - modeAC_lastcount[j]) < TRACK_MODEAC_MIN_MESSAGES) {
+            if (++modeAC_age[j] > 15) {
                 // not heard from for a while, clear it out
-                modeAC_lastcount[i] = modeAC_count[i] = modeAC_age[i] = 0;
+                modeAC_lastcount[i] = modeAC_count[j] = modeAC_age[j] = 0;
             }
         } else {
             // this one is live
             // set a high initial age for matches, so they age out rapidly
             // and don't show up on the interactive display when the matching
             // mode S data goes away or changes
-            if (modeAC_match[i]) {
-                modeAC_age[i] = 10;
+            if (modeAC_match[j]) {
+                modeAC_age[j] = 10;
             } else {
-                modeAC_age[i] = 0;
+                modeAC_age[j] = 0;
             }
         }
 
-        modeAC_lastcount[i] = modeAC_count[i];
+        modeAC_lastcount[j] = modeAC_count[j];
     }
 }
 
