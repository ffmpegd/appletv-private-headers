/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIColor;

__attribute__((visibility("hidden")))
@interface UITableViewCellUnhighlightedState : NSObject {
@private
	BOOL _opaque;	// 4 = 0x4
	BOOL _highlighted;	// 5 = 0x5
	UIColor *_backgroundColor;	// 8 = 0x8
}
@property(retain) UIColor *backgroundColor;	// G=0x33aa7035; S=0x33aa5381; @synthesize=_backgroundColor
@property(assign) BOOL highlighted;	// G=0x33abdc09; S=0x33abdbf9; @synthesize=_highlighted
@property(assign) BOOL opaque;	// G=0x33aa7025; S=0x33aa5371; @synthesize=_opaque
// declared property getter: - (id)backgroundColor;	// 0x33aa7035
- (void)dealloc;	// 0x33aa7049
// declared property getter: - (BOOL)highlighted;	// 0x33abdc09
// declared property getter: - (BOOL)opaque;	// 0x33aa7025
// declared property setter: - (void)setBackgroundColor:(id)color;	// 0x33aa5381
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x33abdbf9
// declared property setter: - (void)setOpaque:(BOOL)opaque;	// 0x33aa5371
@end

