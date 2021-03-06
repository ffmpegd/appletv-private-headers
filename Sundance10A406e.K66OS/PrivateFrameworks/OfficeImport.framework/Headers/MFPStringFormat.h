/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


@interface MFPStringFormat : NSObject {
	int mAlignment;	// 4 = 0x4
	unsigned short mDigitSubstitutionLanguage;	// 8 = 0x8
	int mDigitSubstitutionMethod;	// 12 = 0xc
	unsigned long mFormatFlags;	// 16 = 0x10
	int mHotkeyPrefix;	// 20 = 0x14
	int mLineAlignment;	// 24 = 0x18
	float mFirstTabOffset;	// 28 = 0x1c
	int mTabStopCount;	// 32 = 0x20
	float *mTabStops;	// 36 = 0x24
	int mTrimming;	// 40 = 0x28
}
@property(assign) int alignment;	// G=0x35157509; S=0x35157519; converted property
@property(assign) unsigned short digitSubstitutionLanguage;	// G=0x35157529; S=0x35157539; converted property
@property(assign) int digitSubstitutionMethod;	// G=0x35157549; S=0x35157559; converted property
@property(assign) float firstTabOffset;	// G=0x351575c9; S=0x351575d9; converted property
@property(assign) unsigned long formatFlags;	// G=0x35157569; S=0x35157579; converted property
@property(assign) int hotkeyPrefix;	// G=0x35157589; S=0x35157599; converted property
@property(assign) int lineAlignment;	// G=0x351575a9; S=0x351575b9; converted property
@property(assign) int trimming;	// G=0x35157679; S=0x35157689; converted property
- (id)init;	// 0x35157485
// converted property getter: - (int)alignment;	// 0x35157509
- (void)dealloc;	// 0x351574c5
// converted property getter: - (unsigned short)digitSubstitutionLanguage;	// 0x35157529
// converted property getter: - (int)digitSubstitutionMethod;	// 0x35157549
// converted property getter: - (float)firstTabOffset;	// 0x351575c9
// converted property getter: - (unsigned long)formatFlags;	// 0x35157569
// converted property getter: - (int)hotkeyPrefix;	// 0x35157589
// converted property getter: - (int)lineAlignment;	// 0x351575a9
// converted property setter: - (void)setAlignment:(int)alignment;	// 0x35157519
// converted property setter: - (void)setDigitSubstitutionLanguage:(unsigned short)language;	// 0x35157539
// converted property setter: - (void)setDigitSubstitutionMethod:(int)method;	// 0x35157559
// converted property setter: - (void)setFirstTabOffset:(float)offset;	// 0x351575d9
// converted property setter: - (void)setFormatFlags:(unsigned long)flags;	// 0x35157579
// converted property setter: - (void)setHotkeyPrefix:(int)prefix;	// 0x35157599
// converted property setter: - (void)setLineAlignment:(int)alignment;	// 0x351575b9
- (void)setTabStops:(const float *)stops count:(int)count;	// 0x35157609
// converted property setter: - (void)setTrimming:(int)trimming;	// 0x35157689
- (int)tabStopCount;	// 0x351575e9
- (const float *)tabStops;	// 0x351575f9
// converted property getter: - (int)trimming;	// 0x35157679
@end

