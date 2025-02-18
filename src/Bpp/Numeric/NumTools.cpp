//
// File: NumTools.cpp
// Authors:
//   Julien Dutheil
// Created: 2003-11-10 12:06:55
//

/*
  Copyright or © or Copr. Bio++ Development Team, (November 17, 2004)
  
  This software is a computer program whose purpose is to provide classes
  for numerical calculus. This file is part of the Bio++ project.
  
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


#include "Matrix/Matrix.h"
#include "NumTools.h"

using namespace bpp;
using namespace std;

/******************************************************************************/

double NumTools::uniRoot(Function& f, const std::string& param, double a, double b, double tolerance)
{
  ParameterList pl;
  pl.addParameter(Parameter(param, a));
  double fa = f.f(pl);
  pl[0].setValue(b);
  double fb = f.f(pl);
  if (fa * fb > 0.)
    throw Exception("NumTools::uniRoot(). Initial interval values are not of opposite sign.");
  double c = (a + b) / 2.;
  double fc;
  while (abs(fb - fa) > tolerance)
  {
    c = (a + b) / 2.; // Better use golden section here...
    pl[0].setValue(c);
    fc = f.f(pl);

    if (fc * fa < 0.)
    {
      b = c;
      fb = fc;
    }
    else
    {
      a = c;
      fa = fc;
    }
  }
  return c;
}

/******************************************************************************/

RowMatrix<double>* NumTools::computeHessianMatrix(DerivableSecondOrder& function, const ParameterList& parameters)
{
  size_t n = parameters.size();
  vector<string> variables = parameters.getParameterNames();
  RowMatrix<double>* hessian = new RowMatrix<double>(n, n);
  for (unsigned int i = 0; i < n; i++)
  {
    for (unsigned int j = 0; j < n; j++)
    {
      if (j == i)
        (*hessian)(i, j) = function.d2f(variables[i], parameters);
      else
        (*hessian)(i, j) = function.d2f(variables[i], variables[j], parameters);
    }
  }
  return hessian;
}

/******************************************************************************/
