// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef APPS_BROWSER_CONTEXT_KEYED_SERVICE_FACTORIES_H_
#define APPS_BROWSER_CONTEXT_KEYED_SERVICE_FACTORIES_H_

namespace apps {

// Ensures the existence of any BrowserContextKeyedServiceFactory provided by
// the core apps code.
void EnsureBrowserContextKeyedServiceFactoriesBuilt();

}  // namespace apps

#endif  // APPS_BROWSER_CONTEXT_KEYED_SERVICE_FACTORIES_H_
