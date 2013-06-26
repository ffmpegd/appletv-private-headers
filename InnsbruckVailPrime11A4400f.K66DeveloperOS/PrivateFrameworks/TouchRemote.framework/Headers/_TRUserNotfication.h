/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import "TouchRemote-Structs.h"
#import </libobjc.A.h>


@interface _TRUserNotfication : NSObject {
	CFUserNotificationRef _userNotification;	// 4 = 0x4
	long _response;	// 8 = 0x8
	unsigned long _responseFlags;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) CFUserNotificationRef CFUserNotification;	// G=0x32c26215; 
@property(readonly, assign, nonatomic) long response;	// G=0x32c26271; @synthesize=_response
@property(readonly, assign, nonatomic) unsigned long responseFlags;	// G=0x32c26281; @synthesize=_responseFlags
- (id)initWithDictionary:(id)dictionary options:(unsigned long)options error:(int *)error;	// 0x32c26111
// declared property getter: - (CFUserNotificationRef)CFUserNotification;	// 0x32c26215
- (void)cancel;	// 0x32c26201
- (void)dealloc;	// 0x32c261b9
// declared property getter: - (long)response;	// 0x32c26271
// declared property getter: - (unsigned long)responseFlags;	// 0x32c26281
- (void)show;	// 0x32c26229
@end
