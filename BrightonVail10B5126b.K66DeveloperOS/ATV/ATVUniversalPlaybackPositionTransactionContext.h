/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MZUniversalPlaybackPositionTransactionContext.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ATVUniversalPlaybackPositionTransactionContext : XXUnknownSuperclass <MZUniversalPlaybackPositionTransactionContext> {
	NSString *_lastSyncedDomainVersion;	// 4 = 0x4
	NSDictionary *_changes;	// 8 = 0x8
}
@property(retain, nonatomic) NSDictionary *changes;	// G=0x3ba27d; S=0x3ba28d; @synthesize=_changes
@property(copy, nonatomic) NSString *lastSyncedDomainVersion;	// G=0x3ba259; S=0x3ba26d; @synthesize=_lastSyncedDomainVersion
// declared property getter: - (id)changes;	// 0x3ba27d
- (void)dealloc;	// 0x3ba1f5
// declared property getter: - (id)lastSyncedDomainVersion;	// 0x3ba259
// declared property setter: - (void)setChanges:(id)changes;	// 0x3ba28d
// declared property setter: - (void)setLastSyncedDomainVersion:(id)version;	// 0x3ba26d
@end
