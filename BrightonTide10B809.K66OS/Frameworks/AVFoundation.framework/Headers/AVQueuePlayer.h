/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVPlayer.h"
#import "AVFoundation-Structs.h"

@class AVQueuePlayerInternal;

@interface AVQueuePlayer : AVPlayer {
	AVQueuePlayerInternal *_queuePlayer;	// 8 = 0x8
}
+ (void)initialize;	// 0x30266b1d
+ (id)playerWithPlayerItem:(id)playerItem;	// 0x30266b81
+ (id)playerWithURL:(id)url;	// 0x30266bc5
+ (id)queuePlayerWithItems:(id)items;	// 0x30266b39
- (id)init;	// 0x30266c09
- (id)initWithItems:(id)items;	// 0x30266c9d
- (int)_defaultActionAtItemEnd;	// 0x30266dd5
- (void)_enqueueModification:(id)modification;	// 0x30266ecd
- (BOOL)_shouldEnqueueModifications;	// 0x30266ea5
- (void)advanceToNextItem;	// 0x30266e19
- (void)beginModifications;	// 0x302671f5
- (BOOL)canInsertItem:(id)item afterItem:(id)item2;	// 0x30266e49
- (void)commitModifications;	// 0x30267219
- (void)dealloc;	// 0x30266d6d
- (void)insertItem:(id)item afterItem:(id)item2;	// 0x30266f71
- (id)items;	// 0x30266e09
- (void)removeAllItems;	// 0x3026714d
- (void)removeItem:(id)item;	// 0x3026706d
- (void)setActionAtItemEnd:(int)itemEnd;	// 0x30266dd9
@end
