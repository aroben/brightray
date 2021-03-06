// Copyright (c) 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE-CHROMIUM file.

#include "browser/permission_manager.h"

#include "base/callback.h"
#include "content/public/browser/permission_type.h"

namespace brightray {

PermissionManager::PermissionManager() {
}

PermissionManager::~PermissionManager() {
}

void PermissionManager::RequestPermission(
    content::PermissionType permission,
    content::WebContents* web_contents,
    int request_id,
    const GURL& requesting_origin,
    bool user_gesture,
    const base::Callback<void(content::PermissionStatus)>& callback) {
  callback.Run(content::PERMISSION_STATUS_GRANTED);
}

void PermissionManager::CancelPermissionRequest(
    content::PermissionType permission,
    content::WebContents* web_contents,
    int request_id,
    const GURL& requesting_origin) {
}

void PermissionManager::ResetPermission(
    content::PermissionType permission,
    const GURL& requesting_origin,
    const GURL& embedding_origin) {
}

content::PermissionStatus PermissionManager::GetPermissionStatus(
    content::PermissionType permission,
    const GURL& requesting_origin,
    const GURL& embedding_origin) {
  return content::PERMISSION_STATUS_GRANTED;
}

void PermissionManager::RegisterPermissionUsage(
    content::PermissionType permission,
    const GURL& requesting_origin,
    const GURL& embedding_origin) {
}

int PermissionManager::SubscribePermissionStatusChange(
    content::PermissionType permission,
    const GURL& requesting_origin,
    const GURL& embedding_origin,
    const base::Callback<void(content::PermissionStatus)>& callback) {
  return -1;
}

void PermissionManager::UnsubscribePermissionStatusChange(int subscription_id) {
}

}  // namespace brightray
