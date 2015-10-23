#pragma once
#ifndef MESSMER_CPPUTILS_TEMPFILE_TEMPFILE_H_
#define MESSMER_CPPUTILS_TEMPFILE_TEMPFILE_H_

#include <boost/filesystem.hpp>
#include "../macros.h"

namespace cpputils {

class TempFile {
public:
  explicit TempFile(const boost::filesystem::path &path, bool create = true);
  explicit TempFile(bool create = true);
  virtual ~TempFile();
  const boost::filesystem::path &path() const;
  bool exists() const;

private:
  const boost::filesystem::path _path;

  DISALLOW_COPY_AND_ASSIGN(TempFile);
};

}

#endif
