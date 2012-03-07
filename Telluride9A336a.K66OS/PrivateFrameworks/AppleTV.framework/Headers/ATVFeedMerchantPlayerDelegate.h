/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRPlayerDelegate.h"
#import "AppleTV-Structs.h"
#import "BRTransportDataProvider.h"
#import <NSObject.h> // Unknown library

@class NSSet, ATVFeedMerchant;

__attribute__((visibility("hidden")))
@interface ATVFeedMerchantPlayerDelegate : NSObject <BRPlayerDelegate, BRTransportDataProvider> {
@private
	ATVFeedMerchant *_merchant;	// 4 = 0x4
	NSSet *functions;	// 8 = 0x8
}
@property(retain, nonatomic) NSSet *functions;	// G=0x33b75eb5; S=0x33b75ec5; @synthesize
@property(assign, nonatomic) ATVFeedMerchant *merchant;	// G=0x33b75e95; S=0x33b75ea5; @synthesize=_merchant
+ (void)initialize;	// 0x33b75235
- (id)initWithFeedMerchant:(id)feedMerchant;	// 0x33b752bd
- (void)_playerProgressChanged:(id)changed;	// 0x33b75ee9
- (BRTimeRange)bufferedRange;	// 0x33b75855
- (float)bufferingProgress;	// 0x33b758ad
- (id)chapterAtIndex:(long)index;	// 0x33b759a1
- (id)chapterGroupAtIndex:(long)index;	// 0x33b75c21
- (long)chapterGroupCount;	// 0x33b75b99
- (long)chapterGroupIndex;	// 0x33b75bdd
- (id)chapters;	// 0x33b758f1
- (long)currentChapterIndex;	// 0x33b75a45
- (long)currentInterstitialIndex;	// 0x33b75dc1
- (void)dealloc;	// 0x33b753a9
- (double)duration;	// 0x33b75725
- (double)elapsedTime;	// 0x33b757bd
// declared property getter: - (id)functions;	// 0x33b75eb5
- (id)interstitialTimes;	// 0x33b75c69
// declared property getter: - (id)merchant;	// 0x33b75e95
- (id)playbackDate;	// 0x33b75b55
- (BOOL)player:(id)player shouldHandleEvent:(id)event playerTime:(double)time;	// 0x33b75521
- (double)player:(id)player willSeekToTime:(double)time;	// 0x33b7542d
- (int)playerState;	// 0x33b756e1
- (void)playerTimeDidChange:(double)playerTime;	// 0x33b75619
// declared property setter: - (void)setFunctions:(id)functions;	// 0x33b75ec5
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x33b75ea5
- (BOOL)supportsBufferedRange;	// 0x33b75811
- (double)virtualChapterMark;	// 0x33b75b01
@end

