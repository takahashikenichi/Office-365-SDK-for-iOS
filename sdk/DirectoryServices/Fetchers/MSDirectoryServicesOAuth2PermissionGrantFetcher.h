/*******************************************************************************
**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).

Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the Apache License 2.0; see LICENSE in the source repository
root for authoritative license information.﻿
******************************************************************************/



#ifndef MSDIRECTORYSERVICESOAUTH2PERMISSIONGRANTFETCHER_H
#define MSDIRECTORYSERVICESOAUTH2PERMISSIONGRANTFETCHER_H

#import <orc.h>
#import "MSDirectoryServicesModels.h"
#import "MSOrcEntityFetcher.h"

@class MSDirectoryServicesOAuth2PermissionGrantOperations;


/** MSDirectoryServicesOAuth2PermissionGrantFetcher
 *
 */
@interface MSDirectoryServicesOAuth2PermissionGrantFetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSDirectoryServicesOAuth2PermissionGrantOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSDirectoryServicesOAuth2PermissionGrant *, MSOrcError *))callback;
- (void)update:(MSDirectoryServicesOAuth2PermissionGrant *)OAuth2PermissionGrant callback:(void (^)(MSDirectoryServicesOAuth2PermissionGrant *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSDirectoryServicesOAuth2PermissionGrantFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSDirectoryServicesOAuth2PermissionGrantFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSDirectoryServicesOAuth2PermissionGrantFetcher *)select:(NSString *)params;
- (MSDirectoryServicesOAuth2PermissionGrantFetcher *)expand:(NSString *)value;

@end

#endif
