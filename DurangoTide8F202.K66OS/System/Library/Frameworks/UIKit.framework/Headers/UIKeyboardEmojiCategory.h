/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCategory : NSObject {
@private
	NSString *_name;	// 4 = 0x4
	NSArray *_emoji;	// 8 = 0x8
	int _lastViewedPage;	// 12 = 0xc
}
@property(retain) NSArray *emoji;	// G=0x307aab0d; S=0x307aab51; @synthesize=_emoji
@property(assign) int lastViewedPage;	// G=0x307aaad5; S=0x307aaae5; @synthesize=_lastViewedPage
@property(retain) NSString *name;	// G=0x307aaaf5; S=0x307aab25; @synthesize=_name
// declared property getter: - (id)emoji;	// 0x307aab0d
// declared property getter: - (int)lastViewedPage;	// 0x307aaad5
// declared property getter: - (id)name;	// 0x307aaaf5
// declared property setter: - (void)setEmoji:(id)emoji;	// 0x307aab51
// declared property setter: - (void)setLastViewedPage:(int)page;	// 0x307aaae5
// declared property setter: - (void)setName:(id)name;	// 0x307aab25
@end
