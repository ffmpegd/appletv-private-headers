/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UILabel.h> // Unknown library
#import "Preferences-Structs.h"

@class NSURL;

@interface PrefsUILinkLabel : UILabel {
	NSURL *_url;	// 144 = 0x90
	BOOL _touchingURL;	// 148 = 0x94
	id _target;	// 152 = 0x98
	SEL _action;	// 156 = 0x9c
@private
	NSURL *_URL;	// 160 = 0xa0
}
@property(retain, nonatomic) NSURL *URL;	// G=0x354ddfe1; S=0x354ddcc9; @synthesize=_URL
@property(assign, nonatomic) SEL action;	// G=0x354de001; S=0x354ddc49; @synthesize=_action
@property(assign, nonatomic) id target;	// G=0x354ddff1; S=0x354ddc89; @synthesize=_target
- (id)initWithFrame:(CGRect)frame;	// 0x354ddb19
// declared property getter: - (id)URL;	// 0x354ddfe1
// declared property getter: - (SEL)action;	// 0x354de001
- (id)color:(id)color byMultiplyingSubComponentsBy:(float)by;	// 0x354ddf59
- (void)dealloc;	// 0x354ddbfd
- (void)openURL:(id)url;	// 0x354ddd0d
// declared property setter: - (void)setAction:(SEL)action;	// 0x354ddc49
// declared property setter: - (void)setTarget:(id)target;	// 0x354ddc89
// declared property setter: - (void)setURL:(id)url;	// 0x354ddcc9
- (void)tappedLink:(id)link;	// 0x354ddecd
// declared property getter: - (id)target;	// 0x354ddff1
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x354ddd5d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x354dde8d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x354dde4d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x354dddb5
@end
