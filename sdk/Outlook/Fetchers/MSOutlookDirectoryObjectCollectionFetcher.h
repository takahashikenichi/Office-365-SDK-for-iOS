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


#ifndef MSOUTLOOKDIRECTORYOBJECTCOLLECTIONFETCHER_H
#define MSOUTLOOKDIRECTORYOBJECTCOLLECTIONFETCHER_H

@class MSOutlookDirectoryObjectFetcher;



#import <orc.h>
#import "MSOutlookModels.h"

/** MSOutlookDirectoryObjectCollectionFetcher
 *
 */
@interface MSOutlookDirectoryObjectCollectionFetcher : MSOrcCollectionFetcher

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

- (MSOutlookDirectoryObjectFetcher *)getById:(NSString *)Id;
- (void)add:(MSOutlookDirectoryObject *)entity callback:(void (^)(MSOutlookDirectoryObject *, MSOrcError *))callback;

- (MSOutlookDirectoryObjectCollectionFetcher *)select:(NSString *)params;
- (MSOutlookDirectoryObjectCollectionFetcher *)filter:(NSString *)params;
- (MSOutlookDirectoryObjectCollectionFetcher *)search:(NSString *)params;
- (MSOutlookDirectoryObjectCollectionFetcher *)top:(int)value;
- (MSOutlookDirectoryObjectCollectionFetcher *)skip:(int)value;
- (MSOutlookDirectoryObjectCollectionFetcher *)expand:(NSString *)value;
- (MSOutlookDirectoryObjectCollectionFetcher *)orderBy:(NSString *)params;
- (MSOutlookDirectoryObjectCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSOutlookDirectoryObjectCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@end

#endif
