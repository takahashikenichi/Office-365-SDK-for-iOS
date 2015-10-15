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


#ifndef MSONENOTESECTIONOPERATIONS_H
#define MSONENOTESECTIONOPERATIONS_H
				  		

#import <orc.h>
#import "MSOneNoteModels.h"
#import "MSOrcOperations.h"


/** MSOneNoteSectionOperations
 *
 */
@interface MSOneNoteSectionOperations : MSOrcOperations

- (instancetype)initOperationWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

- (void)copyToNotebookWithId:(NSString *)_id siteCollectionId:(NSString *)siteCollectionId siteId:(NSString *)siteId groupId:(NSString *)groupId renameAs:(NSString *)renameAs callback:(void (^)(MSOneNoteCopyStatusModel *, MSOrcError*))callback ;
- (void)copyToNotebookRawWithId:(NSString *)_id siteCollectionId:(NSString *)siteCollectionId siteId:(NSString *)siteId groupId:(NSString *)groupId renameAs:(NSString *)renameAs callback:(void (^)(NSString *, MSOrcError*))callback ;
- (void)copyToSectionGroupWithId:(NSString *)_id siteCollectionId:(NSString *)siteCollectionId siteId:(NSString *)siteId groupId:(NSString *)groupId renameAs:(NSString *)renameAs callback:(void (^)(MSOneNoteCopyStatusModel *, MSOrcError*))callback ;
- (void)copyToSectionGroupRawWithId:(NSString *)_id siteCollectionId:(NSString *)siteCollectionId siteId:(NSString *)siteId groupId:(NSString *)groupId renameAs:(NSString *)renameAs callback:(void (^)(NSString *, MSOrcError*))callback ;
- (void)thumbnailWithCallback:(void (^)(NSStream *, MSOrcError*))callback ;
- (void)thumbnailRawWithCallback:(void (^)(NSString *, MSOrcError*))callback ;

@end

#endif
