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

@class MSGraphCalendarGroupFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSGraphModels.h"

/**
* The header for type MSGraphCalendarGroupCollectionFetcher.
*/

@protocol MSGraphCalendarGroupCollectionFetcher<MSODataCollectionFetcher>

@optional

- (NSURLSessionTask *)readWithCallback:(void (^)(NSArray<MSGraphCalendarGroup> *calendarGroups, MSODataException *exception))callback;

- (id<MSGraphCalendarGroupCollectionFetcher>)select:(NSString *)params;
- (id<MSGraphCalendarGroupCollectionFetcher>)filter:(NSString *)params;
- (id<MSGraphCalendarGroupCollectionFetcher>)top:(int)value;
- (id<MSGraphCalendarGroupCollectionFetcher>)skip:(int)value;
- (id<MSGraphCalendarGroupCollectionFetcher>)expand:(NSString *)value;
- (id<MSGraphCalendarGroupCollectionFetcher>)orderBy:(NSString *)params;
- (id<MSGraphCalendarGroupCollectionFetcher>)addCustomParametersWithName:(NSString *)name value:(id)value;
- (id<MSGraphCalendarGroupCollectionFetcher>)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
- (MSGraphCalendarGroupFetcher *)getById:(NSString *)Id;
- (NSURLSessionTask *)addCalendarGroup:(MSGraphCalendarGroup *)entity callback:(void (^)(MSGraphCalendarGroup *calendarGroup, MSODataException *e))callback;

@end

@interface MSGraphCalendarGroupCollectionFetcher : MSODataCollectionFetcher<MSGraphCalendarGroupCollectionFetcher>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;

@end