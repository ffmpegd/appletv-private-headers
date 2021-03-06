/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class WDCharacterProperties, NSDate;

__attribute__((visibility("hidden")))
@interface WDDateTime : WDRun {
@private
	WDCharacterProperties *mProperties;	// 8 = 0x8
	NSDate *mDate;	// 12 = 0xc
}
@property(retain) id properties;	// G=0x32d20c61; S=0x32d20cad; converted property
- (id)initWithParagraph:(id)paragraph date:(id)date;	// 0x32d20ce5
- (void)clearProperties;	// 0x32d20c85
- (id)date;	// 0x32d20c71
- (void)dealloc;	// 0x32d20d91
// converted property getter: - (id)properties;	// 0x32d20c61
- (int)runType;	// 0x32d20c81
// converted property setter: - (void)setProperties:(id)properties;	// 0x32d20cad
@end

