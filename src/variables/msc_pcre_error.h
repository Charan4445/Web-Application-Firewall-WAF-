/*
 * ModSecurity, http://www.modsecurity.org/
 * Copyright (c) 2015 - 2022 Trustwave Holdings, Inc. (http://www.trustwave.com/)
 *
 * You may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * If any of the files related to licensing are missing or if you have any
 * other questions related to licensing please contact Trustwave Holdings, Inc.
 * directly using the email address security@modsecurity.org.
 *
 */

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <utility>

#ifndef SRC_VARIABLES_MSC_PCRE_ERROR_H_
#define SRC_VARIABLES_MSC_PCRE_ERROR_H_

#include "src/variables/variable.h"

namespace modsecurity {

class Transaction;
namespace variables {


DEFINE_VARIABLE(MscPcreError, MSC_PCRE_ERROR, m_variableMscPcreError)


}  // namespace variables
}  // namespace modsecurity

#endif  // SRC_VARIABLES_MSC_PCRE_ERROR_H_
