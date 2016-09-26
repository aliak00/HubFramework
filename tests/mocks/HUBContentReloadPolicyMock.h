/*
 *  Copyright (c) 2016 Spotify AB.
 *
 *  Licensed to the Apache Software Foundation (ASF) under one
 *  or more contributor license agreements.  See the NOTICE file
 *  distributed with this work for additional information
 *  regarding copyright ownership.  The ASF licenses this file
 *  to you under the Apache License, Version 2.0 (the
 *  "License"); you may not use this file except in compliance
 *  with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing,
 *  software distributed under the License is distributed on an
 *  "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 *  KIND, either express or implied.  See the License for the
 *  specific language governing permissions and limitations
 *  under the License.
 */

#import "HUBContentReloadPolicy.h"

/// Mocked content reload policy, for use in tests only
@interface HUBContentReloadPolicyMock : NSObject <HUBContentReloadPolicy>

/// Whether the reload policy should return that content should be reloaded
@property (nonatomic) BOOL shouldReload;

/// The last view URI passed to the mock
@property (nonatomic, copy, readonly) NSURL *lastViewURI;

/// The number of requests that this mock has received
@property (nonatomic) NSUInteger numberOfRequests;

@end
