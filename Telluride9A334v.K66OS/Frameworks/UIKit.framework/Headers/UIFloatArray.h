/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UIFloatArray : NSObject {
@private
	int _count;	// 4 = 0x4
	int _gapCount;	// 8 = 0x8
	int *_gaps;	// 12 = 0xc
	float _gapValue;	// 16 = 0x10
	float _minValue;	// 20 = 0x14
	union {
		float singleton;
		float *array;
	} _values;	// 24 = 0x18
	struct {
		unsigned valueIsSingleton : 1;
		unsigned hideGaps : 1;
		unsigned unused : 30;
	} _floatArrayFlags;	// 28 = 0x1c
}
@property(readonly, assign) float minValue;	// G=0x30208ef5; converted property
- (id)init;	// 0x30208cf9
- (XXStruct_7U_TLD)_indexesViaArrayFromOffset:(float)offset toOffset:(float)offset2;	// 0x3020961d
- (XXStruct_7U_TLD)_indexesViaSingletonFromOffset:(float)offset toOffset:(float)offset2;	// 0x30209349
- (BOOL)_setupGapIndexesWithCount:(int)count dataProvider:(id)provider isRefresh:(BOOL)refresh;	// 0x30208b81
- (BOOL)_setupValuesWithCount:(int)count dataProvider:(id)provider isRefresh:(BOOL)refresh;	// 0x30208a01
- (BOOL)_setupValuesWithCount:(int)count singleValue:(float)value isRefresh:(BOOL)refresh;	// 0x30208925
- (BOOL)_setupWithDataProvider:(id)dataProvider valueIsSingleton:(BOOL)singleton singletonValue:(float)value isRefresh:(BOOL)refresh;	// 0x30208c55
- (id)copyWithZone:(NSZone *)zone;	// 0x30208d45
- (void)dealloc;	// 0x30208df5
- (void)hideGaps:(BOOL)gaps;	// 0x30209819
- (int)indexForGapIndex:(int)gapIndex;	// 0x302097e9
- (XXStruct_7U_TLD)indexesFromOffset:(float)offset toOffset:(float)offset2;	// 0x3020979d
// converted property getter: - (float)minValue;	// 0x30208ef5
- (CGPoint)offsetsForGapIndex:(int)gapIndex;	// 0x302091bd
- (CGPoint)offsetsForIndex:(int)index;	// 0x3020901d
- (BOOL)refreshWithDataProvider:(id)dataProvider;	// 0x30208e89
- (BOOL)refreshWithDataProvider:(id)dataProvider singleValue:(float)value;	// 0x30208e65
- (float)singleValue;	// 0x30208ead
- (float)sum;	// 0x30208f15
- (int)valueCount;	// 0x30208f05
@end

