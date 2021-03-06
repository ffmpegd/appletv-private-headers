/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVCalendarServerPushTransportsItem : CoreDAVItem {
	NSMutableSet *_transports;	// 28 = 0x1c
}
@property(retain) NSMutableSet *transports;	// G=0x34c1c7d5; S=0x34c1c7e9; @synthesize=_transports
+ (id)copyParseRules;	// 0x34c1c5ad
- (id)init;	// 0x34c1c471
- (void)addTransport:(id)transport;	// 0x34c1c73d
- (void)dealloc;	// 0x34c1c49d
- (id)description;	// 0x34c1c4e9
// declared property setter: - (void)setTransports:(id)transports;	// 0x34c1c7e9
// declared property getter: - (id)transports;	// 0x34c1c7d5
@end

