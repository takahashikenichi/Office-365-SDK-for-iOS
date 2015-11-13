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


#ifndef MSGRAPHPLANTASKBOARD_H
#define MSGRAPHPLANTASKBOARD_H

#import <Foundation/Foundation.h>
#import "core/MSOrcChangesTrackingArray.h"

#import "MSGraphTaskBoardType.h"
#import "core/MSOrcBaseEntity.h"
#import "api/MSOrcInteroperableWithDictionary.h"

/** Interface MSGraphPlanTaskBoard
 *
 */
@interface MSGraphPlanTaskBoard : MSOrcBaseEntity <MSOrcInteroperableWithDictionary>

/** Property type
 *
 */
@property (nonatomic,  setter=setType:, getter=type) MSGraphTaskBoardType type;

- (void)setTypeString:(NSString *)string;

/** Property _id
 *
 */
@property (nonatomic,  copy, setter=setId:, getter=_id) NSString * _id;


+ (NSDictionary *) $$$_$$$propertiesNamesMappings;


@end

#endif