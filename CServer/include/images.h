#ifndef _IMAGES_H
#define _IMAGES_H

//https://imagemagick.org/script/magick-wand.php

void average_filter(const char *image_path, const char *image_name, const char *destiny_path);
void median_filter(const char *image_path, const char *image_name, const char *destiny_path);
void classify(const char *image_path, const char *image_name, const char *destiny_path);
int cmpfunc(const void *a, const void *b);

#endif // _IMAGEFILTERS_H
