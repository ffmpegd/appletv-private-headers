/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVMediaOption.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AVMediaSelectionOption, NSString;

__attribute__((visibility("hidden")))
@interface ATVAudioOption : XXUnknownSuperclass <ATVMediaOption> {
	AVMediaSelectionOption *_selectionOption;	// 4 = 0x4
	NSString *_ac3SuffixString;	// 8 = 0x8
}
+ (id)audioOptionFromOption:(id)option;	// 0x21b0b9
- (id)initWithOption:(id)option;	// 0x21b0f5
- (id)_selectionOption;	// 0x21b499
- (void)dealloc;	// 0x21b189
- (BOOL)isEqual:(id)equal;	// 0x21b1ed
- (id)languageCode;	// 0x21b2e5
- (id)locale;	// 0x21b2c5
- (id)localizedDisplayString;	// 0x21b329
- (id)localizedDisplayStringForIdentifier;	// 0x21b3e1
- (void)saveToDiskForMediaAsset:(id)mediaAsset;	// 0x21b269
@end
