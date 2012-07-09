/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDCharacterRun.h"

@class WDRubyProperties;

__attribute__((visibility("hidden")))
@interface WDRubyRun : WDCharacterRun {
@private
	WDCharacterRun *mPhoneticRun;	// 20 = 0x14
	WDRubyProperties *mRubyProperties;	// 24 = 0x18
}
@property(retain) id phoneticRunString;	// G=0x31303d99; S=0x31303db9; converted property
- (id)initWithParagraph:(id)paragraph;	// 0x31303cd1
- (void)appendPhoneticRunString:(id)string;	// 0x31303dd9
- (void)dealloc;	// 0x31303c8d
- (id)phoneticRun;	// 0x31303d89
// converted property getter: - (id)phoneticRunString;	// 0x31303d99
- (id)rubyBase;	// 0x31303df9
- (id)rubyProperties;	// 0x31303d79
- (int)runType;	// 0x31303d75
// converted property setter: - (void)setPhoneticRunString:(id)string;	// 0x31303db9
@end
