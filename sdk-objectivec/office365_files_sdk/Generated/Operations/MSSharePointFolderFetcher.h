/*******************************************************************************
Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the MIT or Apache License; see LICENSE in the source repository
root for authoritative license information.﻿

**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).
******************************************************************************/

@class MSSharePointItemFetcher;
@class MSSharePointItemCollectionFetcher;
@class MSSharePointFolderOperations;

#import <office365_odata_base/office365_odata_base.h>
#import "MSSharePointModels.h"

/**
* The header for type MSSharePointFolderFetcher.
*/

@protocol MSSharePointFolderFetcher<MSODataEntityFetcher>

@optional

- (NSURLSessionTask *) readWithCallback:(void (^)(MSSharePointFolder *folder, MSODataException *exception))callback;
- (id<MSSharePointFolderFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSSharePointFolderFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (id<MSSharePointFolderFetcher>)select:(NSString *)params;
- (id<MSSharePointFolderFetcher>)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSSharePointFolderOperations *operations;

- (MSSharePointItemCollectionFetcher *)getchildren;
- (MSSharePointItemFetcher *) getchildrenById:(NSString*)_id;

@end

@interface MSSharePointFolderFetcher : MSODataEntityFetcher<MSSharePointFolderFetcher>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSODataExecutable>)parent;
- (NSURLSessionTask *) updateFolder:(MSSharePointFolder *)folder callback:(void (^)(MSSharePointFolder *folder, MSODataException *error))callback;
- (NSURLSessionTask *) deleteFolder:(void (^)(int status, MSODataException *exception))callback;

@end