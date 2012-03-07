/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRMediaParadeLayer, BRMediaParadeProvider;

@interface BRMediaParadeControl : BRControl {
@private
	BRMediaParadeLayer *_layer;	// 48 = 0x30
	BRMediaParadeProvider *_provider;	// 52 = 0x34
	BOOL _waitingForQueue;	// 56 = 0x38
	BOOL _pumpPrimed;	// 57 = 0x39
	BOOL _serializeArtwork;	// 58 = 0x3a
}
- (id)init;	// 0x35e10601
- (void)_queueReady:(id)ready;	// 0x35e10a51
- (void)_startFeeding;	// 0x35e10ad1
- (void)_startFeedingWhenQueueReady;	// 0x35e10a81
- (void)controlWasActivated;	// 0x35e10855
- (void)controlWasDeactivated;	// 0x35e108d5
- (void)dealloc;	// 0x35e1079d
- (void)setDeletterboxAssetArtwork:(BOOL)artwork;	// 0x35e109f9
- (void)setImageProxies:(id)proxies;	// 0x35e1098d
- (void)setSerializeArtwork:(BOOL)artwork;	// 0x35e10a19
@end
