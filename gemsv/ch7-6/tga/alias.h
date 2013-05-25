/*
 * This software is copyrighted as noted below.  It may be freely copied,
 * modified, and redistributed, provided that the copyright notice is
 * preserved on all copies.
 *
 * There is no warranty or other guarantee of fitness for this software,
 * it is provided solely "as is".  Bug reports or fixes may be sent
 * to the author, who may or may not act on them as he desires.
 *
 * You may not include this software in a program or other software product
 * without supplying the source, or without informing the end-user that the
 * source is available for no extra charge.
 *
 * If you modify this software, you should include a notice giving the
 * name of the person performing the modification, the date of modification,
 * and the reason for such modification.
 */
/*
 * rla.h - type define to Alias "pix" format.
 *
 * Author:      Raul Rivero
 *              Mathematics Dept.
 *              University of Oviedo
 * Date:        Wed Jan 22 1992
 * Copyright (c) 1992, Raul Rivero
 *
 */

#ifndef MY_ALIAS

#define MY_ALIAS

typedef struct {
        short xsize, ysize;
        short xinit, yinit;
        short depth;
} alias_hdr;

#endif         /* MY_ALIAS */
