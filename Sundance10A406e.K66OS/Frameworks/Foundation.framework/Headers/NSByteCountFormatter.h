/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFormatter.h"
#import "Foundation-Structs.h"


@interface NSByteCountFormatter : NSFormatter {
	unsigned _allowedUnits;	// 4 = 0x4
	BOOL _countStyle;	// 8 = 0x8
	BOOL _allowsNonnumericFormatting;	// 9 = 0x9
	BOOL _includesUnit;	// 10 = 0xa
	BOOL _includesCount;	// 11 = 0xb
	BOOL _includesActualByteCount;	// 12 = 0xc
	BOOL _adaptive;	// 13 = 0xd
	BOOL _zeroPadsFractionDigits;	// 14 = 0xe
	int _reserved[6];	// 16 = 0x10
}
@property(assign, getter=isAdaptive) BOOL adaptive;	// G=0x35669765; S=0x3566977d; @synthesize=_adaptive
@property(assign) unsigned allowedUnits;	// G=0x35668dfd; S=0x35668e0d; 
@property(assign) BOOL allowsNonnumericFormatting;	// G=0x356696a5; S=0x356696bd; @synthesize=_allowsNonnumericFormatting
@property(assign) int countStyle;	// G=0x35668e1d; S=0x35668e2d; 
@property(assign) BOOL includesActualByteCount;	// G=0x35669735; S=0x3566974d; @synthesize=_includesActualByteCount
@property(assign) BOOL includesCount;	// G=0x35669705; S=0x3566971d; @synthesize=_includesCount
@property(assign) BOOL includesUnit;	// G=0x356696d5; S=0x356696ed; @synthesize=_includesUnit
@property(assign) BOOL zeroPadsFractionDigits;	// G=0x35669795; S=0x356697ad; @synthesize=_zeroPadsFractionDigits
+ (id)stringFromByteCount:(long long)byteCount countStyle:(int)style;	// 0x35668fb5
- (id)init;	// 0x35669099
- (id)initWithCoder:(id)coder;	// 0x356694a5
- (unsigned long long)_options;	// 0x35668e3d
// declared property getter: - (unsigned)allowedUnits;	// 0x35668dfd
// declared property getter: - (BOOL)allowsNonnumericFormatting;	// 0x356696a5
- (id)copyWithZone:(NSZone *)zone;	// 0x3566911d
// declared property getter: - (int)countStyle;	// 0x35668e1d
- (void)encodeWithCoder:(id)coder;	// 0x35669281
- (BOOL)getObjectValue:(out id *)value forString:(id)string errorDescription:(out id *)description;	// 0x35669091
// declared property getter: - (BOOL)includesActualByteCount;	// 0x35669735
// declared property getter: - (BOOL)includesCount;	// 0x35669705
// declared property getter: - (BOOL)includesUnit;	// 0x356696d5
// declared property getter: - (BOOL)isAdaptive;	// 0x35669765
- (BOOL)isPartialStringValid:(id *)valid proposedSelectedRange:(NSRange *)range originalString:(id)string originalSelectedRange:(NSRange)range4 errorDescription:(id *)description;	// 0x35669095
// declared property setter: - (void)setAdaptive:(BOOL)adaptive;	// 0x3566977d
// declared property setter: - (void)setAllowedUnits:(unsigned)units;	// 0x35668e0d
// declared property setter: - (void)setAllowsNonnumericFormatting:(BOOL)formatting;	// 0x356696bd
// declared property setter: - (void)setCountStyle:(int)style;	// 0x35668e2d
// declared property setter: - (void)setIncludesActualByteCount:(BOOL)count;	// 0x3566974d
// declared property setter: - (void)setIncludesCount:(BOOL)count;	// 0x3566971d
// declared property setter: - (void)setIncludesUnit:(BOOL)unit;	// 0x356696ed
// declared property setter: - (void)setZeroPadsFractionDigits:(BOOL)digits;	// 0x356697ad
- (id)stringForObjectValue:(id)objectValue;	// 0x35669029
- (id)stringFromByteCount:(long long)byteCount;	// 0x35668ff9
// declared property getter: - (BOOL)zeroPadsFractionDigits;	// 0x35669795
@end

