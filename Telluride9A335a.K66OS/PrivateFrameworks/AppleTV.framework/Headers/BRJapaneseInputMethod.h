/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRInputMethod.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BRJapaneseInputMethod : BRInputMethod {
@private
	NSString *_mostRecentCandidateBaseCharacter;	// 32 = 0x20
}
- (id)_keyboardsForTextEntryStyle:(int)textEntryStyle;	// 0x34217d29
- (id)candidates;	// 0x34217d25
- (void)dealloc;	// 0x34217c85
- (BOOL)inputText:(id)text;	// 0x34217d21
- (id)isoLanguageCode;	// 0x34217cdd
- (id)name;	// 0x34217cd1
- (BOOL)usesCandidateDisplayForKeyboard:(id)keyboard;	// 0x34217ce9
@end

