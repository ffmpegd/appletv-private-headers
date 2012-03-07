/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVCalendarServerPushTransportsItem : CoreDAVItem {
	NSMutableSet *_transports;	// 24 = 0x18
}
@property(retain) NSMutableSet *transports;	// G=0x31003719; S=0x3100372d; @synthesize=_transports
- (id)init;	// 0x3100343d
- (void)addTransport:(id)transport;	// 0x3100367d
- (id)copyParseRules;	// 0x31003579
- (void)dealloc;	// 0x31003469
- (id)description;	// 0x310034b5
// declared property setter: - (void)setTransports:(id)transports;	// 0x3100372d
// declared property getter: - (id)transports;	// 0x31003719
@end

