/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVCopyOrMoveTask.h"

@protocol CoreDAVCopyTaskDelegate;

@interface CoreDAVCopyTask : CoreDAVCopyOrMoveTask {
}
@property(assign, nonatomic) id<CoreDAVCopyTaskDelegate> delegate;	// @dynamic
- (void)_callBackToDelegateWithResponses:(id)responses error:(id)error;	// 0x303c8be1
- (void)dealloc;	// 0x303c8b1d
- (id)httpMethod;	// 0x303c8b11
- (BOOL)validate:(id *)validate;	// 0x303c8b61
@end

