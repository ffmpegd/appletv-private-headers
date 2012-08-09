/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface GQDChartModel : NSObject {
	CFArrayRef mChartData;	// 4 = 0x4
	CFArrayRef mColumnNames;	// 8 = 0x8
	CFArrayRef mRowNames;	// 12 = 0xc
	CFDictionaryRef mPropertyBag;	// 16 = 0x10
	long mDirection;	// 20 = 0x14
	CFStringRef mTitle;	// 24 = 0x18
	CFStringRef mCatagoryTitle;	// 28 = 0x1c
	CFStringRef mValueTitle;	// 32 = 0x20
	CFStringRef mValue2Title;	// 36 = 0x24
	CFBundleRef mProcessorBundle;	// 40 = 0x28
	BOOL mIsFormulaChart;	// 44 = 0x2c
}
- (CFStringRef)catagoryTitle;	// 0x34be2321
- (CFArrayRef)chartData;	// 0x34be213d
- (CFArrayRef)columnNames;	// 0x34be214d
- (void)dealloc;	// 0x34be23fd
- (long)direction;	// 0x34be22cd
- (BOOL)hasFloatValueForProperty:(CFStringRef)property forSeriesAtIndex:(long)index value:(float *)value;	// 0x34be2295
- (BOOL)hasIntValueForProperty:(CFStringRef)property forSeriesAtIndex:(long)index value:(int *)value;	// 0x34be225d
- (BOOL)hasStringValueForProperty:(CFStringRef)property forSeriesAtIndex:(long)index value:(const CFStringRef *)value;	// 0x34be2229
- (BOOL)hasValueForProperty:(CFStringRef)property forSeriesAtIndex:(long)index value:(const void **)value;	// 0x34be21e1
- (BOOL)isFormulaChart;	// 0x34be23ed
- (CFDictionaryRef)propertiesForSeriesAtIndex:(long)index;	// 0x34be21a9
- (CFDictionaryRef)propertyBag;	// 0x34be216d
- (CFArrayRef)rowNames;	// 0x34be215d
- (CFArrayRef)seriesArray;	// 0x34be217d
- (void)setProcessorBundle:(CFBundleRef)bundle;	// 0x34be25c9
- (CFStringRef)title;	// 0x34be22dd
- (void)transpose;	// 0x34be24dd
- (CFStringRef)value2Title;	// 0x34be23a9
- (CFStringRef)valueTitle;	// 0x34be2365
@end
