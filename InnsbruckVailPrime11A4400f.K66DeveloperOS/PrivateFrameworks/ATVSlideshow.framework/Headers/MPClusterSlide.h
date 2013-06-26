/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "NSCopying.h"
#import </libobjc.A.h>

@class NSMutableDictionary, NSMutableArray, NSString, NSDate;

@interface MPClusterSlide : NSObject <NSCopying> {
	NSDate *mCaptureDate;	// 4 = 0x4
	NSString *mPath;	// 8 = 0x8
	int mReferenceCounter;	// 12 = 0xc
	NSMutableDictionary *mUsageCounterPerLayer;	// 16 = 0x10
	NSMutableArray *mUsableSlideClusters;	// 20 = 0x14
	int mIndex;	// 24 = 0x18
}
@property(copy) NSDate *captureDate;	// G=0x2fb8aee5; S=0x2fb8aef9; @synthesize=mCaptureDate
@property(assign) int index;	// G=0x2fb8af35; S=0x2fb8af49; @synthesize=mIndex
@property(copy) NSString *path;	// G=0x2fb8aec1; S=0x2fb8aed5; @synthesize=mPath
@property(assign) int referenceCounter;	// G=0x2fb8af09; S=0x2fb8af1d; @synthesize=mReferenceCounter
@property(retain) NSMutableArray *usableSlideClusters;	// G=0x2fb8af85; S=0x2fb8af99; @synthesize=mUsableSlideClusters
@property(retain) NSMutableDictionary *usageCounterPerLayer;	// G=0x2fb8af61; S=0x2fb8af75; @synthesize=mUsageCounterPerLayer
- (id)init;	// 0x2fb8a6f5
// declared property getter: - (id)captureDate;	// 0x2fb8aee5
- (id)copyWithZone:(NSZone *)zone;	// 0x2fb8a82d
- (void)dealloc;	// 0x2fb8a785
- (id)description;	// 0x2fb8ae59
- (void)increaseUsageCounterForLayer:(id)layer;	// 0x2fb8a905
// declared property getter: - (int)index;	// 0x2fb8af35
- (int)overallUsageCounter;	// 0x2fb8ab51
// declared property getter: - (id)path;	// 0x2fb8aec1
// declared property getter: - (int)referenceCounter;	// 0x2fb8af09
- (void)resetAllUsageCounters;	// 0x2fb8ac2d
// declared property setter: - (void)setCaptureDate:(id)date;	// 0x2fb8aef9
// declared property setter: - (void)setIndex:(int)index;	// 0x2fb8af49
// declared property setter: - (void)setPath:(id)path;	// 0x2fb8aed5
// declared property setter: - (void)setReferenceCounter:(int)counter;	// 0x2fb8af1d
// declared property setter: - (void)setUsableSlideClusters:(id)clusters;	// 0x2fb8af99
- (void)setUsageCounterForLayer:(id)layer to:(int)to;	// 0x2fb8aa15
// declared property setter: - (void)setUsageCounterPerLayer:(id)layer;	// 0x2fb8af75
// declared property getter: - (id)usableSlideClusters;	// 0x2fb8af85
- (id)usageCountDescription;	// 0x2fb8acf5
- (int)usageCounterForLayer:(id)layer;	// 0x2fb8a9dd
// declared property getter: - (id)usageCounterPerLayer;	// 0x2fb8af61
@end
