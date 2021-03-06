/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MEAssetExpirationMonitor.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate;

@interface MEAssetExpirationMonitor : XXUnknownSuperclass {
	NSDate *_executionDate;	// 44 = 0x2c
}
- (BOOL)perform:(id)perform;	// 0x147a1
@end

@interface MEAssetExpirationMonitor (Private)
- (void)_deleteAsset:(id)asset;	// 0x14801
- (BOOL)_isExpirationDate:(id)date approachingDate:(id)date2;	// 0x146b1
- (void)_performAssetExpirationCheck;	// 0x148c9
- (void)_updateExecutionDateToTodayPlus:(int)todayPlus;	// 0x14701
- (void)dealloc;	// 0x147b9
@end

