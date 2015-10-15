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



#ifndef MSONENOTESITECOLLECTION_FETCHER_H
#define MSONENOTESITECOLLECTION_FETCHER_H

#import <orc.h>
#import "MSOneNoteModels.h"
#import "MSOrcEntityFetcher.h"

@class MSOneNoteSiteCollectionFetcher;
@class MSOneNoteSiteCollectionFetcher;
@class MSOneNoteSiteFetcher;
@class MSOneNoteSiteCollection_Operations;


/** MSOneNoteSiteCollection_Fetcher
 *
 */
@interface MSOneNoteSiteCollection_Fetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSOneNoteSiteCollection_Operations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSOneNoteSiteCollection *, MSOrcError *))callback;
- (void)update:(MSOneNoteSiteCollection *)SiteCollection callback:(void (^)(MSOneNoteSiteCollection *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSOneNoteSiteCollection_Fetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSOneNoteSiteCollection_Fetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSOneNoteSiteCollection_Fetcher *)select:(NSString *)params;
- (MSOneNoteSiteCollection_Fetcher *)expand:(NSString *)value;
@property (strong, nonatomic, readonly, getter=sites) MSOneNoteSiteCollectionFetcher *sites;

- (MSOneNoteSiteFetcher *)sitesById:(NSString*)identifier;


@end

#endif
