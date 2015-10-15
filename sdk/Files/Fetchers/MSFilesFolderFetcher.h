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



#ifndef MSFILESFOLDERFETCHER_H
#define MSFILESFOLDERFETCHER_H

#import <orc.h>
#import "MSFilesModels.h"
#import "MSOrcEntityFetcher.h"

@class MSFilesItemCollectionFetcher;
@class MSFilesItemCollectionFetcher;
@class MSFilesItemFetcher;
@class MSFilesFolderOperations;


/** MSFilesFolderFetcher
 *
 */
@interface MSFilesFolderFetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSFilesFolderOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSFilesFolder *, MSOrcError *))callback;
- (void)update:(MSFilesFolder *)Folder callback:(void (^)(MSFilesFolder *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSFilesFolderFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSFilesFolderFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSFilesFolderFetcher *)select:(NSString *)params;
- (MSFilesFolderFetcher *)expand:(NSString *)value;
@property (strong, nonatomic, readonly, getter=children) MSFilesItemCollectionFetcher *children;

- (MSFilesItemFetcher *)childrenById:(NSString*)identifier;


@end

#endif
