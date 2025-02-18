//
// File: StatTest.h
// Authors:
//   Julien Dutheil
// Created: 2008-03-18 13:56:00
//

/*
  Copyright or © or Copr. Bio++ Development Team, (November 17, 2004)
  
  This software is a computer program whose purpose is to provide classes
  for numerical calculus.
  
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

#ifndef BPP_NUMERIC_STAT_STATTEST_H
#define BPP_NUMERIC_STAT_STATTEST_H


#include "../../Clonable.h"

// From the STL:
#include <string>

namespace bpp
{
/**
 * @brief Interface for statistical test results.
 *
 * Specific test may add specific methods to the ones provided here.
 */
class StatTest :
  public virtual Clonable
{
public:
  StatTest() {}
  virtual ~StatTest() {}

public:
  virtual std::string getName() const = 0;
  virtual double getStatistic() const = 0;
  virtual double getPValue() const = 0;
};
} // end of namespace bpp;
#endif // BPP_NUMERIC_STAT_STATTEST_H
