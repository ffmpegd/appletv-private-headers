/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBackgroundTask.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVRedDotCachingTask : BRBackgroundTask {
	BOOL _isRunning;	// 44 = 0x2c
	BOOL _isCancelled;	// 45 = 0x2d
	NSMutableArray *_fetchKeys;	// 48 = 0x30
	NSMutableArray *_favorites;	// 52 = 0x34
}
@property(retain) NSMutableArray *favorites;	// G=0x3c8be5; S=0x3c8bf9; @synthesize=_favorites
@property(retain) NSMutableArray *fetchKeys;	// G=0x3c8bc1; S=0x3c8bd5; @synthesize=_fetchKeys
@property(assign) BOOL isCancelled;	// G=0x3c8b91; S=0x3c8ba9; @synthesize=_isCancelled
@property(assign) BOOL isRunning;	// G=0x3c8b61; S=0x3c8b79; @synthesize=_isRunning
+ (void)startPeriodicUpdateTaskIfNeeded;	// 0x3c8aa5
- (id)initWithInterval:(double)interval delay:(double)delay userInfo:(id)info taskType:(int)type;	// 0x3c8491
- (void).cxx_destruct;	// 0x3c8c09
- (void)_fetchStoreFavorites;	// 0x3c85a9
- (void)_finish;	// 0x3c8a25
- (void)_processFavorites;	// 0x3c8751
// declared property getter: - (id)favorites;	// 0x3c8be5
// declared property getter: - (id)fetchKeys;	// 0x3c8bc1
// declared property getter: - (BOOL)isCancelled;	// 0x3c8b91
// declared property getter: - (BOOL)isRunning;	// 0x3c8b61
- (BOOL)perform:(id)perform;	// 0x3c8515
// declared property setter: - (void)setFavorites:(id)favorites;	// 0x3c8bf9
// declared property setter: - (void)setFetchKeys:(id)keys;	// 0x3c8bd5
// declared property setter: - (void)setIsCancelled:(BOOL)cancelled;	// 0x3c8ba9
// declared property setter: - (void)setIsRunning:(BOOL)running;	// 0x3c8b79
- (void)stop;	// 0x3c8571
@end

