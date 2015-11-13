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


#ifndef MSSAMPLESERVICEITEMBCOLLECTIONFETCHER_H
#define MSSAMPLESERVICEITEMBCOLLECTIONFETCHER_H

@class MSSampleServiceItemBFetcher;

#import "core/MSOrcCollectionFetcher.h"
#import "api/api.h"
#import "core/core.h"
#import "MSSampleServiceModels.h"

/** MSSampleServiceItemBCollectionFetcher
 *
 */
@interface MSSampleServiceItemBCollectionFetcher : MSOrcCollectionFetcher

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

- (MSSampleServiceItemBFetcher *)getById: (id) identifier;
- (void)add:(MSSampleServiceItemB *)entity callback:(void (^)(MSSampleServiceItemB *, MSOrcError *))callback;

- (MSSampleServiceItemBCollectionFetcher *)select:(NSString *)params;
- (MSSampleServiceItemBCollectionFetcher *)filter:(NSString *)params;
- (MSSampleServiceItemBCollectionFetcher *)search:(NSString *)params;
- (MSSampleServiceItemBCollectionFetcher *)top:(int)value;
- (MSSampleServiceItemBCollectionFetcher *)skip:(int)value;
- (MSSampleServiceItemBCollectionFetcher *)expand:(NSString *)value;
- (MSSampleServiceItemBCollectionFetcher *)orderBy:(NSString *)params;
- (MSSampleServiceItemBCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSSampleServiceItemBCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@end

#endif