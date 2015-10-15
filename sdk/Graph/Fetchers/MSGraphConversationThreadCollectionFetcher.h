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


#ifndef MSGRAPHCONVERSATIONTHREADCOLLECTIONFETCHER_H
#define MSGRAPHCONVERSATIONTHREADCOLLECTIONFETCHER_H

@class MSGraphConversationThreadFetcher;



#import <orc.h>
#import "MSGraphModels.h"

/** MSGraphConversationThreadCollectionFetcher
 *
 */
@interface MSGraphConversationThreadCollectionFetcher : MSOrcCollectionFetcher

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

- (MSGraphConversationThreadFetcher *)getById:(NSString *)Id;
- (void)add:(MSGraphConversationThread *)entity callback:(void (^)(MSGraphConversationThread *, MSOrcError *))callback;

- (MSGraphConversationThreadCollectionFetcher *)select:(NSString *)params;
- (MSGraphConversationThreadCollectionFetcher *)filter:(NSString *)params;
- (MSGraphConversationThreadCollectionFetcher *)search:(NSString *)params;
- (MSGraphConversationThreadCollectionFetcher *)top:(int)value;
- (MSGraphConversationThreadCollectionFetcher *)skip:(int)value;
- (MSGraphConversationThreadCollectionFetcher *)expand:(NSString *)value;
- (MSGraphConversationThreadCollectionFetcher *)orderBy:(NSString *)params;
- (MSGraphConversationThreadCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphConversationThreadCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@end

#endif
