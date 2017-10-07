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
#define alloc_retoVideo(window) Iretromode->alloc_retoVideo((window)) 
#define free_retroVideo(video) Iretromode->free_retroVideo((video)) 
#define clear_retroVideo(video) Iretromode->clear_retroVideo((video)) 
#define draw_retroVideo(video) Iretromode->draw_retroVideo((video)) 
#define dma_retroVideo(video) Iretromode->dma_retroVideo((video)) 
#define set_retroVideoColor(video, RGB, color, from, to) Iretromode->set_retroVideoColor((video), (RGB), (color), (from), (to)) 
#define applyCopper(video) Iretromode->applyCopper((video)) 
#define retroOpenScreen(width, height) Iretromode->retroOpenScreen((width), (height)) 
#define retroCloseScreen(screen) Iretromode->retroCloseScreen((screen)) 
#define retroApplyScreen(screen, video, offsetx, oppsety, videomode) Iretromode->retroApplyScreen((screen), (video), (offsetx), (oppsety), (videomode)) 
#define retroBAR(screen, x0, y0, x1, y1, color) Iretromode->retroBAR((screen), (x0), (y0), (x1), (y1), (color)) 
#define retroScreenColor(screen, color, r, g, b) Iretromode->retroScreenColor((screen), (color), (r), (g), (b)) 

#endif /* INLINE4_RETROMODE_H */
