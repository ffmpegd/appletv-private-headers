/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVITunesTouchRemoteManager.h"
#import "BRSingleton.h"


@interface ATVITunesLibraryTouchRemoteAccess : BRSingleton <ATVITunesTouchRemoteManager> {
@private
	id<ATVITunesTouchRemoteManager> _delegate;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x35d11845
+ (id)singleton;	// 0x35d11835
- (void)dealloc;	// 0x35d11855
- (void)pairWithTouchRemote:(id)touchRemote withPIN:(id)pin;	// 0x35d11945
- (id)pairableTouchRemotes;	// 0x35d11925
- (id)pairedTouchRemotes;	// 0x35d118e1
- (BOOL)removePairedTouchRemote:(id)remote;	// 0x35d11901
- (unsigned long)sendGeneralPurposeMessage:(id)message;	// 0x35d11965
- (void)setITunesTouchRemoteManagerDelegate:(id)delegate;	// 0x35d118a1
@end

