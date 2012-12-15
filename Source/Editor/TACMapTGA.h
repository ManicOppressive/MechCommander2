#ifndef TACMAPTGA_H
#define TACMAPTGA_H
/*************************************************************************************************\
TACMapTGA.h			: Interface for the TACMapTGA component.
//---------------------------------------------------------------------------//
// Copyright (C) Microsoft Corporation. All rights reserved.                 //
//===========================================================================//
\*************************************************************************************************/

#ifndef TGAWND_H
#include "TGAWnd.h"
#endif

//*************************************************************************************************
/**************************************************************************************************
CLASS DESCRIPTION
TACMapTGA:
**************************************************************************************************/
class TacMapTGA: public TGAWnd
{
	public:

	afx_msg void OnPaint();
	void refreshBmp();
	DECLARE_MESSAGE_MAP()

	
};


//*************************************************************************************************
#endif  // end of file ( TACMapTGA.h )