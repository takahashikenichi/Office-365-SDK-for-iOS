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


#ifndef MSGRAPHSECTIONCOLLECTIONFETCHER_H
#define MSGRAPHSECTIONCOLLECTIONFETCHER_H

@class MSGraphSectionFetcher;

#import "core/MSOrcCollectionFetcher.h"
#import "api/api.h"
#import "core/core.h"
#import "MSGraphModels.h"

/** MSGraphSectionCollectionFetcher
 *
 */
@interface MSGraphSectionCollectionFetcher : MSOrcCollectionFetcher

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

- (MSGraphSectionFetcher *)getById: (id) identifier;
- (void)add:(MSGraphSection *)entity callback:(void (^)(MSGraphSection *, MSOrcError *))callback;

- (MSGraphSectionCollectionFetcher *)select:(NSString *)params;
- (MSGraphSectionCollectionFetcher *)filter:(NSString *)params;
- (MSGraphSectionCollectionFetcher *)search:(NSString *)params;
- (MSGraphSectionCollectionFetcher *)top:(int)value;
- (MSGraphSectionCollectionFetcher *)skip:(int)value;
- (MSGraphSectionCollectionFetcher *)expand:(NSString *)value;
- (MSGraphSectionCollectionFetcher *)orderBy:(NSString *)params;
- (MSGraphSectionCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphSectionCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@end

#endif