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



#ifndef MSFILESDRIVEFETCHER_H
#define MSFILESDRIVEFETCHER_H

#import <orc.h>
#import "MSFilesModels.h"
#import "MSOrcEntityFetcher.h"

@class MSFilesIdentityFetcher;
@class MSFilesDriveQuotaFetcher;
@class MSFilesItemCollectionFetcher;
@class MSFilesItemCollectionFetcher;
@class MSFilesItemFetcher;
@class MSFilesDriveOperations;


/** MSFilesDriveFetcher
 *
 */
@interface MSFilesDriveFetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSFilesDriveOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSFilesDrive *, MSOrcError *))callback;
- (void)update:(MSFilesDrive *)Drive callback:(void (^)(MSFilesDrive *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSFilesDriveFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSFilesDriveFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSFilesDriveFetcher *)select:(NSString *)params;
- (MSFilesDriveFetcher *)expand:(NSString *)value;
@property (strong, nonatomic, readonly, getter=files) MSFilesItemCollectionFetcher *files;

- (MSFilesItemFetcher *)filesById:(NSString*)identifier;


@end

#endif
