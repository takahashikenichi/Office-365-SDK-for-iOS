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


#ifndef MSGRAPHMEETINGMESSAGETYPE_H
#define MSGRAPHMEETINGMESSAGETYPE_H

#import <Foundation/Foundation.h>

/** Enum MSGraphMeetingMessageType
 *
 */
typedef NS_ENUM(NSInteger, MSGraphMeetingMessageType) {

    /** Enum entry MSGraphMeetingMessageTypeNone
     * */
    MSGraphMeetingMessageTypeNone,
    /** Enum entry MSGraphMeetingMessageTypeMeetingRequest
     * */
    MSGraphMeetingMessageTypeMeetingRequest,
    /** Enum entry MSGraphMeetingMessageTypeMeetingCancelled
     * */
    MSGraphMeetingMessageTypeMeetingCancelled,
    /** Enum entry MSGraphMeetingMessageTypeMeetingAccepted
     * */
    MSGraphMeetingMessageTypeMeetingAccepted,
    /** Enum entry MSGraphMeetingMessageTypeMeetingTenativelyAccepted
     * */
    MSGraphMeetingMessageTypeMeetingTenativelyAccepted,
    /** Enum entry MSGraphMeetingMessageTypeMeetingDeclined
     * */
    MSGraphMeetingMessageTypeMeetingDeclined
};

#endif
