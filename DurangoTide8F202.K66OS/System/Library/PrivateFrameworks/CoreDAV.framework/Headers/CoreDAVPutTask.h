/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPostOrPutTask.h"

@class NSString;
@protocol CoreDAVTaskDelegate;

@interface CoreDAVPutTask : CoreDAVPostOrPutTask {
	NSString *_newETag;	// 128 = 0x80
}
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
@property(retain) NSString *newETag;	// G=0x317a7a61; S=0x317a7ac1; @synthesize=_newETag
- (void)dealloc;	// 0x317a77fd
- (id)description;	// 0x317a774d
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x317a7c2d
- (id)httpMethod;	// 0x317a7491
// declared property getter: - (id)newETag;	// 0x317a7a61
// declared property setter: - (void)setNewETag:(id)tag;	// 0x317a7ac1
@end

