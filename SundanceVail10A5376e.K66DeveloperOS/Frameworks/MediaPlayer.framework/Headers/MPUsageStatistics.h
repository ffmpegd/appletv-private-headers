/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol OS_dispatch_queue;

@interface MPUsageStatistics : NSObject {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	NSString *_domain;	// 8 = 0x8
	NSString *_lastAggregateStatisticsDisplayCountKey;	// 12 = 0xc
	double _lastAggregateStatisticsDisplayCountTime;	// 16 = 0x10
}
@property(readonly, retain) NSString *domain;	// G=0x36d68939; converted property
+ (id)sharedStatistics;	// 0x36d68701
- (id)init;	// 0x36d68775
- (void)dealloc;	// 0x36d687e5
// converted property getter: - (id)domain;	// 0x36d68939
- (void)incrementViewDisplayCountForKey:(id)key;	// 0x36d68b2d
- (void)incrementViewDisplayCountForViewController:(id)viewController;	// 0x36d68afd
- (void)setAggregateStatisticsDomain:(id)domain;	// 0x36d68859
@end

