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


#ifndef MSGRAPHDIRECTORYOBJECT_H
#define MSGRAPHDIRECTORYOBJECT_H

#import <Foundation/Foundation.h>

#import "MSOrcBaseEntity.h"

/** Interface MSGraphDirectoryObject
 *
 */
@interface MSGraphDirectoryObject : MSOrcBaseEntity

/** Property objectType
 *
 */
@property (nonatomic,  copy, setter=setObjectType:, getter=objectType) NSString * objectType;

/** Property objectId
 *
 */
@property (nonatomic,  copy, setter=setObjectId:, getter=objectId) NSString * objectId;

/** Property deletionTimestamp
 *
 */
@property (nonatomic,  copy, setter=setDeletionTimestamp:, getter=deletionTimestamp) NSDate * deletionTimestamp;


+ (NSDictionary *) $$$_$$$propertiesNamesMappings;


@end

#endif
