/*---------------------------------------------------------------------------*\
                                                                             
  FILE........: globals.h
  AUTHOR......: David Rowe
  DATE CREATED: 1/11/94                                                       
                                                                             
  Globals for sinusoidal speech coder.					      
                                                                             
\*---------------------------------------------------------------------------*/

/*
  Copyright (C) 2009 David Rowe

  All rights reserved.

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License version 2, as
  published by the Free Software Foundation.  This program is
  distributed in the hope that it will be useful, but WITHOUT ANY
  WARRANTY; without even the implied warranty of MERCHANTABILITY or
  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
  License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

/* Globals used in encoder and decoder */

extern int frames;	/* number of frames processed so far */
extern float Sn[];	/* float input speech samples */
extern MODEL model;	/* model parameters for the current frame */
extern int Nw;		/* number of samples in analysis window */
extern float sig;	/* energy of current frame */

/* Globals used in encoder */

extern float w[];	/* time domain hamming window */
extern COMP W[];	/* frequency domain hamming window */
extern COMP Sw[];	/* DFT of current frame */
extern COMP Sw_[];	/* DFT of all voiced synthesised signal */

/* Globals used in decoder */

extern float Sn_[];	/* output synthesised speech samples */
extern float Pn[];	/* time domain Parzen (trapezoidal) window */

