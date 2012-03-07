/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class NSDate, WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDDateTime : WDRun {
@private
	WDCharacterProperties *mProperties;	// 8 = 0x8
	NSDate *mDate;	// 12 = 0xc
}
@property(retain) id properties;	// G=0x353b1c69; S=0x353b1c8d; converted property
- (id)initWithParagraph:(id)paragraph date:(id)date;	// 0x353b1d5d
- (void)clearProperties;	// 0x353b1cd1
- (id)date;	// 0x353b1c79
- (void)dealloc;	// 0x353b1cfd
// converted property getter: - (id)properties;	// 0x353b1c69
- (int)runType;	// 0x353b1c89
// converted property setter: - (void)setProperties:(id)properties;	// 0x353b1c8d
@end

