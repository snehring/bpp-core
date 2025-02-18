//
// File: PowellMultiDimensions.h
// Authors:
//   Julien Dutheil
// Created: 2003-11-17 15:16:45
//

/*
  Copyright or © or Copr. Bio++ Development Team, (November 17, 2004)
  
  This software is a computer program whose purpose is to provide classes
  for phylogenetic data analysis.
  
  This software is governed by the CeCILL license under French law and
  abiding by the rules of distribution of free software. You can use,
  modify and/ or redistribute the software under the terms of the CeCILL
  license as circulated by CEA, CNRS and INRIA at the following URL
  "http://www.cecill.info".
  
  zs a counterpart to the access to the source code and rights to copy,
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

#ifndef BPP_NUMERIC_FUNCTION_POWELLMULTIDIMENSIONS_H
#define BPP_NUMERIC_FUNCTION_POWELLMULTIDIMENSIONS_H


#include "../VectorTools.h"
#include "AbstractOptimizer.h"
#include "DirectionFunction.h"

namespace bpp
{
/**
 * @brief Powell's multi-dimensions optimization algorithm for one parameter.
 *
 * A description of the algorithm can be found for example in:
 * <pre>
 * NUMERICAL RECIPES IN C: THE ART OF SCIENTIFIC COMPUTING
 * (ISBN 0-521-43108-5)
 * </pre>
 */
class PowellMultiDimensions :
  public AbstractOptimizer
{
public:
  class PMDStopCondition :
    public AbstractOptimizationStopCondition
  {
public:
    PMDStopCondition(PowellMultiDimensions* pmd) :
      AbstractOptimizationStopCondition(pmd) {}
    virtual ~PMDStopCondition() {}

    PMDStopCondition* clone() const { return new PMDStopCondition(*this); }

public:
    bool isToleranceReached() const;
    double getCurrentTolerance() const;
  };

  friend class PMDStopCondition;

protected:
  double fp_;
  double fret_;
  ParameterList pt_;
  VVdouble xi_;

  unsigned int ncom_;
  ParameterList pcom_, xicom_;
  DirectionFunction f1dim_;

public:
  PowellMultiDimensions(Function* function);
  virtual ~PowellMultiDimensions() {}

  PowellMultiDimensions* clone() const { return new PowellMultiDimensions(*this); }

public:
  /**
   * @name The Optimizer interface.
   *
   * @{
   */
  double optimize();
  /** @} */

  void doInit(const ParameterList& params);

  double doStep();
};
} // end of namespace bpp.
#endif // BPP_NUMERIC_FUNCTION_POWELLMULTIDIMENSIONS_H
