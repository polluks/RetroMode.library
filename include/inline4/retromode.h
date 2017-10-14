#ifndef INLINE4_RETROMODE_H
#define INLINE4_RETROMODE_H

/*
** This file was auto generated by idltool 53.6.
**
** It provides compatibility to OS3 style library
** calls by substituting functions.
**
** Do not edit manually.
*/ 

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef EXEC_EXEC_H
#include <exec/exec.h>
#endif
#ifndef EXEC_INTERFACES_H
#include <exec/interfaces.h>
#endif

#ifndef LIBRARIES_RETROMODE_H
#include <libraries/retromode.h>
#endif
#include <interfaces/retromode.h>

/* Inline macros for Interface "main" */
#define alloc_retoVideo(window) IRetroMode->alloc_retoVideo((window)) 
#define free_retroVideo(video) IRetroMode->free_retroVideo((video)) 
#define clear_retroVideo(video) IRetroMode->clear_retroVideo((video)) 
#define draw_retroVideo(video) IRetroMode->draw_retroVideo((video)) 
#define dma_retroVideo(video) IRetroMode->dma_retroVideo((video)) 
#define set_retroVideoColor(video, RGB, color, from, to) IRetroMode->set_retroVideoColor((video), (RGB), (color), (from), (to)) 
#define applyCopper(video) IRetroMode->applyCopper((video)) 
#define retroOpenScreen(width, height) IRetroMode->retroOpenScreen((width), (height)) 
#define retroCloseScreen(screen) IRetroMode->retroCloseScreen((screen)) 
#define retroApplyScreen(screen, video, offsetx, oppsety, videomode) IRetroMode->retroApplyScreen((screen), (video), (offsetx), (oppsety), (videomode)) 
#define retroPixel(screen, x, y, color) IRetroMode->retroPixel((screen), (x), (y), (color)) 
#define retroPoint(screen, x, y) IRetroMode->retroPoint((screen), (x), (y)) 
#define retroBAR(screen, x0, y0, x1, y1, color) IRetroMode->retroBAR((screen), (x0), (y0), (x1), (y1), (color)) 
#define retroOrBAR(screen, x0, y0, x1, y1, or_mask) IRetroMode->retroOrBAR((screen), (x0), (y0), (x1), (y1), (or_mask)) 
#define retroXorBAR(screen, x0, y0, x1, y1, xor_mask) IRetroMode->retroXorBAR((screen), (x0), (y0), (x1), (y1), (xor_mask)) 
#define retroBox(screen, x0, y0, x1, y1, color) IRetroMode->retroBox((screen), (x0), (y0), (x1), (y1), (color)) 
#define retroOrBox(screen, x0, y0, x1, y1, or_mask) IRetroMode->retroOrBox((screen), (x0), (y0), (x1), (y1), (or_mask)) 
#define retroXorBox(screen, x0, y0, x1, y1, xor_mask) IRetroMode->retroXorBox((screen), (x0), (y0), (x1), (y1), (xor_mask)) 
#define retroCircle(screen, x, y, r, color) IRetroMode->retroCircle((screen), (x), (y), (r), (color)) 
#define retroOrCircle(screen, x, y, r, or_mask) IRetroMode->retroOrCircle((screen), (x), (y), (r), (or_mask)) 
#define retroXorCircle(screen, x, y, r, xor_mask) IRetroMode->retroXorCircle((screen), (x), (y), (r), (xor_mask)) 
#define retroScreenColor(screen, color, r, g, b) IRetroMode->retroScreenColor((screen), (color), (r), (g), (b)) 
#define retroOrBlit(bitmap, fromX, fromY, width, heigh, screen, toX, toY) IRetroMode->retroOrBlit((bitmap), (fromX), (fromY), (width), (heigh), (screen), (toX), (toY)) 
#define retroAndClear(screen, x0, y0, x1, y1, and_mask) IRetroMode->retroAndClear((screen), (x0), (y0), (x1), (y1), (and_mask)) 
#define retroModeBadVideoSync(video, sync_offset, incRad) IRetroMode->retroModeBadVideoSync((video), (sync_offset), (incRad)) 
#define AfterEffectScanline(video) IRetroMode->AfterEffectScanline((video)) 
#define AfterEffectAdjustRGB(video, red_shift, green_shift, blue_shift) IRetroMode->AfterEffectAdjustRGB((video), (red_shift), (green_shift), (blue_shift)) 
#define retroTriangle(screen, x1, y1, x2, y2, x3, y3, color) IRetroMode->retroTriangle((screen), (x1), (y1), (x2), (y2), (x3), (y3), (color)) 
#define retroOrTriangle(screen, x1, y1, x2, y2, x3, y3, color) IRetroMode->retroOrTriangle((screen), (x1), (y1), (x2), (y2), (x3), (y3), (color)) 
#define retroXorTriangle(screen, x1, y1, x2, y2, x3, y3, color) IRetroMode->retroXorTriangle((screen), (x1), (y1), (x2), (y2), (x3), (y3), (color)) 
#define retroLine(screen, x1, y1, x2, y2, color) IRetroMode->retroLine((screen), (x1), (y1), (x2), (y2), (color)) 

#endif /* INLINE4_RETROMODE_H */
