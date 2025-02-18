//
// File: BppApplication.h
// Authors:
//   Julien Dutheil
// Created: 2009-08-08 08:21:00
//

/*
  Copyright or © or Copr. Development Team, (November 17, 2004)
  
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

#ifndef BPP_APP_BPPAPPLICATION_H
#define BPP_APP_BPPAPPLICATION_H


#include "../Exceptions.h"

// From the STL:
#include <string>
#include <map>

namespace bpp
{
class BppApplication
{
protected:
  std::string appName_;
  mutable std::map<std::string, std::string> params_;
  bool timerStarted_;
  bool verbose_;
  int warn_;

public:
  BppApplication(int argc, char* argv[], const std::string& name, bool verbose = true, int warningLevel = 1);
  virtual ~BppApplication() {}

public:
  virtual void startTimer();
  virtual void done();

  virtual const std::map<std::string, std::string>& getParams() const { return params_; }
  virtual std::map<std::string, std::string>& getParams() { return params_; }

  virtual const std::string& getParam(const std::string& name) const
  {
    if (params_.find(name) == params_.end()) throw Exception("BppApplication::getParam(). Parameter '" + name + "' not found.");
    return params_[name];
  }

  virtual std::string& getParam(const std::string& name) { return params_[name]; }

  virtual bool isVerbose() const { return verbose_; }

  virtual int getWarningLevel() const { return warn_; }

  virtual void help(const std::string& program) const;
};
} // end of namespace bpp;
#endif // BPP_APP_BPPAPPLICATION_H
