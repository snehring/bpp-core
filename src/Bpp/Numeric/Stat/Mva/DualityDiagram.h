//
// File: DualityDiagram.h
// Authors:
//   Mathieu Groussin
// Created: 2011-02-27 22:03:00
//

/*
  Copyright or © or Copr. Bio++ Development Team, (November 17, 2004)
  
  This software is a computer program whose purpose is to provide basal and
  utilitary classes. This file belongs to the Bio++ Project.
  
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

#ifndef BPP_NUMERIC_STAT_MVA_DUALITYDIAGRAM_H
#define BPP_NUMERIC_STAT_MVA_DUALITYDIAGRAM_H


#include "../../Matrix/Matrix.h"

namespace bpp
{
/**
 * @brief The core class of a multivariate analysis.
 *
 * In the constructor, the eigen values and vectors of the variance-covariance or correlation matrix are calculated.
 * Eigen values and vectors are stored in the eigenValues_ and eigenVectors_ respectively.
 * Furthermore, four matrices are calculated: the row and column coordinates as well as the principal axes and components.
 *
 * The code of this class is deeply inspired from the R code of the as.dudi function available in the ade4 package.
 */
class DualityDiagram :
  public virtual Clonable
{
private:
  std::vector<double> rowWeights_;
  std::vector<double> colWeights_;
  size_t nbAxes_;
  std::vector<double> eigenValues_;
  RowMatrix<double> eigenVectors_;
  RowMatrix<double> rowCoord_;
  RowMatrix<double> colCoord_;
  RowMatrix<double> ppalAxes_;
  RowMatrix<double> ppalComponents_;

public:
  /**
   * @brief Build an empty DualityDiagram object.
   *
   */
  DualityDiagram() :
    rowWeights_(),
    colWeights_(),
    nbAxes_(),
    eigenValues_(),
    eigenVectors_(),
    rowCoord_(),
    colCoord_(),
    ppalAxes_(),
    ppalComponents_() {}

  /**
   * @brief Build a new DualityDiagram object.
   *
   * @param matrix The input data to analyse.
   * @param rowWeights A vector of values specifying the weights of rows.
   * @param colWeights A vector of values specifying the weights of columns.
   * @param nbAxes The number of kept axes during the analysis.
   * @param tol Tolerance threshold for null eigenvalues (a value less than tol times the first one is considered as null)
   * @param verbose Should warnings be dispayed.
   * @throw Exception if an error occured.
   */
  DualityDiagram(
    const Matrix<double>& matrix,
    const std::vector<double>& rowWeights,
    const std::vector<double>& colWeights,
    unsigned int nbAxes,
    double tol = 0.0000001,
    bool verbose = true);

  virtual ~DualityDiagram();

  DualityDiagram* clone() const { return new DualityDiagram(*this); }

private:
  void check_(
    const Matrix<double>& matrix,
    const std::vector<double>& rowWeights,
    const std::vector<double>& colWeights,
    unsigned int nbAxes);
  void compute_(const Matrix<double>& matrix, double tol, bool verbose);

public:
  /**
   * @brief Set the data and perform computations.
   *
   * @param matrix The input data to analyse.
   * @param rowWeights A vector of values specifying the weights of rows.
   * @param colWeights A vector of values specifying the weights of columns.
   * @param nbAxes The number of kept axes during the analysis.
   * @param tol Tolerance threshold for null eigenvalues (a value less than tol times the first one is considered as null)
   * @param verbose Should warnings be dispayed.
   * @throw Exception if an error occured.
   */
  void setData(
    const Matrix<double>& matrix,
    const std::vector<double>& rowWeights,
    const std::vector<double>& colWeights,
    unsigned int nbAxes,
    double tol = 0.0000001,
    bool verbose = true);

  std::vector<double> computeVariancePercentagePerAxis();

  size_t getNbOfKeptAxes() const { return nbAxes_; }
  const std::vector<double> getRowWeights() const { return rowWeights_; }
  const std::vector<double> getColumnWeights() const { return colWeights_; }
  const std::vector<double>& getEigenValues() const { return eigenValues_; }
  const RowMatrix<double>& getRowCoordinates() const { return rowCoord_; }
  const RowMatrix<double>& getColCoordinates() const { return colCoord_; }
  const RowMatrix<double>& getPrincipalAxes() const { return ppalAxes_; }
  const RowMatrix<double>& getPrincipalComponents() const { return ppalComponents_; }
};
} // end of namespace bpp.
#endif // BPP_NUMERIC_STAT_MVA_DUALITYDIAGRAM_H
