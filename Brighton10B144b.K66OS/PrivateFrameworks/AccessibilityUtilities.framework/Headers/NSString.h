/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import "AccessibilityUtilities-Structs.h"
#import <NSString.h> // Unknown library


@interface NSString (AXPriv)
+ (USet *)_characterSetWithPattern:(id)pattern;	// 0x33398109
+ (USet *)_ideographSet;	// 0x333981dd
+ (USet *)_japaneseLetterSet;	// 0x33398329
- (BOOL)_contentsExclusivelyInCharacterSet:(USet *)characterSet;	// 0x33398279
- (BOOL)_isJapanesePhrase;	// 0x33398409
- (BOOL)_isOnlyIdeographs;	// 0x333983c9
@end
