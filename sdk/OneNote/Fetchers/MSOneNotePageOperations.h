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


#ifndef MSONENOTEPAGEOPERATIONS_H
#define MSONENOTEPAGEOPERATIONS_H
				  		

#import <orc.h>
#import "MSOneNoteModels.h"
#import "MSOrcOperations.h"


/** MSOneNotePageOperations
 *
 */
@interface MSOneNotePageOperations : MSOrcOperations

- (instancetype)initOperationWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

- (void)patchContentWithCommands:(MSOneNotePatchContentCommand *)commands callback:(void (^)(int, MSOrcError*))callback ;
- (void)patchContentRawWithCommands:(NSString *)commands callback:(void (^)(NSString *, MSOrcError*))callback ;
- (void)copyToSectionWithId:(NSString *)_id siteCollectionId:(NSString *)siteCollectionId siteId:(NSString *)siteId groupId:(NSString *)groupId callback:(void (^)(MSOneNoteCopyStatusModel *, MSOrcError*))callback ;
- (void)copyToSectionRawWithId:(NSString *)_id siteCollectionId:(NSString *)siteCollectionId siteId:(NSString *)siteId groupId:(NSString *)groupId callback:(void (^)(NSString *, MSOrcError*))callback ;
- (void)thumbnailWithCallback:(void (^)(NSStream *, MSOrcError*))callback ;
- (void)thumbnailRawWithCallback:(void (^)(NSString *, MSOrcError*))callback ;

@end

#endif
