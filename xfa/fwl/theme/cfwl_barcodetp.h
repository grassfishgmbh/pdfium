// Copyright 2014 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#ifndef XFA_FWL_THEME_CFWL_BARCODETP_H_
#define XFA_FWL_THEME_CFWL_BARCODETP_H_

#include "xfa/fwl/theme/cfwl_utils.h"
#include "xfa/fwl/theme/cfwl_widgettp.h"

class CFWL_BarcodeTP : public CFWL_WidgetTP {
 public:
  CFWL_BarcodeTP();
  virtual ~CFWL_BarcodeTP();
  virtual FX_BOOL IsValidWidget(IFWL_Widget* pWidget);
  virtual FX_BOOL DrawBackground(CFWL_ThemeBackground* pParams);
};

#endif  // XFA_FWL_THEME_CFWL_BARCODETP_H_