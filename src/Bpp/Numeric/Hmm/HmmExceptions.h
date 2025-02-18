//
// File: HmmExceptions.h
// Authors:
//   Julien Dutheil
// Created: 2009-09-04 15:30:00
//

/*
  Copyright or © or Copr. CNRS, (November 16, 2004)
  
  This software is a computer program whose purpose is to provide classes
  for phylogenetic data analysis.
  
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

#ifndef BPP_NUMERIC_HMM_HMMEXCEPTIONS_H
#define BPP_NUMERIC_HMM_HMMEXCEPTIONS_H


#include "../../Exceptions.h"

namespace bpp
{
/**
 * @brief Exception thrown when an unvalid state is requested.
 *
 * This class belongs to the HMM framework.
 *
 * @author Julien Dutheil
 */
class HmmBadStateException :
  public Exception
{
public:
  HmmBadStateException(const std::string& description) : Exception(description) {}
};


/**
 * @brief Exception thrown when an unvalid alphabet is specified.
 *
 * This class belongs to the HMM fra;ework.
 *
 * @author Julien Dutheil
 */
class HmmUnvalidAlphabetException :
  public Exception
{
public:
  HmmUnvalidAlphabetException(const std::string& description) : Exception(description) {}
};
} // end of namespace bpp.
#endif // BPP_NUMERIC_HMM_HMMEXCEPTIONS_H
