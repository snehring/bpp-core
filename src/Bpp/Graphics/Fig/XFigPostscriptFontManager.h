//
// File: XFigPostscriptFontManager.h
// Authors:
//   Julien Dutheil
// Created: 2009-12-30 00:00:00
//

/*
  Copyright or © or Copr. CNRS, (November 17, 2004)
  
  This software is a computer program whose purpose is to provide utilitary
  classes. This file belongs to the Bio++ Project.
  
  This software is governed by the CeCILL license under French law and
  abiding by the rules of distribution of free software. You can use,
  modify and/ or redistribute the software under the terms of the CeCILL
  license as circulated by CEA, CNRS and INRIA at the following URL
  "http://www.cecill.info".
  
  As a counterpart to the access to the source code and rights to copy,
  modify and redistribute granted by the license, users are provided only
  with a limited warranty and the software's author, the holder of the
  economic rights, and the successive licensors have only limited
  liability.
  
  In this respect, the user's attention is drawn to the risks associated
  with loading, using, modifying and/or developing or reproducing the
  software by the user in light of its specific status of free software,
  that may mean that it is complicated to manipulate, and that also
  therefore means that it is reserved for developers and experienced
  professionals having in-depth computer knowledge. Users are therefore
  encouraged to load and test the software's suitability as regards their
  requirements in conditions enabling the security of their systems and/or
  data to be ensured and, more generally, to use and operate it in the
  same conditions as regards security.
  
  The fact that you are presently reading this means that you have had
  knowledge of the CeCILL license and that you accept its terms.
*/

#ifndef BPP_GRAPHICS_FIG_XFIGPOSTSCRIPTFONTMANAGER_H
#define BPP_GRAPHICS_FIG_XFIGPOSTSCRIPTFONTMANAGER_H


#include "../Font/FontManager.h"

namespace bpp
{
/**
 * @brief Postscript font manager for the XFig format.
 */
class XFigPostscriptFontManager :
  public AbstractFontManager<int>
{
public:
  XFigPostscriptFontManager();

  virtual ~XFigPostscriptFontManager() {}
};
} // end of namespace bpp;
#endif // BPP_GRAPHICS_FIG_XFIGPOSTSCRIPTFONTMANAGER_H
